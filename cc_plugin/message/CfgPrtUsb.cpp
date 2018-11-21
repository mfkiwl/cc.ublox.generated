#include "CfgPrtUsb.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPrtUsb.h"
#include "cc_plugin/field/CfgPrtFlags.h"
#include "cc_plugin/field/CfgPrtInProtoMask.h"
#include "cc_plugin/field/CfgPrtOutProtoMask.h"
#include "cc_plugin/field/CfgPrtTxReady.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res4.h"

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
    using Field = ublox::message::CfgPrtUsbFields<>::PortId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgPrtUsbFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_txReady()
{
    using Field = ublox::message::CfgPrtUsbFields<>::TxReady;
    return cc_plugin::field::createProps_cfgPrtTxReady(Field::name());
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgPrtUsbFields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

static QVariantMap createProps_inProtoMask()
{
    using Field = ublox::message::CfgPrtUsbFields<>::InProtoMask;
    return cc_plugin::field::createProps_cfgPrtInProtoMask(Field::name());
    
}

static QVariantMap createProps_outProtoMask()
{
    using Field = ublox::message::CfgPrtUsbFields<>::OutProtoMask;
    return cc_plugin::field::createProps_cfgPrtOutProtoMask(Field::name());
    
}

static QVariantMap createProps_cfgPrtFlags()
{
    using Field = ublox::message::CfgPrtUsbFields<>::CfgPrtFlags;
    return cc_plugin::field::createProps_cfgPrtFlags(Field::name());
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::CfgPrtUsbFields<>::Reserved3;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_reserved4()
{
    using Field = ublox::message::CfgPrtUsbFields<>::Reserved4;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_portId());
    props.append(createProps_reserved1());
    props.append(createProps_txReady());
    props.append(createProps_reserved2());
    props.append(createProps_inProtoMask());
    props.append(createProps_outProtoMask());
    props.append(createProps_cfgPrtFlags());
    props.append(createProps_reserved3());
    props.append(createProps_reserved4());
    return props;
}

} // namespace

class CfgPrtUsbImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPrtUsb<ublox::cc_plugin::Message>,
        CfgPrtUsbImpl
    >
{
public:
    CfgPrtUsbImpl() = default;
    CfgPrtUsbImpl(const CfgPrtUsbImpl&) = delete;
    CfgPrtUsbImpl(CfgPrtUsbImpl&&) = delete;
    virtual ~CfgPrtUsbImpl() = default;
    CfgPrtUsbImpl& operator=(const CfgPrtUsbImpl&) = default;
    CfgPrtUsbImpl& operator=(CfgPrtUsbImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtUsb::CfgPrtUsb() : m_pImpl(new CfgPrtUsbImpl) {}
CfgPrtUsb::~CfgPrtUsb() = default;

CfgPrtUsb& CfgPrtUsb::operator=(const CfgPrtUsb& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtUsb& CfgPrtUsb::operator=(CfgPrtUsb&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPrtUsb::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtUsb::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtUsb::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtUsb::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtUsb::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtUsb*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtUsb::MsgIdParamType CfgPrtUsb::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtUsb::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtUsb::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtUsb::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtUsb::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtUsb::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


