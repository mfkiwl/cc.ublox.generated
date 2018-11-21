#include "CfgRatePoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgRatePoll.h"
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

class CfgRatePollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgRatePoll<ublox::cc_plugin::Message>,
        CfgRatePollImpl
    >
{
public:
    CfgRatePollImpl() = default;
    CfgRatePollImpl(const CfgRatePollImpl&) = delete;
    CfgRatePollImpl(CfgRatePollImpl&&) = delete;
    virtual ~CfgRatePollImpl() = default;
    CfgRatePollImpl& operator=(const CfgRatePollImpl&) = default;
    CfgRatePollImpl& operator=(CfgRatePollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRatePoll::CfgRatePoll() : m_pImpl(new CfgRatePollImpl) {}
CfgRatePoll::~CfgRatePoll() = default;

CfgRatePoll& CfgRatePoll::operator=(const CfgRatePoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRatePoll& CfgRatePoll::operator=(CfgRatePoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRatePoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRatePoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRatePoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRatePoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRatePoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRatePoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRatePoll::MsgIdParamType CfgRatePoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRatePoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRatePoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRatePoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRatePoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRatePoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


