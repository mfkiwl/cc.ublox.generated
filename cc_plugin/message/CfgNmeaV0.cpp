// Generated by commsdsl2comms v3.3.0

#include "CfgNmeaV0.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNmeaV0.h"
#include "cc_plugin/field/CfgMainTalkerId.h"
#include "cc_plugin/field/CfgNmeaFilter.h"
#include "cc_plugin/field/CfgNmeaFlags.h"
#include "cc_plugin/field/CfgNmeaGnssToFilter.h"
#include "cc_plugin/field/CfgNmeaGsvTalkerId.h"
#include "cc_plugin/field/CfgNmeaNumSV.h"
#include "cc_plugin/field/CfgNmeaSvNumbering.h"
#include "cc_plugin/field/CfgNmeaVersion.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_filter()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::Filter;
    auto props = cc_plugin::field::createProps_cfgNmeaFilter(Field::name());
    return props;
    
}

static QVariantMap createProps_nmeaVersion()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::NmeaVersion;
    auto props = cc_plugin::field::createProps_cfgNmeaVersion(Field::name());
    return props;
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::NumSV;
    auto props = cc_plugin::field::createProps_cfgNmeaNumSV(Field::name());
    return props;
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::Flags;
    auto props = cc_plugin::field::createProps_cfgNmeaFlags(Field::name());
    return props;
    
}

static QVariantMap createProps_gnssToFilter()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::GnssToFilter;
    auto props = cc_plugin::field::createProps_cfgNmeaGnssToFilter(Field::name());
    return props;
    
}

static QVariantMap createProps_svNumbering()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::SvNumbering;
    auto props = cc_plugin::field::createProps_cfgNmeaSvNumbering(Field::name());
    return props;
    
}

static QVariantMap createProps_mainTalkerId()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::MainTalkerId;
    auto props = cc_plugin::field::createProps_cfgMainTalkerId(Field::name());
    return props;
    
}

static QVariantMap createProps_gsvTalkerId()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::GsvTalkerId;
    auto props = cc_plugin::field::createProps_cfgNmeaGsvTalkerId(Field::name());
    return props;
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::CfgNmeaV0Fields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_filter());
    props.append(createProps_nmeaVersion());
    props.append(createProps_numSV());
    props.append(createProps_flags());
    props.append(createProps_gnssToFilter());
    props.append(createProps_svNumbering());
    props.append(createProps_mainTalkerId());
    props.append(createProps_gsvTalkerId());
    props.append(createProps_version());
    return props;
}

} // namespace

class CfgNmeaV0Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNmeaV0<ublox::cc_plugin::Message>,
        CfgNmeaV0Impl
    >
{
public:
    CfgNmeaV0Impl() = default;
    CfgNmeaV0Impl(const CfgNmeaV0Impl&) = delete;
    CfgNmeaV0Impl(CfgNmeaV0Impl&&) = delete;
    virtual ~CfgNmeaV0Impl() = default;
    CfgNmeaV0Impl& operator=(const CfgNmeaV0Impl&) = default;
    CfgNmeaV0Impl& operator=(CfgNmeaV0Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNmeaV0::CfgNmeaV0() : m_pImpl(new CfgNmeaV0Impl) {}
CfgNmeaV0::~CfgNmeaV0() = default;

CfgNmeaV0& CfgNmeaV0::operator=(const CfgNmeaV0& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaV0& CfgNmeaV0::operator=(CfgNmeaV0&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNmeaV0::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNmeaV0::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNmeaV0::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNmeaV0::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaV0::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaV0*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNmeaV0::MsgIdParamType CfgNmeaV0::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNmeaV0::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNmeaV0::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNmeaV0::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNmeaV0::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNmeaV0::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


