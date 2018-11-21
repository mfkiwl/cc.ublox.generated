#include "CfgPms.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPms.h"
#include "cc_plugin/field/Res2.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_version()
{
    using Field = ublox::message::CfgPmsFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_powerSetupValue()
{
    using Field = ublox::message::CfgPmsFields<>::PowerSetupValue;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Full power", 0)
            .add("Balanced", 1)
            .add("Interval", 2)
            .add("Aggressive with 1Hz", 3)
            .add("Aggressive with 2Hz", 4)
            .add("Aggressive with 4Hz", 5)
            .add("Invalid", 255)
            .asMap();
    
}

static QVariantMap createProps_period()
{
    using Field = ublox::message::CfgPmsFields<>::Period;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_onTime()
{
    using Field = ublox::message::CfgPmsFields<>::OnTime;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgPmsFields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_powerSetupValue());
    props.append(createProps_period());
    props.append(createProps_onTime());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class CfgPmsImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPms<ublox::cc_plugin::Message>,
        CfgPmsImpl
    >
{
public:
    CfgPmsImpl() = default;
    CfgPmsImpl(const CfgPmsImpl&) = delete;
    CfgPmsImpl(CfgPmsImpl&&) = delete;
    virtual ~CfgPmsImpl() = default;
    CfgPmsImpl& operator=(const CfgPmsImpl&) = default;
    CfgPmsImpl& operator=(CfgPmsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPms::CfgPms() : m_pImpl(new CfgPmsImpl) {}
CfgPms::~CfgPms() = default;

CfgPms& CfgPms::operator=(const CfgPms& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPms& CfgPms::operator=(CfgPms&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPms::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPms::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPms::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPms::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPms::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPms*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPms::MsgIdParamType CfgPms::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPms::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPms::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPms::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPms::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPms::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


