#include "CfgSbas.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgSbas.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_mode()
{
    using Field = ublox::message::CfgSbasFields<>::Mode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "enabled")
            .add(1U, "test")
            .asMap();
    
}

static QVariantMap createProps_usage()
{
    using Field = ublox::message::CfgSbasFields<>::Usage;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "range")
            .add(1U, "diffCorr")
            .add(2U, "integrity")
            .asMap();
    
}

static QVariantMap createProps_maxSBAS()
{
    using Field = ublox::message::CfgSbasFields<>::MaxSBAS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_scanmode2()
{
    using Field = ublox::message::CfgSbasFields<>::Scanmode2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "PRN152")
            .add(1U, "PRN153")
            .add(2U, "PRN154")
            .add(3U, "PRN155")
            .add(4U, "PRN156")
            .add(5U, "PRN157")
            .add(6U, "PRN158")
            .asMap();
    
}

static QVariantMap createProps_scanmode1()
{
    using Field = ublox::message::CfgSbasFields<>::Scanmode1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "PRN120")
            .add(1U, "PRN121")
            .add(2U, "PRN122")
            .add(3U, "PRN123")
            .add(4U, "PRN124")
            .add(5U, "PRN125")
            .add(6U, "PRN126")
            .add(7U, "PRN127")
            .add(8U, "PRN128")
            .add(9U, "PRN129")
            .add(10U, "PRN130")
            .add(11U, "PRN131")
            .add(12U, "PRN132")
            .add(13U, "PRN133")
            .add(14U, "PRN134")
            .add(15U, "PRN135")
            .add(16U, "PRN136")
            .add(17U, "PRN137")
            .add(18U, "PRN138")
            .add(19U, "PRN139")
            .add(20U, "PRN140")
            .add(21U, "PRN141")
            .add(22U, "PRN142")
            .add(23U, "PRN143")
            .add(24U, "PRN144")
            .add(25U, "PRN145")
            .add(26U, "PRN146")
            .add(27U, "PRN147")
            .add(28U, "PRN148")
            .add(29U, "PRN149")
            .add(30U, "PRN150")
            .add(31U, "PRN151")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_mode());
    props.append(createProps_usage());
    props.append(createProps_maxSBAS());
    props.append(createProps_scanmode2());
    props.append(createProps_scanmode1());
    return props;
}

} // namespace

class CfgSbasImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgSbas<ublox::cc_plugin::Message>,
        CfgSbasImpl
    >
{
public:
    CfgSbasImpl() = default;
    CfgSbasImpl(const CfgSbasImpl&) = delete;
    CfgSbasImpl(CfgSbasImpl&&) = delete;
    virtual ~CfgSbasImpl() = default;
    CfgSbasImpl& operator=(const CfgSbasImpl&) = default;
    CfgSbasImpl& operator=(CfgSbasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgSbas::CfgSbas() : m_pImpl(new CfgSbasImpl) {}
CfgSbas::~CfgSbas() = default;

CfgSbas& CfgSbas::operator=(const CfgSbas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgSbas& CfgSbas::operator=(CfgSbas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgSbas::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgSbas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgSbas::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgSbas::resetImpl()
{
    m_pImpl->reset();
}

bool CfgSbas::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgSbas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgSbas::MsgIdParamType CfgSbas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgSbas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgSbas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgSbas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgSbas::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgSbas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


