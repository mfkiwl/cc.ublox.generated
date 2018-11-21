#include "LogInfoPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogInfoPoll.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class LogInfoPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogInfoPoll<ublox::cc_plugin::Message>,
        LogInfoPollImpl
    >
{
public:
    LogInfoPollImpl() = default;
    LogInfoPollImpl(const LogInfoPollImpl&) = delete;
    LogInfoPollImpl(LogInfoPollImpl&&) = delete;
    virtual ~LogInfoPollImpl() = default;
    LogInfoPollImpl& operator=(const LogInfoPollImpl&) = default;
    LogInfoPollImpl& operator=(LogInfoPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogInfoPoll::LogInfoPoll() : m_pImpl(new LogInfoPollImpl) {}
LogInfoPoll::~LogInfoPoll() = default;

LogInfoPoll& LogInfoPoll::operator=(const LogInfoPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogInfoPoll& LogInfoPoll::operator=(LogInfoPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogInfoPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogInfoPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogInfoPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogInfoPoll::resetImpl()
{
    m_pImpl->reset();
}

bool LogInfoPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogInfoPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogInfoPoll::MsgIdParamType LogInfoPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogInfoPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogInfoPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogInfoPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogInfoPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogInfoPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


