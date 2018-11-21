#include "CfgAnt.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgAnt.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgAntFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "svcs")
            .add(1U, "scd")
            .add(2U, "ocd")
            .add(3U, "pdwnOnSCD")
            .add(4U, "recovery")
            .asMap();
    
}

struct PinsMembers
{
    static QVariantMap createProps_pinSwitch()
    {
        using Field = ublox::message::CfgAntFields<>::PinsMembers::PinSwitch;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_pinSCD()
    {
        using Field = ublox::message::CfgAntFields<>::PinsMembers::PinSCD;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_pinOCD()
    {
        using Field = ublox::message::CfgAntFields<>::PinsMembers::PinOCD;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::CfgAntFields<>::PinsMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "reconfig")
                .asMap();
        
    }
    
};

static QVariantMap createProps_pins()
{
    using Field = ublox::message::CfgAntFields<>::Pins;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(PinsMembers::createProps_pinSwitch())
            .add(PinsMembers::createProps_pinSCD())
            .add(PinsMembers::createProps_pinOCD())
            .add(PinsMembers::createProps_bits())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_pins());
    return props;
}

} // namespace

class CfgAntImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgAnt<ublox::cc_plugin::Message>,
        CfgAntImpl
    >
{
public:
    CfgAntImpl() = default;
    CfgAntImpl(const CfgAntImpl&) = delete;
    CfgAntImpl(CfgAntImpl&&) = delete;
    virtual ~CfgAntImpl() = default;
    CfgAntImpl& operator=(const CfgAntImpl&) = default;
    CfgAntImpl& operator=(CfgAntImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgAnt::CfgAnt() : m_pImpl(new CfgAntImpl) {}
CfgAnt::~CfgAnt() = default;

CfgAnt& CfgAnt::operator=(const CfgAnt& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgAnt& CfgAnt::operator=(CfgAnt&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgAnt::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgAnt::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgAnt::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgAnt::resetImpl()
{
    m_pImpl->reset();
}

bool CfgAnt::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgAnt*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgAnt::MsgIdParamType CfgAnt::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgAnt::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgAnt::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgAnt::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgAnt::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgAnt::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


