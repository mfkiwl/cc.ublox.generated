#include "CfgNmeaPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgNmeaPoll.h"
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

class CfgNmeaPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgNmeaPoll<ublox::cc_plugin::Message>,
        CfgNmeaPollImpl
    >
{
public:
    CfgNmeaPollImpl() = default;
    CfgNmeaPollImpl(const CfgNmeaPollImpl&) = delete;
    CfgNmeaPollImpl(CfgNmeaPollImpl&&) = delete;
    virtual ~CfgNmeaPollImpl() = default;
    CfgNmeaPollImpl& operator=(const CfgNmeaPollImpl&) = default;
    CfgNmeaPollImpl& operator=(CfgNmeaPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNmeaPoll::CfgNmeaPoll() : m_pImpl(new CfgNmeaPollImpl) {}
CfgNmeaPoll::~CfgNmeaPoll() = default;

CfgNmeaPoll& CfgNmeaPoll::operator=(const CfgNmeaPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaPoll& CfgNmeaPoll::operator=(CfgNmeaPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgNmeaPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNmeaPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNmeaPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNmeaPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNmeaPoll::MsgIdParamType CfgNmeaPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNmeaPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNmeaPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNmeaPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNmeaPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNmeaPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


