#include "CfgGnssPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgGnssPoll.h"
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

class CfgGnssPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgGnssPoll<ublox::cc_plugin::Message>,
        CfgGnssPollImpl
    >
{
public:
    CfgGnssPollImpl() = default;
    CfgGnssPollImpl(const CfgGnssPollImpl&) = delete;
    CfgGnssPollImpl(CfgGnssPollImpl&&) = delete;
    virtual ~CfgGnssPollImpl() = default;
    CfgGnssPollImpl& operator=(const CfgGnssPollImpl&) = default;
    CfgGnssPollImpl& operator=(CfgGnssPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgGnssPoll::CfgGnssPoll() : m_pImpl(new CfgGnssPollImpl) {}
CfgGnssPoll::~CfgGnssPoll() = default;

CfgGnssPoll& CfgGnssPoll::operator=(const CfgGnssPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgGnssPoll& CfgGnssPoll::operator=(CfgGnssPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgGnssPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgGnssPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgGnssPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgGnssPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgGnssPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgGnssPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgGnssPoll::MsgIdParamType CfgGnssPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgGnssPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgGnssPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgGnssPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgGnssPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgGnssPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


