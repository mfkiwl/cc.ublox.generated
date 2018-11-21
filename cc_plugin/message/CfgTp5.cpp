#include "CfgTp5.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTp5.h"
#include "cc_plugin/field/CfgTp5TpIdx.h"
#include "cc_plugin/field/Res2.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_tpIdx()
{
    using Field = ublox::message::CfgTp5Fields<>::TpIdx;
    return cc_plugin::field::createProps_cfgTp5TpIdx(Field::name());
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::CfgTp5Fields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgTp5Fields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

static QVariantMap createProps_antCableDelay()
{
    using Field = ublox::message::CfgTp5Fields<>::AntCableDelay;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_rfGroupDelay()
{
    using Field = ublox::message::CfgTp5Fields<>::RfGroupDelay;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FreqMembers
{
    static QVariantMap createProps_freq()
    {
        using Field = ublox::message::CfgTp5Fields<>::FreqMembers::Freq;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_freq()
{
    using Field = ublox::message::CfgTp5Fields<>::Freq;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(FreqMembers::createProps_freq())
            .asMap();
    
}

struct PeriodMembers
{
    static QVariantMap createProps_period()
    {
        using Field = ublox::message::CfgTp5Fields<>::PeriodMembers::Period;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_period()
{
    using Field = ublox::message::CfgTp5Fields<>::Period;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(PeriodMembers::createProps_period())
            .asMap();
    
}

struct FreqLockMembers
{
    static QVariantMap createProps_freqLock()
    {
        using Field = ublox::message::CfgTp5Fields<>::FreqLockMembers::FreqLock;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_freqLock()
{
    using Field = ublox::message::CfgTp5Fields<>::FreqLock;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(FreqLockMembers::createProps_freqLock())
            .asMap();
    
}

struct PeriodLockMembers
{
    static QVariantMap createProps_periodLock()
    {
        using Field = ublox::message::CfgTp5Fields<>::PeriodLockMembers::PeriodLock;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_periodLock()
{
    using Field = ublox::message::CfgTp5Fields<>::PeriodLock;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(PeriodLockMembers::createProps_periodLock())
            .asMap();
    
}

struct PulseLenMembers
{
    static QVariantMap createProps_pulseLen()
    {
        using Field = ublox::message::CfgTp5Fields<>::PulseLenMembers::PulseLen;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_pulseLen()
{
    using Field = ublox::message::CfgTp5Fields<>::PulseLen;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(PulseLenMembers::createProps_pulseLen())
            .asMap();
    
}

struct RatioMembers
{
    static QVariantMap createProps_ratio()
    {
        using Field = ublox::message::CfgTp5Fields<>::RatioMembers::Ratio;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ratio()
{
    using Field = ublox::message::CfgTp5Fields<>::Ratio;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(RatioMembers::createProps_ratio())
            .asMap();
    
}

struct PulseLenLockMembers
{
    static QVariantMap createProps_pulseLenLock()
    {
        using Field = ublox::message::CfgTp5Fields<>::PulseLenLockMembers::PulseLenLock;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_pulseLenLock()
{
    using Field = ublox::message::CfgTp5Fields<>::PulseLenLock;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(PulseLenLockMembers::createProps_pulseLenLock())
            .asMap();
    
}

struct RatioLockMembers
{
    static QVariantMap createProps_ratioLock()
    {
        using Field = ublox::message::CfgTp5Fields<>::RatioLockMembers::RatioLock;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ratioLock()
{
    using Field = ublox::message::CfgTp5Fields<>::RatioLock;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(RatioLockMembers::createProps_ratioLock())
            .asMap();
    
}

static QVariantMap createProps_userConfigDelay()
{
    using Field = ublox::message::CfgTp5Fields<>::UserConfigDelay;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::CfgTp5Fields<>::FlagsMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "active")
                .add(1U, "lockGnssFreq")
                .add(2U, "lockedOtherSet")
                .add(3U, "isFreq")
                .add(4U, "isLength")
                .add(5U, "alignToTow")
                .add(6U, "polarity")
                .asMap();
        
    }
    
    static QVariantMap createProps_gridUtcGnss()
    {
        using Field = ublox::message::CfgTp5Fields<>::FlagsMembers::GridUtcGnss;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("UTC", 0)
                .add("GPS", 1)
                .add("GLONASS", 2)
                .add("BeiDou", 3)
                .add("Galileo", 4)
                .asMap();
        
    }
    
    static QVariantMap createProps_syncMode()
    {
        using Field = ublox::message::CfgTp5Fields<>::FlagsMembers::SyncMode;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_reserved()
    {
        using Field = ublox::message::CfgTp5Fields<>::FlagsMembers::Reserved;
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
    using Field = ublox::message::CfgTp5Fields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_bits())
            .add(FlagsMembers::createProps_gridUtcGnss())
            .add(FlagsMembers::createProps_syncMode())
            .add(FlagsMembers::createProps_reserved())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_tpIdx());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_antCableDelay());
    props.append(createProps_rfGroupDelay());
    props.append(createProps_freq());
    props.append(createProps_period());
    props.append(createProps_freqLock());
    props.append(createProps_periodLock());
    props.append(createProps_pulseLen());
    props.append(createProps_ratio());
    props.append(createProps_pulseLenLock());
    props.append(createProps_ratioLock());
    props.append(createProps_userConfigDelay());
    props.append(createProps_flags());
    return props;
}

} // namespace

class CfgTp5Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTp5<ublox::cc_plugin::Message>,
        CfgTp5Impl
    >
{
public:
    CfgTp5Impl() = default;
    CfgTp5Impl(const CfgTp5Impl&) = delete;
    CfgTp5Impl(CfgTp5Impl&&) = delete;
    virtual ~CfgTp5Impl() = default;
    CfgTp5Impl& operator=(const CfgTp5Impl&) = default;
    CfgTp5Impl& operator=(CfgTp5Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTp5::CfgTp5() : m_pImpl(new CfgTp5Impl) {}
CfgTp5::~CfgTp5() = default;

CfgTp5& CfgTp5::operator=(const CfgTp5& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTp5& CfgTp5::operator=(CfgTp5&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTp5::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTp5::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTp5::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTp5::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTp5::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTp5*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTp5::MsgIdParamType CfgTp5::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTp5::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTp5::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTp5::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTp5::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTp5::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


