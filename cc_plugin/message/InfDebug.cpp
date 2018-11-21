#include "InfDebug.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/InfDebug.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_str()
{
    using Field = ublox::message::InfDebugFields<>::Str;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_str());
    return props;
}

} // namespace

class InfDebugImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::InfDebug<ublox::cc_plugin::Message>,
        InfDebugImpl
    >
{
public:
    InfDebugImpl() = default;
    InfDebugImpl(const InfDebugImpl&) = delete;
    InfDebugImpl(InfDebugImpl&&) = delete;
    virtual ~InfDebugImpl() = default;
    InfDebugImpl& operator=(const InfDebugImpl&) = default;
    InfDebugImpl& operator=(InfDebugImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

InfDebug::InfDebug() : m_pImpl(new InfDebugImpl) {}
InfDebug::~InfDebug() = default;

InfDebug& InfDebug::operator=(const InfDebug& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

InfDebug& InfDebug::operator=(InfDebug&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* InfDebug::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& InfDebug::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void InfDebug::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void InfDebug::resetImpl()
{
    m_pImpl->reset();
}

bool InfDebug::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const InfDebug*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

InfDebug::MsgIdParamType InfDebug::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus InfDebug::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus InfDebug::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool InfDebug::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t InfDebug::lengthImpl() const
{
    return m_pImpl->length();
}

bool InfDebug::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


