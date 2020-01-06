// Generated by commsdsl2comms v3.3.0

#include "NavTimegps.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimegps.h"
#include "cc_plugin/field/Ftow.h"
#include "cc_plugin/field/Itow.h"

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
    using Field = ublox::message::NavTimegpsFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_ftow()
{
    using Field = ublox::message::NavTimegpsFields<>::Ftow;
    auto props = cc_plugin::field::createProps_ftow(Field::name());
    return props;
    
}

static QVariantMap createProps_weeks()
{
    using Field = ublox::message::NavTimegpsFields<>::Weeks;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_leapS()
{
    using Field = ublox::message::NavTimegpsFields<>::LeapS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_valid()
{
    using Field = ublox::message::NavTimegpsFields<>::Valid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "towValid")
            .add(1U, "weekValid")
            .add(2U, "leapSValid")
            .asMap();
    
}

static QVariantMap createProps_tAcc()
{
    using Field = ublox::message::NavTimegpsFields<>::TAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_ftow());
    props.append(createProps_weeks());
    props.append(createProps_leapS());
    props.append(createProps_valid());
    props.append(createProps_tAcc());
    return props;
}

} // namespace

class NavTimegpsImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimegps<ublox::cc_plugin::Message>,
        NavTimegpsImpl
    >
{
public:
    NavTimegpsImpl() = default;
    NavTimegpsImpl(const NavTimegpsImpl&) = delete;
    NavTimegpsImpl(NavTimegpsImpl&&) = delete;
    virtual ~NavTimegpsImpl() = default;
    NavTimegpsImpl& operator=(const NavTimegpsImpl&) = default;
    NavTimegpsImpl& operator=(NavTimegpsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimegps::NavTimegps() : m_pImpl(new NavTimegpsImpl) {}
NavTimegps::~NavTimegps() = default;

NavTimegps& NavTimegps::operator=(const NavTimegps& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimegps& NavTimegps::operator=(NavTimegps&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimegps::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimegps::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimegps::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimegps::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimegps::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimegps*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimegps::MsgIdParamType NavTimegps::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimegps::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimegps::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimegps::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimegps::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimegps::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


