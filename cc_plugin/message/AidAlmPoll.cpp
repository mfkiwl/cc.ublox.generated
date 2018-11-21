#include "AidAlmPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAlmPoll.h"
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

class AidAlmPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAlmPoll<ublox::cc_plugin::Message>,
        AidAlmPollImpl
    >
{
public:
    AidAlmPollImpl() = default;
    AidAlmPollImpl(const AidAlmPollImpl&) = delete;
    AidAlmPollImpl(AidAlmPollImpl&&) = delete;
    virtual ~AidAlmPollImpl() = default;
    AidAlmPollImpl& operator=(const AidAlmPollImpl&) = default;
    AidAlmPollImpl& operator=(AidAlmPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlmPoll::AidAlmPoll() : m_pImpl(new AidAlmPollImpl) {}
AidAlmPoll::~AidAlmPoll() = default;

AidAlmPoll& AidAlmPoll::operator=(const AidAlmPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlmPoll& AidAlmPoll::operator=(AidAlmPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlmPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlmPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlmPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlmPoll::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlmPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlmPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlmPoll::MsgIdParamType AidAlmPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlmPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlmPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlmPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlmPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlmPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


