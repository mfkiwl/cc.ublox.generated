#include "CfgEkf.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgEkf.h"
#include "cc_plugin/field/Res4.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_disableEkf()
{
    using Field = ublox::message::CfgEkfFields<>::DisableEkf;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Enabled", 0)
            .add("Disabled", 1)
            .asMap();
    
}

static QVariantMap createProps_actionFlags()
{
    using Field = ublox::message::CfgEkfFields<>::ActionFlags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(1U, "clTab")
            .add(2U, "clCalib")
            .add(4U, "nomTacho")
            .add(5U, "nomGyro")
            .add(6U, "setTemp")
            .add(7U, "dir")
            .asMap();
    
}

static QVariantMap createProps_configFlags()
{
    using Field = ublox::message::CfgEkfFields<>::ConfigFlags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "pulsesPerM")
            .add(1U, "useSerWt")
            .asMap();
    
}

static QVariantMap createProps_inverseFlags()
{
    using Field = ublox::message::CfgEkfFields<>::InverseFlags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "invDir")
            .add(1U, "invGyro")
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgEkfFields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

static QVariantMap createProps_nomPPDist()
{
    using Field = ublox::message::CfgEkfFields<>::NomPPDist;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_nomZero()
{
    using Field = ublox::message::CfgEkfFields<>::NomZero;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_nomSens()
{
    using Field = ublox::message::CfgEkfFields<>::NomSens;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_rmsTemp()
{
    using Field = ublox::message::CfgEkfFields<>::RmsTemp;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

static QVariantMap createProps_tempUpdate()
{
    using Field = ublox::message::CfgEkfFields<>::TempUpdate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_disableEkf());
    props.append(createProps_actionFlags());
    props.append(createProps_configFlags());
    props.append(createProps_inverseFlags());
    props.append(createProps_reserved2());
    props.append(createProps_nomPPDist());
    props.append(createProps_nomZero());
    props.append(createProps_nomSens());
    props.append(createProps_rmsTemp());
    props.append(createProps_tempUpdate());
    return props;
}

} // namespace

class CfgEkfImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgEkf<ublox::cc_plugin::Message>,
        CfgEkfImpl
    >
{
public:
    CfgEkfImpl() = default;
    CfgEkfImpl(const CfgEkfImpl&) = delete;
    CfgEkfImpl(CfgEkfImpl&&) = delete;
    virtual ~CfgEkfImpl() = default;
    CfgEkfImpl& operator=(const CfgEkfImpl&) = default;
    CfgEkfImpl& operator=(CfgEkfImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgEkf::CfgEkf() : m_pImpl(new CfgEkfImpl) {}
CfgEkf::~CfgEkf() = default;

CfgEkf& CfgEkf::operator=(const CfgEkf& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgEkf& CfgEkf::operator=(CfgEkf&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgEkf::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgEkf::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgEkf::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgEkf::resetImpl()
{
    m_pImpl->reset();
}

bool CfgEkf::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgEkf*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgEkf::MsgIdParamType CfgEkf::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgEkf::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgEkf::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgEkf::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgEkf::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgEkf::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


