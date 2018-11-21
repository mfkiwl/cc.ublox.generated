#include "NavSol.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSol.h"
#include "cc_plugin/field/Dop.h"
#include "cc_plugin/field/EcefVX.h"
#include "cc_plugin/field/EcefVY.h"
#include "cc_plugin/field/EcefVZ.h"
#include "cc_plugin/field/EcefX.h"
#include "cc_plugin/field/EcefY.h"
#include "cc_plugin/field/EcefZ.h"
#include "cc_plugin/field/Ftow.h"
#include "cc_plugin/field/GpsFix.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/PAcc.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res4.h"
#include "cc_plugin/field/SAcc.h"

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
    using Field = ublox::message::NavSolFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_ftow()
{
    using Field = ublox::message::NavSolFields<>::Ftow;
    return cc_plugin::field::createProps_ftow(Field::name());
    
}

static QVariantMap createProps_week()
{
    using Field = ublox::message::NavSolFields<>::Week;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_gpsFix()
{
    using Field = ublox::message::NavSolFields<>::GpsFix;
    return cc_plugin::field::createProps_gpsFix(Field::name());
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::NavSolFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "GPSfixOK")
            .add(1U, "DiffSoln")
            .add(2U, "WKNSET")
            .add(3U, "TOWSET")
            .asMap();
    
}

static QVariantMap createProps_ecefX()
{
    using Field = ublox::message::NavSolFields<>::EcefX;
    return cc_plugin::field::createProps_ecefX(Field::name());
    
}

static QVariantMap createProps_ecefY()
{
    using Field = ublox::message::NavSolFields<>::EcefY;
    return cc_plugin::field::createProps_ecefY(Field::name());
    
}

static QVariantMap createProps_ecefZ()
{
    using Field = ublox::message::NavSolFields<>::EcefZ;
    return cc_plugin::field::createProps_ecefZ(Field::name());
    
}

static QVariantMap createProps_pAcc()
{
    using Field = ublox::message::NavSolFields<>::PAcc;
    return cc_plugin::field::createProps_pAcc(Field::name());
    
}

static QVariantMap createProps_ecefVX()
{
    using Field = ublox::message::NavSolFields<>::EcefVX;
    return cc_plugin::field::createProps_ecefVX(Field::name());
    
}

static QVariantMap createProps_ecefVY()
{
    using Field = ublox::message::NavSolFields<>::EcefVY;
    return cc_plugin::field::createProps_ecefVY(Field::name());
    
}

static QVariantMap createProps_ecefVZ()
{
    using Field = ublox::message::NavSolFields<>::EcefVZ;
    return cc_plugin::field::createProps_ecefVZ(Field::name());
    
}

static QVariantMap createProps_sAcc()
{
    using Field = ublox::message::NavSolFields<>::SAcc;
    return cc_plugin::field::createProps_sAcc(Field::name());
    
}

static QVariantMap createProps_pDOP()
{
    using Field = ublox::message::NavSolFields<>::PDOP;
    return cc_plugin::field::createProps_dop(Field::name());
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavSolFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::NavSolFields<>::NumSV;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::NavSolFields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_ftow());
    props.append(createProps_week());
    props.append(createProps_gpsFix());
    props.append(createProps_flags());
    props.append(createProps_ecefX());
    props.append(createProps_ecefY());
    props.append(createProps_ecefZ());
    props.append(createProps_pAcc());
    props.append(createProps_ecefVX());
    props.append(createProps_ecefVY());
    props.append(createProps_ecefVZ());
    props.append(createProps_sAcc());
    props.append(createProps_pDOP());
    props.append(createProps_reserved1());
    props.append(createProps_numSV());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class NavSolImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSol<ublox::cc_plugin::Message>,
        NavSolImpl
    >
{
public:
    NavSolImpl() = default;
    NavSolImpl(const NavSolImpl&) = delete;
    NavSolImpl(NavSolImpl&&) = delete;
    virtual ~NavSolImpl() = default;
    NavSolImpl& operator=(const NavSolImpl&) = default;
    NavSolImpl& operator=(NavSolImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSol::NavSol() : m_pImpl(new NavSolImpl) {}
NavSol::~NavSol() = default;

NavSol& NavSol::operator=(const NavSol& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSol& NavSol::operator=(NavSol&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSol::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSol::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSol::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSol::resetImpl()
{
    m_pImpl->reset();
}

bool NavSol::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSol*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSol::MsgIdParamType NavSol::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSol::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSol::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSol::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSol::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSol::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


