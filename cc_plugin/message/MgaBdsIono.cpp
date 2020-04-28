// Generated by commsdsl2comms v3.4.0

#include "MgaBdsIono.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaBdsIono.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_alpha0()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Alpha0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_alpha1()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Alpha1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_alpha2()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Alpha2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_alpha3()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Alpha3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_beta0()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Beta0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_beta1()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Beta1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_beta2()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Beta2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_beta3()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Beta3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaBdsIonoFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_alpha0());
    props.append(createProps_alpha1());
    props.append(createProps_alpha2());
    props.append(createProps_alpha3());
    props.append(createProps_beta0());
    props.append(createProps_beta1());
    props.append(createProps_beta2());
    props.append(createProps_beta3());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaBdsIonoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaBdsIono<ublox::cc_plugin::Message>,
        MgaBdsIonoImpl
    >
{
public:
    MgaBdsIonoImpl() = default;
    MgaBdsIonoImpl(const MgaBdsIonoImpl&) = delete;
    MgaBdsIonoImpl(MgaBdsIonoImpl&&) = delete;
    virtual ~MgaBdsIonoImpl() = default;
    MgaBdsIonoImpl& operator=(const MgaBdsIonoImpl&) = default;
    MgaBdsIonoImpl& operator=(MgaBdsIonoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaBdsIono::MgaBdsIono() : m_pImpl(new MgaBdsIonoImpl) {}
MgaBdsIono::~MgaBdsIono() = default;

MgaBdsIono& MgaBdsIono::operator=(const MgaBdsIono& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaBdsIono& MgaBdsIono::operator=(MgaBdsIono&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaBdsIono::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaBdsIono::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaBdsIono::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaBdsIono::resetImpl()
{
    m_pImpl->reset();
}

bool MgaBdsIono::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaBdsIono*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaBdsIono::MsgIdParamType MgaBdsIono::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaBdsIono::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaBdsIono::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaBdsIono::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaBdsIono::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaBdsIono::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


