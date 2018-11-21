#include "LogRetrieve.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogRetrieve.h"
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

static QVariantMap createProps_startNumber()
{
    using Field = ublox::message::LogRetrieveFields<>::StartNumber;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_entryCount()
{
    using Field = ublox::message::LogRetrieveFields<>::EntryCount;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::LogRetrieveFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::LogRetrieveFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_startNumber());
    props.append(createProps_entryCount());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class LogRetrieveImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogRetrieve<ublox::cc_plugin::Message>,
        LogRetrieveImpl
    >
{
public:
    LogRetrieveImpl() = default;
    LogRetrieveImpl(const LogRetrieveImpl&) = delete;
    LogRetrieveImpl(LogRetrieveImpl&&) = delete;
    virtual ~LogRetrieveImpl() = default;
    LogRetrieveImpl& operator=(const LogRetrieveImpl&) = default;
    LogRetrieveImpl& operator=(LogRetrieveImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogRetrieve::LogRetrieve() : m_pImpl(new LogRetrieveImpl) {}
LogRetrieve::~LogRetrieve() = default;

LogRetrieve& LogRetrieve::operator=(const LogRetrieve& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogRetrieve& LogRetrieve::operator=(LogRetrieve&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogRetrieve::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogRetrieve::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogRetrieve::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogRetrieve::resetImpl()
{
    m_pImpl->reset();
}

bool LogRetrieve::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogRetrieve*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogRetrieve::MsgIdParamType LogRetrieve::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogRetrieve::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogRetrieve::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogRetrieve::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogRetrieve::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogRetrieve::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


