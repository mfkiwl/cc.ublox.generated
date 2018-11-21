#include "AidIniPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidIniPoll.h"
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

class AidIniPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidIniPoll<ublox::cc_plugin::Message>,
        AidIniPollImpl
    >
{
public:
    AidIniPollImpl() = default;
    AidIniPollImpl(const AidIniPollImpl&) = delete;
    AidIniPollImpl(AidIniPollImpl&&) = delete;
    virtual ~AidIniPollImpl() = default;
    AidIniPollImpl& operator=(const AidIniPollImpl&) = default;
    AidIniPollImpl& operator=(AidIniPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidIniPoll::AidIniPoll() : m_pImpl(new AidIniPollImpl) {}
AidIniPoll::~AidIniPoll() = default;

AidIniPoll& AidIniPoll::operator=(const AidIniPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidIniPoll& AidIniPoll::operator=(AidIniPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidIniPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidIniPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidIniPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidIniPoll::resetImpl()
{
    m_pImpl->reset();
}

bool AidIniPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidIniPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidIniPoll::MsgIdParamType AidIniPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidIniPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidIniPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidIniPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidIniPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidIniPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


