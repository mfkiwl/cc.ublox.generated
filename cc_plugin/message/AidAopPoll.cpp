#include "AidAopPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAopPoll.h"
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

class AidAopPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAopPoll<ublox::cc_plugin::Message>,
        AidAopPollImpl
    >
{
public:
    AidAopPollImpl() = default;
    AidAopPollImpl(const AidAopPollImpl&) = delete;
    AidAopPollImpl(AidAopPollImpl&&) = delete;
    virtual ~AidAopPollImpl() = default;
    AidAopPollImpl& operator=(const AidAopPollImpl&) = default;
    AidAopPollImpl& operator=(AidAopPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAopPoll::AidAopPoll() : m_pImpl(new AidAopPollImpl) {}
AidAopPoll::~AidAopPoll() = default;

AidAopPoll& AidAopPoll::operator=(const AidAopPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAopPoll& AidAopPoll::operator=(AidAopPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAopPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAopPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAopPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAopPoll::resetImpl()
{
    m_pImpl->reset();
}

bool AidAopPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAopPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAopPoll::MsgIdParamType AidAopPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAopPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAopPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAopPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAopPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAopPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


