#include "MgaGpsUtc.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaGpsUtc.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaGpsUtcFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaGpsUtcFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaGpsUtcFields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_utcA0()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcA0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcA1()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcA1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcDtLS()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcDtLS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcTot()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcTot;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcWNt()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcWNt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcWNlsf()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcWNlsf;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcDn()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcDn;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_utcDtLSF()
{
    using Field = ublox::message::MgaGpsUtcFields<>::UtcDtLSF;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaGpsUtcFields<>::Reserved2;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_utcA0());
    props.append(createProps_utcA1());
    props.append(createProps_utcDtLS());
    props.append(createProps_utcTot());
    props.append(createProps_utcWNt());
    props.append(createProps_utcWNlsf());
    props.append(createProps_utcDn());
    props.append(createProps_utcDtLSF());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaGpsUtcImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaGpsUtc<ublox::cc_plugin::Message>,
        MgaGpsUtcImpl
    >
{
public:
    MgaGpsUtcImpl() = default;
    MgaGpsUtcImpl(const MgaGpsUtcImpl&) = delete;
    MgaGpsUtcImpl(MgaGpsUtcImpl&&) = delete;
    virtual ~MgaGpsUtcImpl() = default;
    MgaGpsUtcImpl& operator=(const MgaGpsUtcImpl&) = default;
    MgaGpsUtcImpl& operator=(MgaGpsUtcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGpsUtc::MgaGpsUtc() : m_pImpl(new MgaGpsUtcImpl) {}
MgaGpsUtc::~MgaGpsUtc() = default;

MgaGpsUtc& MgaGpsUtc::operator=(const MgaGpsUtc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsUtc& MgaGpsUtc::operator=(MgaGpsUtc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGpsUtc::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGpsUtc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGpsUtc::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGpsUtc::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsUtc::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsUtc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGpsUtc::MsgIdParamType MgaGpsUtc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGpsUtc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGpsUtc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGpsUtc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGpsUtc::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGpsUtc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


