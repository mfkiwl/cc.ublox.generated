// Generated by commsdsl2comms v3.3.2

#include "LogRetrievestring.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogRetrievestring.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/Hour.h"
#include "cc_plugin/field/Min.h"
#include "cc_plugin/field/Month.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Sec.h"
#include "cc_plugin/field/Year.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_entryIndex()
{
    using Field = ublox::message::LogRetrievestringFields<>::EntryIndex;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::LogRetrievestringFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::LogRetrievestringFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_year()
{
    using Field = ublox::message::LogRetrievestringFields<>::Year;
    auto props = cc_plugin::field::createProps_year(Field::name());
    return props;
    
}

static QVariantMap createProps_month()
{
    using Field = ublox::message::LogRetrievestringFields<>::Month;
    auto props = cc_plugin::field::createProps_month(Field::name());
    return props;
    
}

static QVariantMap createProps_day()
{
    using Field = ublox::message::LogRetrievestringFields<>::Day;
    auto props = cc_plugin::field::createProps_day(Field::name());
    return props;
    
}

static QVariantMap createProps_hour()
{
    using Field = ublox::message::LogRetrievestringFields<>::Hour;
    auto props = cc_plugin::field::createProps_hour(Field::name());
    return props;
    
}

static QVariantMap createProps_minute()
{
    using Field = ublox::message::LogRetrievestringFields<>::Minute;
    auto props = cc_plugin::field::createProps_min(Field::name());
    return props;
    
}

static QVariantMap createProps_second()
{
    using Field = ublox::message::LogRetrievestringFields<>::Second;
    auto props = cc_plugin::field::createProps_sec(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::LogRetrievestringFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_byteCount()
{
    using Field = ublox::message::LogRetrievestringFields<>::ByteCount;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_bytes()
{
    using Field = ublox::message::LogRetrievestringFields<>::Bytes;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_entryIndex());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_year());
    props.append(createProps_month());
    props.append(createProps_day());
    props.append(createProps_hour());
    props.append(createProps_minute());
    props.append(createProps_second());
    props.append(createProps_reserved2());
    props.append(createProps_byteCount());
    props.append(createProps_bytes());
    return props;
}

} // namespace

class LogRetrievestringImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogRetrievestring<ublox::cc_plugin::Message>,
        LogRetrievestringImpl
    >
{
public:
    LogRetrievestringImpl() = default;
    LogRetrievestringImpl(const LogRetrievestringImpl&) = delete;
    LogRetrievestringImpl(LogRetrievestringImpl&&) = delete;
    virtual ~LogRetrievestringImpl() = default;
    LogRetrievestringImpl& operator=(const LogRetrievestringImpl&) = default;
    LogRetrievestringImpl& operator=(LogRetrievestringImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogRetrievestring::LogRetrievestring() : m_pImpl(new LogRetrievestringImpl) {}
LogRetrievestring::~LogRetrievestring() = default;

LogRetrievestring& LogRetrievestring::operator=(const LogRetrievestring& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogRetrievestring& LogRetrievestring::operator=(LogRetrievestring&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogRetrievestring::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogRetrievestring::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogRetrievestring::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogRetrievestring::resetImpl()
{
    m_pImpl->reset();
}

bool LogRetrievestring::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogRetrievestring*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogRetrievestring::MsgIdParamType LogRetrievestring::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogRetrievestring::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogRetrievestring::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogRetrievestring::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogRetrievestring::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogRetrievestring::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


