// Generated by commsdsl2comms v3.5.0

#include "CfgPm.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPm.h"
#include "cc_plugin/field/Res1.h"

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
    using Field = ublox::message::CfgPmFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_res1()
{
    using Field = ublox::message::CfgPmFields<>::Res1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_res2()
{
    using Field = ublox::message::CfgPmFields<>::Res2;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_res3()
{
    using Field = ublox::message::CfgPmFields<>::Res3;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

struct FlagsMembers
{
    static QVariantMap createProps_res1()
    {
        using Field = ublox::message::CfgPmFields<>::FlagsMembers::Res1;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_internal()
    {
        using Field = ublox::message::CfgPmFields<>::FlagsMembers::Internal;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_bitsMid()
    {
        using Field = ublox::message::CfgPmFields<>::FlagsMembers::BitsMid;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "extintSelect")
                .add(1U, "extintWake")
                .add(2U, "extintBackup")
                .asMap();
        
    }
    
    static QVariantMap createProps_limitPeakCurr()
    {
        using Field = ublox::message::CfgPmFields<>::FlagsMembers::LimitPeakCurr;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Disabled", 0)
                .add("Enabled", 1)
                .asMap();
        
    }
    
    static QVariantMap createProps_bitsHigh()
    {
        using Field = ublox::message::CfgPmFields<>::FlagsMembers::BitsHigh;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "WaitTimeFix")
                .add(1U, "updateRTC")
                .add(2U, "updateEPH")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgPmFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_res1())
            .add(FlagsMembers::createProps_internal())
            .add(FlagsMembers::createProps_bitsMid())
            .add(FlagsMembers::createProps_limitPeakCurr())
            .add(FlagsMembers::createProps_bitsHigh())
            .asMap();
    
}

static QVariantMap createProps_updatePeriod()
{
    using Field = ublox::message::CfgPmFields<>::UpdatePeriod;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_searchPeriod()
{
    using Field = ublox::message::CfgPmFields<>::SearchPeriod;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_gridOffset()
{
    using Field = ublox::message::CfgPmFields<>::GridOffset;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_onTime()
{
    using Field = ublox::message::CfgPmFields<>::OnTime;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_minAcqTime()
{
    using Field = ublox::message::CfgPmFields<>::MinAcqTime;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_res1());
    props.append(createProps_res2());
    props.append(createProps_res3());
    props.append(createProps_flags());
    props.append(createProps_updatePeriod());
    props.append(createProps_searchPeriod());
    props.append(createProps_gridOffset());
    props.append(createProps_onTime());
    props.append(createProps_minAcqTime());
    return props;
}

} // namespace

class CfgPmImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPm<ublox::cc_plugin::Message>,
        CfgPmImpl
    >
{
public:
    CfgPmImpl() = default;
    CfgPmImpl(const CfgPmImpl&) = delete;
    CfgPmImpl(CfgPmImpl&&) = delete;
    virtual ~CfgPmImpl() = default;
    CfgPmImpl& operator=(const CfgPmImpl&) = default;
    CfgPmImpl& operator=(CfgPmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPm::CfgPm() : m_pImpl(new CfgPmImpl) {}
CfgPm::~CfgPm() = default;

CfgPm& CfgPm::operator=(const CfgPm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPm& CfgPm::operator=(CfgPm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPm::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPm::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPm::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPm::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPm::MsgIdParamType CfgPm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPm::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


