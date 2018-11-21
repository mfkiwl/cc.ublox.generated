#include "CfgSmgrPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgSmgrPoll.h"
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

class CfgSmgrPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgSmgrPoll<ublox::cc_plugin::Message>,
        CfgSmgrPollImpl
    >
{
public:
    CfgSmgrPollImpl() = default;
    CfgSmgrPollImpl(const CfgSmgrPollImpl&) = delete;
    CfgSmgrPollImpl(CfgSmgrPollImpl&&) = delete;
    virtual ~CfgSmgrPollImpl() = default;
    CfgSmgrPollImpl& operator=(const CfgSmgrPollImpl&) = default;
    CfgSmgrPollImpl& operator=(CfgSmgrPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgSmgrPoll::CfgSmgrPoll() : m_pImpl(new CfgSmgrPollImpl) {}
CfgSmgrPoll::~CfgSmgrPoll() = default;

CfgSmgrPoll& CfgSmgrPoll::operator=(const CfgSmgrPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgSmgrPoll& CfgSmgrPoll::operator=(CfgSmgrPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgSmgrPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgSmgrPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgSmgrPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgSmgrPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgSmgrPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgSmgrPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgSmgrPoll::MsgIdParamType CfgSmgrPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgSmgrPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgSmgrPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgSmgrPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgSmgrPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgSmgrPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


