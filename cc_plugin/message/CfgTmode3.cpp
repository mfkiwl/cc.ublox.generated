#include "CfgTmode3.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTmode3.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res8.h"

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
    using Field = ublox::message::CfgTmode3Fields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgTmode3Fields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

struct FlagsMembers
{
    static QVariantMap createProps_mode()
    {
        using Field = ublox::message::CfgTmode3Fields<>::FlagsMembers::Mode;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Disabled", 0)
                .add("Survey In", 1)
                .add("Fixed Mode", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::CfgTmode3Fields<>::FlagsMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "lla")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgTmode3Fields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_mode())
            .add(FlagsMembers::createProps_bits())
            .asMap();
    
}

struct EcefMembers
{
    struct EcefWrapMembers
    {
        static QVariantMap createProps_ecefX()
        {
            using Field = ublox::message::CfgTmode3Fields<>::EcefMembers::EcefWrapMembers::EcefX;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_ecefY()
        {
            using Field = ublox::message::CfgTmode3Fields<>::EcefMembers::EcefWrapMembers::EcefY;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_ecefZ()
        {
            using Field = ublox::message::CfgTmode3Fields<>::EcefMembers::EcefWrapMembers::EcefZ;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_ecefXHP()
        {
            using Field = ublox::message::CfgTmode3Fields<>::EcefMembers::EcefWrapMembers::EcefXHP;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(1U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_ecefYHP()
        {
            using Field = ublox::message::CfgTmode3Fields<>::EcefMembers::EcefWrapMembers::EcefYHP;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(1U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_ecefZHP()
        {
            using Field = ublox::message::CfgTmode3Fields<>::EcefMembers::EcefWrapMembers::EcefZHP;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(1U)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_ecefWrap()
    {
        using Field = ublox::message::CfgTmode3Fields<>::EcefMembers::EcefWrap;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(EcefWrapMembers::createProps_ecefX())
                .add(EcefWrapMembers::createProps_ecefY())
                .add(EcefWrapMembers::createProps_ecefZ())
                .add(EcefWrapMembers::createProps_ecefXHP())
                .add(EcefWrapMembers::createProps_ecefYHP())
                .add(EcefWrapMembers::createProps_ecefZHP())
                .asMap();
        
    }
    
};

static QVariantMap createProps_ecef()
{
    using Field = ublox::message::CfgTmode3Fields<>::Ecef;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(EcefMembers::createProps_ecefWrap())
            .asMap();
    
}

struct LlaMembers
{
    struct LlaWrapMembers
    {
        static QVariantMap createProps_lat()
        {
            using Field = ublox::message::CfgTmode3Fields<>::LlaMembers::LlaWrapMembers::Lat;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(7U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_lon()
        {
            using Field = ublox::message::CfgTmode3Fields<>::LlaMembers::LlaWrapMembers::Lon;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(7U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_alt()
        {
            using Field = ublox::message::CfgTmode3Fields<>::LlaMembers::LlaWrapMembers::Alt;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_latHP()
        {
            using Field = ublox::message::CfgTmode3Fields<>::LlaMembers::LlaWrapMembers::LatHP;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(9U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_lonHP()
        {
            using Field = ublox::message::CfgTmode3Fields<>::LlaMembers::LlaWrapMembers::LonHP;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(9U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_altHP()
        {
            using Field = ublox::message::CfgTmode3Fields<>::LlaMembers::LlaWrapMembers::AltHP;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(1U)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_llaWrap()
    {
        using Field = ublox::message::CfgTmode3Fields<>::LlaMembers::LlaWrap;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(LlaWrapMembers::createProps_lat())
                .add(LlaWrapMembers::createProps_lon())
                .add(LlaWrapMembers::createProps_alt())
                .add(LlaWrapMembers::createProps_latHP())
                .add(LlaWrapMembers::createProps_lonHP())
                .add(LlaWrapMembers::createProps_altHP())
                .asMap();
        
    }
    
};

static QVariantMap createProps_lla()
{
    using Field = ublox::message::CfgTmode3Fields<>::Lla;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(LlaMembers::createProps_llaWrap())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgTmode3Fields<>::Reserved2;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_fixedPosAcc()
{
    using Field = ublox::message::CfgTmode3Fields<>::FixedPosAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_svinMinDur()
{
    using Field = ublox::message::CfgTmode3Fields<>::SvinMinDur;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svinVarLimit()
{
    using Field = ublox::message::CfgTmode3Fields<>::SvinVarLimit;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::CfgTmode3Fields<>::Reserved3;
    return cc_plugin::field::createProps_res8(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_flags());
    props.append(createProps_ecef());
    props.append(createProps_lla());
    props.append(createProps_reserved2());
    props.append(createProps_fixedPosAcc());
    props.append(createProps_svinMinDur());
    props.append(createProps_svinVarLimit());
    props.append(createProps_reserved3());
    return props;
}

} // namespace

class CfgTmode3Impl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTmode3<ublox::cc_plugin::Message>,
        CfgTmode3Impl
    >
{
public:
    CfgTmode3Impl() = default;
    CfgTmode3Impl(const CfgTmode3Impl&) = delete;
    CfgTmode3Impl(CfgTmode3Impl&&) = delete;
    virtual ~CfgTmode3Impl() = default;
    CfgTmode3Impl& operator=(const CfgTmode3Impl&) = default;
    CfgTmode3Impl& operator=(CfgTmode3Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTmode3::CfgTmode3() : m_pImpl(new CfgTmode3Impl) {}
CfgTmode3::~CfgTmode3() = default;

CfgTmode3& CfgTmode3::operator=(const CfgTmode3& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTmode3& CfgTmode3::operator=(CfgTmode3&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTmode3::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTmode3::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTmode3::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTmode3::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTmode3::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTmode3*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTmode3::MsgIdParamType CfgTmode3::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTmode3::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTmode3::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTmode3::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTmode3::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTmode3::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


