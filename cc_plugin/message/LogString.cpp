#include "LogString.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogString.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_bytes()
{
    using Field = ublox::message::LogStringFields<>::Bytes;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_bytes());
    return props;
}

} // namespace

class LogStringImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogString<ublox::cc_plugin::Message>,
        LogStringImpl
    >
{
public:
    LogStringImpl() = default;
    LogStringImpl(const LogStringImpl&) = delete;
    LogStringImpl(LogStringImpl&&) = delete;
    virtual ~LogStringImpl() = default;
    LogStringImpl& operator=(const LogStringImpl&) = default;
    LogStringImpl& operator=(LogStringImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogString::LogString() : m_pImpl(new LogStringImpl) {}
LogString::~LogString() = default;

LogString& LogString::operator=(const LogString& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogString& LogString::operator=(LogString&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogString::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogString::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogString::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogString::resetImpl()
{
    m_pImpl->reset();
}

bool LogString::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogString*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogString::MsgIdParamType LogString::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogString::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogString::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogString::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogString::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogString::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


