#include "NavSbas.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSbas.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res3.h"
#include "cc_plugin/field/SbasService.h"
#include "cc_plugin/field/SbasSys.h"

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
    using Field = ublox::message::NavSbasFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_geo()
{
    using Field = ublox::message::NavSbasFields<>::Geo;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_mode()
{
    using Field = ublox::message::NavSbasFields<>::Mode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Disabled", 0)
            .add("Enabled Integrity", 1)
            .add("Enabled Testmode", 2)
            .asMap();
    
}

static QVariantMap createProps_sys()
{
    using Field = ublox::message::NavSbasFields<>::Sys;
    return cc_plugin::field::createProps_sbasSys(Field::name());
    
}

static QVariantMap createProps_service()
{
    using Field = ublox::message::NavSbasFields<>::Service;
    return cc_plugin::field::createProps_sbasService(Field::name());
    
}

static QVariantMap createProps_cnt()
{
    using Field = ublox::message::NavSbasFields<>::Cnt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavSbasFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_svid()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::Svid;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_flags()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::Flags;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_udre()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::Udre;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_svSys()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::SvSys;
            return cc_plugin::field::createProps_sbasSys(Field::name());
            
        }
        
        static QVariantMap createProps_svService()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::SvService;
            return cc_plugin::field::createProps_sbasService(Field::name());
            
        }
        
        static QVariantMap createProps_reserved2()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::Reserved2;
            return cc_plugin::field::createProps_res1(Field::name());
            
        }
        
        static QVariantMap createProps_prc()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::Prc;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved3()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::Reserved3;
            return cc_plugin::field::createProps_res2(Field::name());
            
        }
        
        static QVariantMap createProps_ic()
        {
            using Field = ublox::message::NavSbasFields<>::ListMembers::ElementMembers::Ic;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::NavSbasFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_svid())
                .add(ElementMembers::createProps_flags())
                .add(ElementMembers::createProps_udre())
                .add(ElementMembers::createProps_svSys())
                .add(ElementMembers::createProps_svService())
                .add(ElementMembers::createProps_reserved2())
                .add(ElementMembers::createProps_prc())
                .add(ElementMembers::createProps_reserved3())
                .add(ElementMembers::createProps_ic())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::NavSbasFields<>::List;
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
    props.append(createProps_geo());
    props.append(createProps_mode());
    props.append(createProps_sys());
    props.append(createProps_service());
    props.append(createProps_cnt());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class NavSbasImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSbas<ublox::cc_plugin::Message>,
        NavSbasImpl
    >
{
public:
    NavSbasImpl() = default;
    NavSbasImpl(const NavSbasImpl&) = delete;
    NavSbasImpl(NavSbasImpl&&) = delete;
    virtual ~NavSbasImpl() = default;
    NavSbasImpl& operator=(const NavSbasImpl&) = default;
    NavSbasImpl& operator=(NavSbasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSbas::NavSbas() : m_pImpl(new NavSbasImpl) {}
NavSbas::~NavSbas() = default;

NavSbas& NavSbas::operator=(const NavSbas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSbas& NavSbas::operator=(NavSbas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSbas::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSbas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSbas::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSbas::resetImpl()
{
    m_pImpl->reset();
}

bool NavSbas::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSbas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSbas::MsgIdParamType NavSbas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSbas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSbas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSbas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSbas::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSbas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


