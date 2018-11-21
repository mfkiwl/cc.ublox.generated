#include "CfgPwr.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPwr.h"
#include "cc_plugin/field/Res3.h"

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
    using Field = ublox::message::CfgPwrFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgPwrFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_state()
{
    using Field = ublox::message::CfgPwrFields<>::State;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Backup", 1111706448L)
            .add("Running", 1381322272L)
            .add("Stopped", 1398034256L)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_state());
    return props;
}

} // namespace

class CfgPwrImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPwr<ublox::cc_plugin::Message>,
        CfgPwrImpl
    >
{
public:
    CfgPwrImpl() = default;
    CfgPwrImpl(const CfgPwrImpl&) = delete;
    CfgPwrImpl(CfgPwrImpl&&) = delete;
    virtual ~CfgPwrImpl() = default;
    CfgPwrImpl& operator=(const CfgPwrImpl&) = default;
    CfgPwrImpl& operator=(CfgPwrImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPwr::CfgPwr() : m_pImpl(new CfgPwrImpl) {}
CfgPwr::~CfgPwr() = default;

CfgPwr& CfgPwr::operator=(const CfgPwr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPwr& CfgPwr::operator=(CfgPwr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPwr::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPwr::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPwr::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPwr::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPwr::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPwr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPwr::MsgIdParamType CfgPwr::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPwr::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPwr::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPwr::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPwr::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPwr::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


