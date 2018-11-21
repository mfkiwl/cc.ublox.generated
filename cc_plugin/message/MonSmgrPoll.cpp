#include "MonSmgrPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonSmgrPoll.h"
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

class MonSmgrPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonSmgrPoll<ublox::cc_plugin::Message>,
        MonSmgrPollImpl
    >
{
public:
    MonSmgrPollImpl() = default;
    MonSmgrPollImpl(const MonSmgrPollImpl&) = delete;
    MonSmgrPollImpl(MonSmgrPollImpl&&) = delete;
    virtual ~MonSmgrPollImpl() = default;
    MonSmgrPollImpl& operator=(const MonSmgrPollImpl&) = default;
    MonSmgrPollImpl& operator=(MonSmgrPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonSmgrPoll::MonSmgrPoll() : m_pImpl(new MonSmgrPollImpl) {}
MonSmgrPoll::~MonSmgrPoll() = default;

MonSmgrPoll& MonSmgrPoll::operator=(const MonSmgrPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonSmgrPoll& MonSmgrPoll::operator=(MonSmgrPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonSmgrPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonSmgrPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonSmgrPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonSmgrPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonSmgrPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonSmgrPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonSmgrPoll::MsgIdParamType MonSmgrPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonSmgrPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonSmgrPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonSmgrPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonSmgrPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonSmgrPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


