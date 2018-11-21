#include "CfgNav5Poll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNav5Poll.h"
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

class CfgNav5PollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNav5Poll<ublox::cc_plugin::Message>,
        CfgNav5PollImpl
    >
{
public:
    CfgNav5PollImpl() = default;
    CfgNav5PollImpl(const CfgNav5PollImpl&) = delete;
    CfgNav5PollImpl(CfgNav5PollImpl&&) = delete;
    virtual ~CfgNav5PollImpl() = default;
    CfgNav5PollImpl& operator=(const CfgNav5PollImpl&) = default;
    CfgNav5PollImpl& operator=(CfgNav5PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNav5Poll::CfgNav5Poll() : m_pImpl(new CfgNav5PollImpl) {}
CfgNav5Poll::~CfgNav5Poll() = default;

CfgNav5Poll& CfgNav5Poll::operator=(const CfgNav5Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNav5Poll& CfgNav5Poll::operator=(CfgNav5Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNav5Poll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNav5Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNav5Poll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNav5Poll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNav5Poll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNav5Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNav5Poll::MsgIdParamType CfgNav5Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNav5Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNav5Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNav5Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNav5Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNav5Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


