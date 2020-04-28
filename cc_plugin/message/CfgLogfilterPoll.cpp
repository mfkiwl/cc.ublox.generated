// Generated by commsdsl2comms v3.4.0

#include "CfgLogfilterPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgLogfilterPoll.h"
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

class CfgLogfilterPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgLogfilterPoll<ublox::cc_plugin::Message>,
        CfgLogfilterPollImpl
    >
{
public:
    CfgLogfilterPollImpl() = default;
    CfgLogfilterPollImpl(const CfgLogfilterPollImpl&) = delete;
    CfgLogfilterPollImpl(CfgLogfilterPollImpl&&) = delete;
    virtual ~CfgLogfilterPollImpl() = default;
    CfgLogfilterPollImpl& operator=(const CfgLogfilterPollImpl&) = default;
    CfgLogfilterPollImpl& operator=(CfgLogfilterPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgLogfilterPoll::CfgLogfilterPoll() : m_pImpl(new CfgLogfilterPollImpl) {}
CfgLogfilterPoll::~CfgLogfilterPoll() = default;

CfgLogfilterPoll& CfgLogfilterPoll::operator=(const CfgLogfilterPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgLogfilterPoll& CfgLogfilterPoll::operator=(CfgLogfilterPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgLogfilterPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgLogfilterPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgLogfilterPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgLogfilterPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgLogfilterPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgLogfilterPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgLogfilterPoll::MsgIdParamType CfgLogfilterPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgLogfilterPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgLogfilterPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgLogfilterPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgLogfilterPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgLogfilterPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


