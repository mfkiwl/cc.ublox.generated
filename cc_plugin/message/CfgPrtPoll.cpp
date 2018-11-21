#include "CfgPrtPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPrtPoll.h"
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

class CfgPrtPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPrtPoll<ublox::cc_plugin::Message>,
        CfgPrtPollImpl
    >
{
public:
    CfgPrtPollImpl() = default;
    CfgPrtPollImpl(const CfgPrtPollImpl&) = delete;
    CfgPrtPollImpl(CfgPrtPollImpl&&) = delete;
    virtual ~CfgPrtPollImpl() = default;
    CfgPrtPollImpl& operator=(const CfgPrtPollImpl&) = default;
    CfgPrtPollImpl& operator=(CfgPrtPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtPoll::CfgPrtPoll() : m_pImpl(new CfgPrtPollImpl) {}
CfgPrtPoll::~CfgPrtPoll() = default;

CfgPrtPoll& CfgPrtPoll::operator=(const CfgPrtPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtPoll& CfgPrtPoll::operator=(CfgPrtPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPrtPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtPoll::MsgIdParamType CfgPrtPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


