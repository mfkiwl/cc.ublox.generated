#include "NavOrb.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavOrb.h"
#include "cc_plugin/field/GnssId.h"
#include "cc_plugin/field/Itow.h"
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

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavOrbFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::NavOrbFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numSv()
{
    using Field = ublox::message::NavOrbFields<>::NumSv;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavOrbFields<>::Reserved1;
    return cc_plugin::field::createProps_res2(Field::name());
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_gnssId()
        {
            using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::GnssId;
            return cc_plugin::field::createProps_gnssId(Field::name());
            
        }
        
        static QVariantMap createProps_svid()
        {
            using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::Svid;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        struct SvFlagMembers
        {
            static QVariantMap createProps_health()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::SvFlagMembers::Health;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Unknown", 0)
                        .add("Healthy", 1)
                        .add("Not healty", 2)
                        .asMap();
                
            }
            
            static QVariantMap createProps_visibility()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::SvFlagMembers::Visibility;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Unknown", 0)
                        .add("Below horizon", 1)
                        .add("Above horizon", 2)
                        .add("Above elevation mask", 3)
                        .asMap();
                
            }
            
            static QVariantMap createProps_reserved()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::SvFlagMembers::Reserved;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .hidden()
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_svFlag()
        {
            using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::SvFlag;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(SvFlagMembers::createProps_health())
                    .add(SvFlagMembers::createProps_visibility())
                    .add(SvFlagMembers::createProps_reserved())
                    .asMap();
            
        }
        
        struct EphMembers
        {
            static QVariantMap createProps_ephUsability()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::EphMembers::EphUsability;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_ephSource()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::EphMembers::EphSource;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Not available", 0)
                        .add("GNSS transmission", 1)
                        .add("External aiding", 2)
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_eph()
        {
            using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::Eph;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(EphMembers::createProps_ephUsability())
                    .add(EphMembers::createProps_ephSource())
                    .asMap();
            
        }
        
        struct AlmMembers
        {
            static QVariantMap createProps_almUsability()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::AlmMembers::AlmUsability;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_almSource()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::AlmMembers::AlmSource;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Not available", 0)
                        .add("GNSS transmission", 1)
                        .add("External aiding", 2)
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_alm()
        {
            using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::Alm;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(AlmMembers::createProps_almUsability())
                    .add(AlmMembers::createProps_almSource())
                    .asMap();
            
        }
        
        struct OtherOrbMembers
        {
            static QVariantMap createProps_anoAopUsability()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::OtherOrbMembers::AnoAopUsability;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_type()
            {
                using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::OtherOrbMembers::Type;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Not available", 0)
                        .add("Offline data", 1)
                        .add("Autonomous data", 2)
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_otherOrb()
        {
            using Field = ublox::message::NavOrbFields<>::ListMembers::ElementMembers::OtherOrb;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(OtherOrbMembers::createProps_anoAopUsability())
                    .add(OtherOrbMembers::createProps_type())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::NavOrbFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_gnssId())
                .add(ElementMembers::createProps_svid())
                .add(ElementMembers::createProps_svFlag())
                .add(ElementMembers::createProps_eph())
                .add(ElementMembers::createProps_alm())
                .add(ElementMembers::createProps_otherOrb())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::NavOrbFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_version());
    props.append(createProps_numSv());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class NavOrbImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavOrb<ublox::cc_plugin::Message>,
        NavOrbImpl
    >
{
public:
    NavOrbImpl() = default;
    NavOrbImpl(const NavOrbImpl&) = delete;
    NavOrbImpl(NavOrbImpl&&) = delete;
    virtual ~NavOrbImpl() = default;
    NavOrbImpl& operator=(const NavOrbImpl&) = default;
    NavOrbImpl& operator=(NavOrbImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavOrb::NavOrb() : m_pImpl(new NavOrbImpl) {}
NavOrb::~NavOrb() = default;

NavOrb& NavOrb::operator=(const NavOrb& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavOrb& NavOrb::operator=(NavOrb&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavOrb::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavOrb::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavOrb::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavOrb::resetImpl()
{
    m_pImpl->reset();
}

bool NavOrb::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavOrb*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavOrb::MsgIdParamType NavOrb::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavOrb::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavOrb::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavOrb::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavOrb::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavOrb::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


