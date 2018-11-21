#include "CfgInfPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgInfPoll.h"
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

class CfgInfPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgInfPoll<ublox::cc_plugin::Message>,
        CfgInfPollImpl
    >
{
public:
    CfgInfPollImpl() = default;
    CfgInfPollImpl(const CfgInfPollImpl&) = delete;
    CfgInfPollImpl(CfgInfPollImpl&&) = delete;
    virtual ~CfgInfPollImpl() = default;
    CfgInfPollImpl& operator=(const CfgInfPollImpl&) = default;
    CfgInfPollImpl& operator=(CfgInfPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgInfPoll::CfgInfPoll() : m_pImpl(new CfgInfPollImpl) {}
CfgInfPoll::~CfgInfPoll() = default;

CfgInfPoll& CfgInfPoll::operator=(const CfgInfPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgInfPoll& CfgInfPoll::operator=(CfgInfPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgInfPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgInfPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgInfPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgInfPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgInfPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgInfPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgInfPoll::MsgIdParamType CfgInfPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgInfPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgInfPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgInfPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgInfPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgInfPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


