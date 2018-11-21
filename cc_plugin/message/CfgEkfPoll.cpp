#include "CfgEkfPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgEkfPoll.h"
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

class CfgEkfPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgEkfPoll<ublox::cc_plugin::Message>,
        CfgEkfPollImpl
    >
{
public:
    CfgEkfPollImpl() = default;
    CfgEkfPollImpl(const CfgEkfPollImpl&) = delete;
    CfgEkfPollImpl(CfgEkfPollImpl&&) = delete;
    virtual ~CfgEkfPollImpl() = default;
    CfgEkfPollImpl& operator=(const CfgEkfPollImpl&) = default;
    CfgEkfPollImpl& operator=(CfgEkfPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgEkfPoll::CfgEkfPoll() : m_pImpl(new CfgEkfPollImpl) {}
CfgEkfPoll::~CfgEkfPoll() = default;

CfgEkfPoll& CfgEkfPoll::operator=(const CfgEkfPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgEkfPoll& CfgEkfPoll::operator=(CfgEkfPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgEkfPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgEkfPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgEkfPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgEkfPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgEkfPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgEkfPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgEkfPoll::MsgIdParamType CfgEkfPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgEkfPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgEkfPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgEkfPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgEkfPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgEkfPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


