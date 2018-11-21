#include "CfgTp5Poll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTp5Poll.h"
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

class CfgTp5PollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTp5Poll<ublox::cc_plugin::Message>,
        CfgTp5PollImpl
    >
{
public:
    CfgTp5PollImpl() = default;
    CfgTp5PollImpl(const CfgTp5PollImpl&) = delete;
    CfgTp5PollImpl(CfgTp5PollImpl&&) = delete;
    virtual ~CfgTp5PollImpl() = default;
    CfgTp5PollImpl& operator=(const CfgTp5PollImpl&) = default;
    CfgTp5PollImpl& operator=(CfgTp5PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTp5Poll::CfgTp5Poll() : m_pImpl(new CfgTp5PollImpl) {}
CfgTp5Poll::~CfgTp5Poll() = default;

CfgTp5Poll& CfgTp5Poll::operator=(const CfgTp5Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTp5Poll& CfgTp5Poll::operator=(CfgTp5Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTp5Poll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTp5Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTp5Poll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTp5Poll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTp5Poll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTp5Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTp5Poll::MsgIdParamType CfgTp5Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTp5Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTp5Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTp5Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTp5Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTp5Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


