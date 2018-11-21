#include "LogErase.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogErase.h"
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

class LogEraseImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogErase<ublox::cc_plugin::Message>,
        LogEraseImpl
    >
{
public:
    LogEraseImpl() = default;
    LogEraseImpl(const LogEraseImpl&) = delete;
    LogEraseImpl(LogEraseImpl&&) = delete;
    virtual ~LogEraseImpl() = default;
    LogEraseImpl& operator=(const LogEraseImpl&) = default;
    LogEraseImpl& operator=(LogEraseImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogErase::LogErase() : m_pImpl(new LogEraseImpl) {}
LogErase::~LogErase() = default;

LogErase& LogErase::operator=(const LogErase& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogErase& LogErase::operator=(LogErase&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogErase::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogErase::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogErase::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogErase::resetImpl()
{
    m_pImpl->reset();
}

bool LogErase::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogErase*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogErase::MsgIdParamType LogErase::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogErase::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogErase::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogErase::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogErase::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogErase::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


