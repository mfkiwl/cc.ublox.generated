// Generated by commsdsl2comms v3.5.0

#include "CfgInf.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgInf.h"
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

static QVariantMap createProps_protocolId()
{
    using Field = ublox::message::CfgInfFields<>::ProtocolId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("UBX", 0)
            .add("NMEA", 1)
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgInfFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

struct InfMsgMaskMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::CfgInfFields<>::InfMsgMaskMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(0U, "ERROR")
                .add(1U, "WARNING")
                .add(2U, "NOTICE")
                .add(3U, "TEST")
                .add(4U, "DEBUG")
                .asMap();
        
    }
    
};

static QVariantMap createProps_infMsgMask()
{
    using Field = ublox::message::CfgInfFields<>::InfMsgMask;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(InfMsgMaskMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_protocolId());
    props.append(createProps_reserved1());
    props.append(createProps_infMsgMask());
    return props;
}

} // namespace

class CfgInfImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgInf<ublox::cc_plugin::Message>,
        CfgInfImpl
    >
{
public:
    CfgInfImpl() = default;
    CfgInfImpl(const CfgInfImpl&) = delete;
    CfgInfImpl(CfgInfImpl&&) = delete;
    virtual ~CfgInfImpl() = default;
    CfgInfImpl& operator=(const CfgInfImpl&) = default;
    CfgInfImpl& operator=(CfgInfImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgInf::CfgInf() : m_pImpl(new CfgInfImpl) {}
CfgInf::~CfgInf() = default;

CfgInf& CfgInf::operator=(const CfgInf& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgInf& CfgInf::operator=(CfgInf&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgInf::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgInf::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgInf::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgInf::resetImpl()
{
    m_pImpl->reset();
}

bool CfgInf::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgInf*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgInf::MsgIdParamType CfgInf::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgInf::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgInf::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgInf::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgInf::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgInf::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


