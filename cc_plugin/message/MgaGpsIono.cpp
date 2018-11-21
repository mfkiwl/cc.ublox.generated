#include "MgaGpsIono.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaGpsIono.h"
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
    using Field = ublox::message::MgaGpsIonoFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaGpsIonoFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaGpsIonoFields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_ionoAlpha0()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoAlpha0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ionoAlpha1()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoAlpha1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ionoAlpha2()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoAlpha2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ionoAlpha3()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoAlpha3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ionoBeta0()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoBeta0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ionoBeta1()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoBeta1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ionoBeta2()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoBeta2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ionoBeta3()
{
    using Field = ublox::message::MgaGpsIonoFields<>::IonoBeta3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaGpsIonoFields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_ionoAlpha0());
    props.append(createProps_ionoAlpha1());
    props.append(createProps_ionoAlpha2());
    props.append(createProps_ionoAlpha3());
    props.append(createProps_ionoBeta0());
    props.append(createProps_ionoBeta1());
    props.append(createProps_ionoBeta2());
    props.append(createProps_ionoBeta3());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaGpsIonoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaGpsIono<ublox::cc_plugin::Message>,
        MgaGpsIonoImpl
    >
{
public:
    MgaGpsIonoImpl() = default;
    MgaGpsIonoImpl(const MgaGpsIonoImpl&) = delete;
    MgaGpsIonoImpl(MgaGpsIonoImpl&&) = delete;
    virtual ~MgaGpsIonoImpl() = default;
    MgaGpsIonoImpl& operator=(const MgaGpsIonoImpl&) = default;
    MgaGpsIonoImpl& operator=(MgaGpsIonoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGpsIono::MgaGpsIono() : m_pImpl(new MgaGpsIonoImpl) {}
MgaGpsIono::~MgaGpsIono() = default;

MgaGpsIono& MgaGpsIono::operator=(const MgaGpsIono& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsIono& MgaGpsIono::operator=(MgaGpsIono&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGpsIono::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGpsIono::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGpsIono::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGpsIono::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsIono::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsIono*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGpsIono::MsgIdParamType MgaGpsIono::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGpsIono::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGpsIono::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGpsIono::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGpsIono::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGpsIono::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


