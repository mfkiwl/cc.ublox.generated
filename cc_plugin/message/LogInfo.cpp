#include "LogInfo.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogInfo.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/Hour.h"
#include "cc_plugin/field/Min.h"
#include "cc_plugin/field/Month.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res3.h"
#include "cc_plugin/field/Res8.h"
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

static QVariantMap createProps_version()
{
    using Field = ublox::message::LogInfoFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::LogInfoFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_filestoreCapacity()
{
    using Field = ublox::message::LogInfoFields<>::FilestoreCapacity;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::LogInfoFields<>::Reserved2;
    return cc_plugin::field::createProps_res8(Field::name());
    
}

static QVariantMap createProps_currentMaxLogSize()
{
    using Field = ublox::message::LogInfoFields<>::CurrentMaxLogSize;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_currentLogSize()
{
    using Field = ublox::message::LogInfoFields<>::CurrentLogSize;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_entryCount()
{
    using Field = ublox::message::LogInfoFields<>::EntryCount;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_oldestYear()
{
    using Field = ublox::message::LogInfoFields<>::OldestYear;
    return cc_plugin::field::createProps_year(Field::name());
    
}

static QVariantMap createProps_oldestMonth()
{
    using Field = ublox::message::LogInfoFields<>::OldestMonth;
    return cc_plugin::field::createProps_month(Field::name());
    
}

static QVariantMap createProps_oldestDay()
{
    using Field = ublox::message::LogInfoFields<>::OldestDay;
    return cc_plugin::field::createProps_day(Field::name());
    
}

static QVariantMap createProps_oldestHour()
{
    using Field = ublox::message::LogInfoFields<>::OldestHour;
    return cc_plugin::field::createProps_hour(Field::name());
    
}

static QVariantMap createProps_oldestMinute()
{
    using Field = ublox::message::LogInfoFields<>::OldestMinute;
    return cc_plugin::field::createProps_min(Field::name());
    
}

static QVariantMap createProps_oldestSecond()
{
    using Field = ublox::message::LogInfoFields<>::OldestSecond;
    return cc_plugin::field::createProps_sec(Field::name());
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::LogInfoFields<>::Reserved3;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_newestYear()
{
    using Field = ublox::message::LogInfoFields<>::NewestYear;
    return cc_plugin::field::createProps_year(Field::name());
    
}

static QVariantMap createProps_newestMonth()
{
    using Field = ublox::message::LogInfoFields<>::NewestMonth;
    return cc_plugin::field::createProps_month(Field::name());
    
}

static QVariantMap createProps_newestDay()
{
    using Field = ublox::message::LogInfoFields<>::NewestDay;
    return cc_plugin::field::createProps_day(Field::name());
    
}

static QVariantMap createProps_newestHour()
{
    using Field = ublox::message::LogInfoFields<>::NewestHour;
    return cc_plugin::field::createProps_hour(Field::name());
    
}

static QVariantMap createProps_newestMinute()
{
    using Field = ublox::message::LogInfoFields<>::NewestMinute;
    return cc_plugin::field::createProps_min(Field::name());
    
}

static QVariantMap createProps_newestSecond()
{
    using Field = ublox::message::LogInfoFields<>::NewestSecond;
    return cc_plugin::field::createProps_sec(Field::name());
    
}

static QVariantMap createProps_reserved4()
{
    using Field = ublox::message::LogInfoFields<>::Reserved4;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_status()
{
    using Field = ublox::message::LogInfoFields<>::Status;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(3U, "recording")
            .add(4U, "inactive")
            .add(5U, "circular")
            .asMap();
    
}

static QVariantMap createProps_reserved5()
{
    using Field = ublox::message::LogInfoFields<>::Reserved5;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_filestoreCapacity());
    props.append(createProps_reserved2());
    props.append(createProps_currentMaxLogSize());
    props.append(createProps_currentLogSize());
    props.append(createProps_entryCount());
    props.append(createProps_oldestYear());
    props.append(createProps_oldestMonth());
    props.append(createProps_oldestDay());
    props.append(createProps_oldestHour());
    props.append(createProps_oldestMinute());
    props.append(createProps_oldestSecond());
    props.append(createProps_reserved3());
    props.append(createProps_newestYear());
    props.append(createProps_newestMonth());
    props.append(createProps_newestDay());
    props.append(createProps_newestHour());
    props.append(createProps_newestMinute());
    props.append(createProps_newestSecond());
    props.append(createProps_reserved4());
    props.append(createProps_status());
    props.append(createProps_reserved5());
    return props;
}

} // namespace

class LogInfoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogInfo<ublox::cc_plugin::Message>,
        LogInfoImpl
    >
{
public:
    LogInfoImpl() = default;
    LogInfoImpl(const LogInfoImpl&) = delete;
    LogInfoImpl(LogInfoImpl&&) = delete;
    virtual ~LogInfoImpl() = default;
    LogInfoImpl& operator=(const LogInfoImpl&) = default;
    LogInfoImpl& operator=(LogInfoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogInfo::LogInfo() : m_pImpl(new LogInfoImpl) {}
LogInfo::~LogInfo() = default;

LogInfo& LogInfo::operator=(const LogInfo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogInfo& LogInfo::operator=(LogInfo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogInfo::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogInfo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogInfo::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogInfo::resetImpl()
{
    m_pImpl->reset();
}

bool LogInfo::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogInfo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogInfo::MsgIdParamType LogInfo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogInfo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogInfo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogInfo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogInfo::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogInfo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


