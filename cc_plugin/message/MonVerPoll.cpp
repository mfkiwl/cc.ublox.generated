#include "MonVerPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonVerPoll.h"
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

class MonVerPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonVerPoll<ublox::cc_plugin::Message>,
        MonVerPollImpl
    >
{
public:
    MonVerPollImpl() = default;
    MonVerPollImpl(const MonVerPollImpl&) = delete;
    MonVerPollImpl(MonVerPollImpl&&) = delete;
    virtual ~MonVerPollImpl() = default;
    MonVerPollImpl& operator=(const MonVerPollImpl&) = default;
    MonVerPollImpl& operator=(MonVerPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonVerPoll::MonVerPoll() : m_pImpl(new MonVerPollImpl) {}
MonVerPoll::~MonVerPoll() = default;

MonVerPoll& MonVerPoll::operator=(const MonVerPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonVerPoll& MonVerPoll::operator=(MonVerPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonVerPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonVerPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonVerPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonVerPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonVerPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonVerPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonVerPoll::MsgIdParamType MonVerPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonVerPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonVerPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonVerPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonVerPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonVerPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


