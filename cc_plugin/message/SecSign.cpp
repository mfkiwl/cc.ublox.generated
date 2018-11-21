#include "SecSign.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/SecSign.h"
#include "cc_plugin/field/MsgId.h"
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
    using Field = ublox::message::SecSignFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::SecSignFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_msgId()
{
    using Field = ublox::message::SecSignFields<>::MsgId;
    return cc_plugin::field::createProps_msgId(Field::name());
    
}

static QVariantMap createProps_checksum()
{
    using Field = ublox::message::SecSignFields<>::Checksum;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_hash()
{
    using Field = ublox::message::SecSignFields<>::Hash;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_msgId());
    props.append(createProps_checksum());
    props.append(createProps_hash());
    return props;
}

} // namespace

class SecSignImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::SecSign<ublox::cc_plugin::Message>,
        SecSignImpl
    >
{
public:
    SecSignImpl() = default;
    SecSignImpl(const SecSignImpl&) = delete;
    SecSignImpl(SecSignImpl&&) = delete;
    virtual ~SecSignImpl() = default;
    SecSignImpl& operator=(const SecSignImpl&) = default;
    SecSignImpl& operator=(SecSignImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

SecSign::SecSign() : m_pImpl(new SecSignImpl) {}
SecSign::~SecSign() = default;

SecSign& SecSign::operator=(const SecSign& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SecSign& SecSign::operator=(SecSign&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* SecSign::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& SecSign::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void SecSign::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void SecSign::resetImpl()
{
    m_pImpl->reset();
}

bool SecSign::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const SecSign*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

SecSign::MsgIdParamType SecSign::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus SecSign::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus SecSign::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool SecSign::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t SecSign::lengthImpl() const
{
    return m_pImpl->length();
}

bool SecSign::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


