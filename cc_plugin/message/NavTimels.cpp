#include "NavTimels.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimels.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res3.h"

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
    using Field = ublox::message::NavTimelsFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::NavTimelsFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavTimelsFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_srcOfCurrLs()
{
    using Field = ublox::message::NavTimelsFields<>::SrcOfCurrLs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Default", 0)
            .add("Derived", 1)
            .add("GPS", 2)
            .add("SBAS", 3)
            .add("BeiDou", 4)
            .add("Galileo", 5)
            .add("Aided data", 6)
            .add("Configured", 7)
            .add("Unknown", 255)
            .asMap();
    
}

static QVariantMap createProps_currLs()
{
    using Field = ublox::message::NavTimelsFields<>::CurrLs;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_srcOfLsChange()
{
    using Field = ublox::message::NavTimelsFields<>::SrcOfLsChange;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("No source", 0)
            .add("GPS", 2)
            .add("SBAS", 3)
            .add("BeiDou", 4)
            .add("Galileo", 5)
            .add("GLONASS", 6)
            .asMap();
    
}

static QVariantMap createProps_lsChange()
{
    using Field = ublox::message::NavTimelsFields<>::LsChange;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_timeToLsEvent()
{
    using Field = ublox::message::NavTimelsFields<>::TimeToLsEvent;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dateOfLsGpsWn()
{
    using Field = ublox::message::NavTimelsFields<>::DateOfLsGpsWn;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_dateOfLsGpsDn()
{
    using Field = ublox::message::NavTimelsFields<>::DateOfLsGpsDn;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::NavTimelsFields<>::Reserved2;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_valid()
{
    using Field = ublox::message::NavTimelsFields<>::Valid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "validCurrLs")
            .add(1U, "validTimeToLsEvent")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_srcOfCurrLs());
    props.append(createProps_currLs());
    props.append(createProps_srcOfLsChange());
    props.append(createProps_lsChange());
    props.append(createProps_timeToLsEvent());
    props.append(createProps_dateOfLsGpsWn());
    props.append(createProps_dateOfLsGpsDn());
    props.append(createProps_reserved2());
    props.append(createProps_valid());
    return props;
}

} // namespace

class NavTimelsImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimels<ublox::cc_plugin::Message>,
        NavTimelsImpl
    >
{
public:
    NavTimelsImpl() = default;
    NavTimelsImpl(const NavTimelsImpl&) = delete;
    NavTimelsImpl(NavTimelsImpl&&) = delete;
    virtual ~NavTimelsImpl() = default;
    NavTimelsImpl& operator=(const NavTimelsImpl&) = default;
    NavTimelsImpl& operator=(NavTimelsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimels::NavTimels() : m_pImpl(new NavTimelsImpl) {}
NavTimels::~NavTimels() = default;

NavTimels& NavTimels::operator=(const NavTimels& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimels& NavTimels::operator=(NavTimels&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimels::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimels::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimels::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimels::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimels::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimels*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimels::MsgIdParamType NavTimels::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimels::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimels::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimels::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimels::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimels::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


