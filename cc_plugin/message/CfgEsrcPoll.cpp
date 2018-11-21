#include "CfgEsrcPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgEsrcPoll.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class CfgEsrcPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgEsrcPoll<ublox::cc_plugin::Message>,
        CfgEsrcPollImpl
    >
{
public:
    CfgEsrcPollImpl() = default;
    CfgEsrcPollImpl(const CfgEsrcPollImpl&) = delete;
    CfgEsrcPollImpl(CfgEsrcPollImpl&&) = delete;
    virtual ~CfgEsrcPollImpl() = default;
    CfgEsrcPollImpl& operator=(const CfgEsrcPollImpl&) = default;
    CfgEsrcPollImpl& operator=(CfgEsrcPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgEsrcPoll::CfgEsrcPoll() : m_pImpl(new CfgEsrcPollImpl) {}
CfgEsrcPoll::~CfgEsrcPoll() = default;

CfgEsrcPoll& CfgEsrcPoll::operator=(const CfgEsrcPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgEsrcPoll& CfgEsrcPoll::operator=(CfgEsrcPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgEsrcPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgEsrcPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgEsrcPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgEsrcPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgEsrcPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgEsrcPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgEsrcPoll::MsgIdParamType CfgEsrcPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgEsrcPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgEsrcPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgEsrcPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgEsrcPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgEsrcPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


