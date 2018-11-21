#include "MgaQzssHealth.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaQzssHealth.h"
#include "cc_plugin/field/Res2.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaQzssHealthFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaQzssHealthFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaQzssHealthFields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_healthCode()
{
    using Field = ublox::message::MgaQzssHealthFields<>::HealthCode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaQzssHealthFields<>::Reserved2;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_healthCode());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaQzssHealthImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaQzssHealth<ublox::cc_plugin::Message>,
        MgaQzssHealthImpl
    >
{
public:
    MgaQzssHealthImpl() = default;
    MgaQzssHealthImpl(const MgaQzssHealthImpl&) = delete;
    MgaQzssHealthImpl(MgaQzssHealthImpl&&) = delete;
    virtual ~MgaQzssHealthImpl() = default;
    MgaQzssHealthImpl& operator=(const MgaQzssHealthImpl&) = default;
    MgaQzssHealthImpl& operator=(MgaQzssHealthImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaQzssHealth::MgaQzssHealth() : m_pImpl(new MgaQzssHealthImpl) {}
MgaQzssHealth::~MgaQzssHealth() = default;

MgaQzssHealth& MgaQzssHealth::operator=(const MgaQzssHealth& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaQzssHealth& MgaQzssHealth::operator=(MgaQzssHealth&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaQzssHealth::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaQzssHealth::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaQzssHealth::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaQzssHealth::resetImpl()
{
    m_pImpl->reset();
}

bool MgaQzssHealth::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaQzssHealth*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaQzssHealth::MsgIdParamType MgaQzssHealth::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaQzssHealth::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaQzssHealth::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaQzssHealth::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaQzssHealth::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaQzssHealth::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


