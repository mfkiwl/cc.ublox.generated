#include "CfgGeofencePoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgGeofencePoll.h"
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

class CfgGeofencePollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgGeofencePoll<ublox::cc_plugin::Message>,
        CfgGeofencePollImpl
    >
{
public:
    CfgGeofencePollImpl() = default;
    CfgGeofencePollImpl(const CfgGeofencePollImpl&) = delete;
    CfgGeofencePollImpl(CfgGeofencePollImpl&&) = delete;
    virtual ~CfgGeofencePollImpl() = default;
    CfgGeofencePollImpl& operator=(const CfgGeofencePollImpl&) = default;
    CfgGeofencePollImpl& operator=(CfgGeofencePollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgGeofencePoll::CfgGeofencePoll() : m_pImpl(new CfgGeofencePollImpl) {}
CfgGeofencePoll::~CfgGeofencePoll() = default;

CfgGeofencePoll& CfgGeofencePoll::operator=(const CfgGeofencePoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgGeofencePoll& CfgGeofencePoll::operator=(CfgGeofencePoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgGeofencePoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgGeofencePoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgGeofencePoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgGeofencePoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgGeofencePoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgGeofencePoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgGeofencePoll::MsgIdParamType CfgGeofencePoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgGeofencePoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgGeofencePoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgGeofencePoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgGeofencePoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgGeofencePoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


