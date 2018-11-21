#include "CfgRate.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgRate.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_measRate()
{
    using Field = ublox::message::CfgRateFields<>::MeasRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_navRate()
{
    using Field = ublox::message::CfgRateFields<>::NavRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_timeRef()
{
    using Field = ublox::message::CfgRateFields<>::TimeRef;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("UTC", 0)
            .add("GPS", 1)
            .add("GLONASS", 2)
            .add("BeiDou", 3)
            .add("Galileo", 4)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_measRate());
    props.append(createProps_navRate());
    props.append(createProps_timeRef());
    return props;
}

} // namespace

class CfgRateImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgRate<ublox::cc_plugin::Message>,
        CfgRateImpl
    >
{
public:
    CfgRateImpl() = default;
    CfgRateImpl(const CfgRateImpl&) = delete;
    CfgRateImpl(CfgRateImpl&&) = delete;
    virtual ~CfgRateImpl() = default;
    CfgRateImpl& operator=(const CfgRateImpl&) = default;
    CfgRateImpl& operator=(CfgRateImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRate::CfgRate() : m_pImpl(new CfgRateImpl) {}
CfgRate::~CfgRate() = default;

CfgRate& CfgRate::operator=(const CfgRate& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRate& CfgRate::operator=(CfgRate&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRate::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRate::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRate::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRate::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRate::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRate*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRate::MsgIdParamType CfgRate::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRate::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRate::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRate::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRate::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRate::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


