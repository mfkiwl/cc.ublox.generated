// Generated by commsdsl2comms v3.5.0

#include "CfgUsb.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgUsb.h"
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

static QVariantMap createProps_vendorId()
{
    using Field = ublox::message::CfgUsbFields<>::VendorId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_productId()
{
    using Field = ublox::message::CfgUsbFields<>::ProductId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgUsbFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgUsbFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_powerConsumption()
{
    using Field = ublox::message::CfgUsbFields<>::PowerConsumption;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgUsbFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "reEnum")
            .add(1U, "powerMode")
            .asMap();
    
}

static QVariantMap createProps_vendorString()
{
    using Field = ublox::message::CfgUsbFields<>::VendorString;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_productString()
{
    using Field = ublox::message::CfgUsbFields<>::ProductString;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_serialNumber()
{
    using Field = ublox::message::CfgUsbFields<>::SerialNumber;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_vendorId());
    props.append(createProps_productId());
    props.append(createProps_reserved1());
    props.append(createProps_reserved2());
    props.append(createProps_powerConsumption());
    props.append(createProps_flags());
    props.append(createProps_vendorString());
    props.append(createProps_productString());
    props.append(createProps_serialNumber());
    return props;
}

} // namespace

class CfgUsbImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgUsb<ublox::cc_plugin::Message>,
        CfgUsbImpl
    >
{
public:
    CfgUsbImpl() = default;
    CfgUsbImpl(const CfgUsbImpl&) = delete;
    CfgUsbImpl(CfgUsbImpl&&) = delete;
    virtual ~CfgUsbImpl() = default;
    CfgUsbImpl& operator=(const CfgUsbImpl&) = default;
    CfgUsbImpl& operator=(CfgUsbImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgUsb::CfgUsb() : m_pImpl(new CfgUsbImpl) {}
CfgUsb::~CfgUsb() = default;

CfgUsb& CfgUsb::operator=(const CfgUsb& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgUsb& CfgUsb::operator=(CfgUsb&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgUsb::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgUsb::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgUsb::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgUsb::resetImpl()
{
    m_pImpl->reset();
}

bool CfgUsb::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgUsb*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgUsb::MsgIdParamType CfgUsb::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgUsb::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgUsb::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgUsb::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgUsb::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgUsb::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


