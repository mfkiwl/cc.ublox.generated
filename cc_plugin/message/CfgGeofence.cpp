#include "CfgGeofence.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgGeofence.h"
#include "cc_plugin/field/Lat.h"
#include "cc_plugin/field/Lon.h"
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
    using Field = ublox::message::CfgGeofenceFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numFences()
{
    using Field = ublox::message::CfgGeofenceFields<>::NumFences;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_confLvl()
{
    using Field = ublox::message::CfgGeofenceFields<>::ConfLvl;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgGeofenceFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_pioEnabled()
{
    using Field = ublox::message::CfgGeofenceFields<>::PioEnabled;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Disable", 0)
            .add("Enable", 1)
            .asMap();
    
}

static QVariantMap createProps_pinPolarity()
{
    using Field = ublox::message::CfgGeofenceFields<>::PinPolarity;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("LowInside", 0)
            .add("LowOutside", 1)
            .asMap();
    
}

static QVariantMap createProps_pin()
{
    using Field = ublox::message::CfgGeofenceFields<>::Pin;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgGeofenceFields<>::Reserved2;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_lat()
        {
            using Field = ublox::message::CfgGeofenceFields<>::ListMembers::ElementMembers::Lat;
            return cc_plugin::field::createProps_lat(Field::name());
            
        }
        
        static QVariantMap createProps_lon()
        {
            using Field = ublox::message::CfgGeofenceFields<>::ListMembers::ElementMembers::Lon;
            return cc_plugin::field::createProps_lon(Field::name());
            
        }
        
        static QVariantMap createProps_radius()
        {
            using Field = ublox::message::CfgGeofenceFields<>::ListMembers::ElementMembers::Radius;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(2U)
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::CfgGeofenceFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_lat())
                .add(ElementMembers::createProps_lon())
                .add(ElementMembers::createProps_radius())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::CfgGeofenceFields<>::List;
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
    props.append(createProps_version());
    props.append(createProps_numFences());
    props.append(createProps_confLvl());
    props.append(createProps_reserved1());
    props.append(createProps_pioEnabled());
    props.append(createProps_pinPolarity());
    props.append(createProps_pin());
    props.append(createProps_reserved2());
    props.append(createProps_list());
    return props;
}

} // namespace

class CfgGeofenceImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgGeofence<ublox::cc_plugin::Message>,
        CfgGeofenceImpl
    >
{
public:
    CfgGeofenceImpl() = default;
    CfgGeofenceImpl(const CfgGeofenceImpl&) = delete;
    CfgGeofenceImpl(CfgGeofenceImpl&&) = delete;
    virtual ~CfgGeofenceImpl() = default;
    CfgGeofenceImpl& operator=(const CfgGeofenceImpl&) = default;
    CfgGeofenceImpl& operator=(CfgGeofenceImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgGeofence::CfgGeofence() : m_pImpl(new CfgGeofenceImpl) {}
CfgGeofence::~CfgGeofence() = default;

CfgGeofence& CfgGeofence::operator=(const CfgGeofence& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgGeofence& CfgGeofence::operator=(CfgGeofence&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgGeofence::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgGeofence::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgGeofence::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgGeofence::resetImpl()
{
    m_pImpl->reset();
}

bool CfgGeofence::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgGeofence*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgGeofence::MsgIdParamType CfgGeofence::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgGeofence::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgGeofence::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgGeofence::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgGeofence::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgGeofence::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


