// Generated by commsdsl2comms v3.3.0

#include "MgaGalTimeoffset.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaGalTimeoffset.h"
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
    using Field = ublox::message::MgaGalTimeoffsetFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaGalTimeoffsetFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaGalTimeoffsetFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_a0G()
{
    using Field = ublox::message::MgaGalTimeoffsetFields<>::A0G;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_a1G()
{
    using Field = ublox::message::MgaGalTimeoffsetFields<>::A1G;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_t0G()
{
    using Field = ublox::message::MgaGalTimeoffsetFields<>::T0G;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_wn0G()
{
    using Field = ublox::message::MgaGalTimeoffsetFields<>::Wn0G;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaGalTimeoffsetFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_a0G());
    props.append(createProps_a1G());
    props.append(createProps_t0G());
    props.append(createProps_wn0G());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaGalTimeoffsetImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaGalTimeoffset<ublox::cc_plugin::Message>,
        MgaGalTimeoffsetImpl
    >
{
public:
    MgaGalTimeoffsetImpl() = default;
    MgaGalTimeoffsetImpl(const MgaGalTimeoffsetImpl&) = delete;
    MgaGalTimeoffsetImpl(MgaGalTimeoffsetImpl&&) = delete;
    virtual ~MgaGalTimeoffsetImpl() = default;
    MgaGalTimeoffsetImpl& operator=(const MgaGalTimeoffsetImpl&) = default;
    MgaGalTimeoffsetImpl& operator=(MgaGalTimeoffsetImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGalTimeoffset::MgaGalTimeoffset() : m_pImpl(new MgaGalTimeoffsetImpl) {}
MgaGalTimeoffset::~MgaGalTimeoffset() = default;

MgaGalTimeoffset& MgaGalTimeoffset::operator=(const MgaGalTimeoffset& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGalTimeoffset& MgaGalTimeoffset::operator=(MgaGalTimeoffset&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGalTimeoffset::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGalTimeoffset::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGalTimeoffset::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGalTimeoffset::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGalTimeoffset::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGalTimeoffset*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGalTimeoffset::MsgIdParamType MgaGalTimeoffset::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGalTimeoffset::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGalTimeoffset::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGalTimeoffset::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGalTimeoffset::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGalTimeoffset::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


