#include "CfgPrtUart.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPrtUart.h"
#include "cc_plugin/field/CfgPrtFlags.h"
#include "cc_plugin/field/CfgPrtInProtoMask.h"
#include "cc_plugin/field/CfgPrtOutProtoMask.h"
#include "cc_plugin/field/CfgPrtTxReady.h"
#include "cc_plugin/field/Res1.h"
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

static QVariantMap createProps_portId()
{
    using Field = ublox::message::CfgPrtUartFields<>::PortId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgPrtUartFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_txReady()
{
    using Field = ublox::message::CfgPrtUartFields<>::TxReady;
    return cc_plugin::field::createProps_cfgPrtTxReady(Field::name());
    
}

struct ModeMembers
{
    static QVariantMap createProps_reservedLow()
    {
        using Field = ublox::message::CfgPrtUartFields<>::ModeMembers::ReservedLow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_charLen()
    {
        using Field = ublox::message::CfgPrtUartFields<>::ModeMembers::CharLen;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("5 bits", 0)
                .add("6 bits", 1)
                .add("7 bits", 2)
                .add("8 bits", 3)
                .asMap();
        
    }
    
    static QVariantMap createProps_reservedMid()
    {
        using Field = ublox::message::CfgPrtUartFields<>::ModeMembers::ReservedMid;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_parity()
    {
        using Field = ublox::message::CfgPrtUartFields<>::ModeMembers::Parity;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Even", 0)
                .add("Odd", 1)
                .add("None", 4)
                .add("None (2)", 5)
                .asMap();
        
    }
    
    static QVariantMap createProps_nStopBits()
    {
        using Field = ublox::message::CfgPrtUartFields<>::ModeMembers::NStopBits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("1 bit", 0)
                .add("1.5 bits", 1)
                .add("2 bits", 2)
                .add("0.5 bit", 3)
                .asMap();
        
    }
    
    static QVariantMap createProps_reservedHigh()
    {
        using Field = ublox::message::CfgPrtUartFields<>::ModeMembers::ReservedHigh;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
};

static QVariantMap createProps_mode()
{
    using Field = ublox::message::CfgPrtUartFields<>::Mode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ModeMembers::createProps_reservedLow())
            .add(ModeMembers::createProps_charLen())
            .add(ModeMembers::createProps_reservedMid())
            .add(ModeMembers::createProps_parity())
            .add(ModeMembers::createProps_nStopBits())
            .add(ModeMembers::createProps_reservedHigh())
            .asMap();
    
}

static QVariantMap createProps_baudRate()
{
    using Field = ublox::message::CfgPrtUartFields<>::BaudRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_inProtoMask()
{
    using Field = ublox::message::CfgPrtUartFields<>::InProtoMask;
    return cc_plugin::field::createProps_cfgPrtInProtoMask(Field::name());
    
}

static QVariantMap createProps_outProtoMask()
{
    using Field = ublox::message::CfgPrtUartFields<>::OutProtoMask;
    return cc_plugin::field::createProps_cfgPrtOutProtoMask(Field::name());
    
}

static QVariantMap createProps_cfgPrtFlags()
{
    using Field = ublox::message::CfgPrtUartFields<>::CfgPrtFlags;
    return cc_plugin::field::createProps_cfgPrtFlags(Field::name());
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgPrtUartFields<>::Reserved2;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_portId());
    props.append(createProps_reserved1());
    props.append(createProps_txReady());
    props.append(createProps_mode());
    props.append(createProps_baudRate());
    props.append(createProps_inProtoMask());
    props.append(createProps_outProtoMask());
    props.append(createProps_cfgPrtFlags());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class CfgPrtUartImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPrtUart<ublox::cc_plugin::Message>,
        CfgPrtUartImpl
    >
{
public:
    CfgPrtUartImpl() = default;
    CfgPrtUartImpl(const CfgPrtUartImpl&) = delete;
    CfgPrtUartImpl(CfgPrtUartImpl&&) = delete;
    virtual ~CfgPrtUartImpl() = default;
    CfgPrtUartImpl& operator=(const CfgPrtUartImpl&) = default;
    CfgPrtUartImpl& operator=(CfgPrtUartImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtUart::CfgPrtUart() : m_pImpl(new CfgPrtUartImpl) {}
CfgPrtUart::~CfgPrtUart() = default;

CfgPrtUart& CfgPrtUart::operator=(const CfgPrtUart& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtUart& CfgPrtUart::operator=(CfgPrtUart&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPrtUart::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtUart::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtUart::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtUart::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtUart::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtUart*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtUart::MsgIdParamType CfgPrtUart::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtUart::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtUart::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtUart::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtUart::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtUart::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


