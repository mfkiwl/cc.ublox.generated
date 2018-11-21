#include "NavTimegal.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimegal.h"
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
    using Field = ublox::message::NavTimegalFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_galTow()
{
    using Field = ublox::message::NavTimegalFields<>::GalTow;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fGalTow()
{
    using Field = ublox::message::NavTimegalFields<>::FGalTow;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_galWno()
{
    using Field = ublox::message::NavTimegalFields<>::GalWno;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_leapS()
{
    using Field = ublox::message::NavTimegalFields<>::LeapS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_valid()
{
    using Field = ublox::message::NavTimegalFields<>::Valid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "galTowValid")
            .add(1U, "galWnoValid")
            .add(2U, "leapSValid")
            .asMap();
    
}

static QVariantMap createProps_tAcc()
{
    using Field = ublox::message::NavTimegalFields<>::TAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_galTow());
    props.append(createProps_fGalTow());
    props.append(createProps_galWno());
    props.append(createProps_leapS());
    props.append(createProps_valid());
    props.append(createProps_tAcc());
    return props;
}

} // namespace

class NavTimegalImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimegal<ublox::cc_plugin::Message>,
        NavTimegalImpl
    >
{
public:
    NavTimegalImpl() = default;
    NavTimegalImpl(const NavTimegalImpl&) = delete;
    NavTimegalImpl(NavTimegalImpl&&) = delete;
    virtual ~NavTimegalImpl() = default;
    NavTimegalImpl& operator=(const NavTimegalImpl&) = default;
    NavTimegalImpl& operator=(NavTimegalImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimegal::NavTimegal() : m_pImpl(new NavTimegalImpl) {}
NavTimegal::~NavTimegal() = default;

NavTimegal& NavTimegal::operator=(const NavTimegal& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimegal& NavTimegal::operator=(NavTimegal&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimegal::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimegal::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimegal::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimegal::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimegal::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimegal*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimegal::MsgIdParamType NavTimegal::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimegal::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimegal::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimegal::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimegal::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimegal::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


