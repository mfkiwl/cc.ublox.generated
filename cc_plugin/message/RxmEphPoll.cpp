// Generated by commsdsl2comms v3.3.3

#include "RxmEphPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmEphPoll.h"
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

class RxmEphPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmEphPoll<ublox::cc_plugin::Message>,
        RxmEphPollImpl
    >
{
public:
    RxmEphPollImpl() = default;
    RxmEphPollImpl(const RxmEphPollImpl&) = delete;
    RxmEphPollImpl(RxmEphPollImpl&&) = delete;
    virtual ~RxmEphPollImpl() = default;
    RxmEphPollImpl& operator=(const RxmEphPollImpl&) = default;
    RxmEphPollImpl& operator=(RxmEphPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmEphPoll::RxmEphPoll() : m_pImpl(new RxmEphPollImpl) {}
RxmEphPoll::~RxmEphPoll() = default;

RxmEphPoll& RxmEphPoll::operator=(const RxmEphPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmEphPoll& RxmEphPoll::operator=(RxmEphPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmEphPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmEphPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmEphPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmEphPoll::resetImpl()
{
    m_pImpl->reset();
}

bool RxmEphPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmEphPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmEphPoll::MsgIdParamType RxmEphPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmEphPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmEphPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmEphPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmEphPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmEphPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


