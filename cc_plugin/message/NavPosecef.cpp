#include "NavPosecef.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavPosecef.h"
#include "cc_plugin/field/EcefX.h"
#include "cc_plugin/field/EcefY.h"
#include "cc_plugin/field/EcefZ.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/PAcc.h"

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
    using Field = ublox::message::NavPosecefFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_ecefX()
{
    using Field = ublox::message::NavPosecefFields<>::EcefX;
    return cc_plugin::field::createProps_ecefX(Field::name());
    
}

static QVariantMap createProps_ecefY()
{
    using Field = ublox::message::NavPosecefFields<>::EcefY;
    return cc_plugin::field::createProps_ecefY(Field::name());
    
}

static QVariantMap createProps_ecefZ()
{
    using Field = ublox::message::NavPosecefFields<>::EcefZ;
    return cc_plugin::field::createProps_ecefZ(Field::name());
    
}

static QVariantMap createProps_pAcc()
{
    using Field = ublox::message::NavPosecefFields<>::PAcc;
    return cc_plugin::field::createProps_pAcc(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_ecefX());
    props.append(createProps_ecefY());
    props.append(createProps_ecefZ());
    props.append(createProps_pAcc());
    return props;
}

} // namespace

class NavPosecefImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavPosecef<ublox::cc_plugin::Message>,
        NavPosecefImpl
    >
{
public:
    NavPosecefImpl() = default;
    NavPosecefImpl(const NavPosecefImpl&) = delete;
    NavPosecefImpl(NavPosecefImpl&&) = delete;
    virtual ~NavPosecefImpl() = default;
    NavPosecefImpl& operator=(const NavPosecefImpl&) = default;
    NavPosecefImpl& operator=(NavPosecefImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPosecef::NavPosecef() : m_pImpl(new NavPosecefImpl) {}
NavPosecef::~NavPosecef() = default;

NavPosecef& NavPosecef::operator=(const NavPosecef& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPosecef& NavPosecef::operator=(NavPosecef&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavPosecef::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPosecef::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPosecef::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPosecef::resetImpl()
{
    m_pImpl->reset();
}

bool NavPosecef::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPosecef*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPosecef::MsgIdParamType NavPosecef::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPosecef::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPosecef::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPosecef::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPosecef::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPosecef::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


