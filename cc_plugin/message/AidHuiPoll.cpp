#include "AidHuiPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidHuiPoll.h"
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

class AidHuiPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidHuiPoll<ublox::cc_plugin::Message>,
        AidHuiPollImpl
    >
{
public:
    AidHuiPollImpl() = default;
    AidHuiPollImpl(const AidHuiPollImpl&) = delete;
    AidHuiPollImpl(AidHuiPollImpl&&) = delete;
    virtual ~AidHuiPollImpl() = default;
    AidHuiPollImpl& operator=(const AidHuiPollImpl&) = default;
    AidHuiPollImpl& operator=(AidHuiPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidHuiPoll::AidHuiPoll() : m_pImpl(new AidHuiPollImpl) {}
AidHuiPoll::~AidHuiPoll() = default;

AidHuiPoll& AidHuiPoll::operator=(const AidHuiPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidHuiPoll& AidHuiPoll::operator=(AidHuiPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidHuiPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidHuiPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidHuiPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidHuiPoll::resetImpl()
{
    m_pImpl->reset();
}

bool AidHuiPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidHuiPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidHuiPoll::MsgIdParamType AidHuiPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidHuiPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidHuiPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidHuiPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidHuiPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidHuiPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


