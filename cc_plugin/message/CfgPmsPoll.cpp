#include "CfgPmsPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPmsPoll.h"
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

class CfgPmsPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPmsPoll<ublox::cc_plugin::Message>,
        CfgPmsPollImpl
    >
{
public:
    CfgPmsPollImpl() = default;
    CfgPmsPollImpl(const CfgPmsPollImpl&) = delete;
    CfgPmsPollImpl(CfgPmsPollImpl&&) = delete;
    virtual ~CfgPmsPollImpl() = default;
    CfgPmsPollImpl& operator=(const CfgPmsPollImpl&) = default;
    CfgPmsPollImpl& operator=(CfgPmsPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPmsPoll::CfgPmsPoll() : m_pImpl(new CfgPmsPollImpl) {}
CfgPmsPoll::~CfgPmsPoll() = default;

CfgPmsPoll& CfgPmsPoll::operator=(const CfgPmsPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPmsPoll& CfgPmsPoll::operator=(CfgPmsPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPmsPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPmsPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPmsPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPmsPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPmsPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPmsPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPmsPoll::MsgIdParamType CfgPmsPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPmsPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPmsPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPmsPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPmsPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPmsPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


