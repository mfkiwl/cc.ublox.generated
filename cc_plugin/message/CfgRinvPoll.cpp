#include "CfgRinvPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgRinvPoll.h"
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

class CfgRinvPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgRinvPoll<ublox::cc_plugin::Message>,
        CfgRinvPollImpl
    >
{
public:
    CfgRinvPollImpl() = default;
    CfgRinvPollImpl(const CfgRinvPollImpl&) = delete;
    CfgRinvPollImpl(CfgRinvPollImpl&&) = delete;
    virtual ~CfgRinvPollImpl() = default;
    CfgRinvPollImpl& operator=(const CfgRinvPollImpl&) = default;
    CfgRinvPollImpl& operator=(CfgRinvPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRinvPoll::CfgRinvPoll() : m_pImpl(new CfgRinvPollImpl) {}
CfgRinvPoll::~CfgRinvPoll() = default;

CfgRinvPoll& CfgRinvPoll::operator=(const CfgRinvPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRinvPoll& CfgRinvPoll::operator=(CfgRinvPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRinvPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRinvPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRinvPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRinvPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRinvPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRinvPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRinvPoll::MsgIdParamType CfgRinvPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRinvPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRinvPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRinvPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRinvPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRinvPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


