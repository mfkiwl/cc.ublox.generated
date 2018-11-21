#include "MonRxbufPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonRxbufPoll.h"
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

class MonRxbufPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonRxbufPoll<ublox::cc_plugin::Message>,
        MonRxbufPollImpl
    >
{
public:
    MonRxbufPollImpl() = default;
    MonRxbufPollImpl(const MonRxbufPollImpl&) = delete;
    MonRxbufPollImpl(MonRxbufPollImpl&&) = delete;
    virtual ~MonRxbufPollImpl() = default;
    MonRxbufPollImpl& operator=(const MonRxbufPollImpl&) = default;
    MonRxbufPollImpl& operator=(MonRxbufPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonRxbufPoll::MonRxbufPoll() : m_pImpl(new MonRxbufPollImpl) {}
MonRxbufPoll::~MonRxbufPoll() = default;

MonRxbufPoll& MonRxbufPoll::operator=(const MonRxbufPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRxbufPoll& MonRxbufPoll::operator=(MonRxbufPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonRxbufPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonRxbufPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonRxbufPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonRxbufPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonRxbufPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonRxbufPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonRxbufPoll::MsgIdParamType MonRxbufPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonRxbufPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonRxbufPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonRxbufPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonRxbufPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonRxbufPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


