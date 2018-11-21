#include "CfgMsg.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgMsg.h"
#include "cc_plugin/field/MsgId.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId()
{
    using Field = ublox::message::CfgMsgFields<>::MsgId;
    return cc_plugin::field::createProps_msgId(Field::name());
    
}

struct RatesMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::CfgMsgFields<>::RatesMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_rates()
{
    using Field = ublox::message::CfgMsgFields<>::Rates;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(RatesMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId());
    props.append(createProps_rates());
    return props;
}

} // namespace

class CfgMsgImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgMsg<ublox::cc_plugin::Message>,
        CfgMsgImpl
    >
{
public:
    CfgMsgImpl() = default;
    CfgMsgImpl(const CfgMsgImpl&) = delete;
    CfgMsgImpl(CfgMsgImpl&&) = delete;
    virtual ~CfgMsgImpl() = default;
    CfgMsgImpl& operator=(const CfgMsgImpl&) = default;
    CfgMsgImpl& operator=(CfgMsgImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgMsg::CfgMsg() : m_pImpl(new CfgMsgImpl) {}
CfgMsg::~CfgMsg() = default;

CfgMsg& CfgMsg::operator=(const CfgMsg& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgMsg& CfgMsg::operator=(CfgMsg&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgMsg::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgMsg::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgMsg::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgMsg::resetImpl()
{
    m_pImpl->reset();
}

bool CfgMsg::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgMsg*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgMsg::MsgIdParamType CfgMsg::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgMsg::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgMsg::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgMsg::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgMsg::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgMsg::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


