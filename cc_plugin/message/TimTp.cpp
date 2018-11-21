#include "TimTp.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimTp.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_towMS()
{
    using Field = ublox::message::TimTpFields<>::TowMS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_towSubMS()
{
    using Field = ublox::message::TimTpFields<>::TowSubMS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_qErr()
{
    using Field = ublox::message::TimTpFields<>::QErr;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_week()
{
    using Field = ublox::message::TimTpFields<>::Week;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::TimTpFields<>::FlagsMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "timeBase")
                .add(1U, "utc")
                .asMap();
        
    }
    
    static QVariantMap createProps_raim()
    {
        using Field = ublox::message::TimTpFields<>::FlagsMembers::Raim;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("NotAvailable", 0)
                .add("NotActive", 1)
                .add("Active", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_reserved()
    {
        using Field = ublox::message::TimTpFields<>::FlagsMembers::Reserved;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::TimTpFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_bits())
            .add(FlagsMembers::createProps_raim())
            .add(FlagsMembers::createProps_reserved())
            .asMap();
    
}

struct RefInfoMembers
{
    static QVariantMap createProps_timeRefGnss()
    {
        using Field = ublox::message::TimTpFields<>::RefInfoMembers::TimeRefGnss;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("GPS", 0)
                .add("GLONASS", 1)
                .add("BeiDou", 2)
                .add("Unknown", 15)
                .asMap();
        
    }
    
    static QVariantMap createProps_utcStandard()
    {
        using Field = ublox::message::TimTpFields<>::RefInfoMembers::UtcStandard;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("NotAvailable", 0)
                .add("CRL", 1)
                .add("NIST", 2)
                .add("USNO", 3)
                .add("BIMP", 4)
                .add("EuLab", 5)
                .add("SU", 6)
                .add("Unknown", 15)
                .asMap();
        
    }
    
};

static QVariantMap createProps_refInfo()
{
    using Field = ublox::message::TimTpFields<>::RefInfo;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(RefInfoMembers::createProps_timeRefGnss())
            .add(RefInfoMembers::createProps_utcStandard())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_towMS());
    props.append(createProps_towSubMS());
    props.append(createProps_qErr());
    props.append(createProps_week());
    props.append(createProps_flags());
    props.append(createProps_refInfo());
    return props;
}

} // namespace

class TimTpImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimTp<ublox::cc_plugin::Message>,
        TimTpImpl
    >
{
public:
    TimTpImpl() = default;
    TimTpImpl(const TimTpImpl&) = delete;
    TimTpImpl(TimTpImpl&&) = delete;
    virtual ~TimTpImpl() = default;
    TimTpImpl& operator=(const TimTpImpl&) = default;
    TimTpImpl& operator=(TimTpImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimTp::TimTp() : m_pImpl(new TimTpImpl) {}
TimTp::~TimTp() = default;

TimTp& TimTp::operator=(const TimTp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTp& TimTp::operator=(TimTp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTp::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimTp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimTp::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimTp::resetImpl()
{
    m_pImpl->reset();
}

bool TimTp::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimTp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimTp::MsgIdParamType TimTp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimTp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimTp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimTp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimTp::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimTp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


