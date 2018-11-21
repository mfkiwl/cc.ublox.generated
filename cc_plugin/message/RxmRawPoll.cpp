#include "RxmRawPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmRawPoll.h"
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

class RxmRawPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmRawPoll<ublox::cc_plugin::Message>,
        RxmRawPollImpl
    >
{
public:
    RxmRawPollImpl() = default;
    RxmRawPollImpl(const RxmRawPollImpl&) = delete;
    RxmRawPollImpl(RxmRawPollImpl&&) = delete;
    virtual ~RxmRawPollImpl() = default;
    RxmRawPollImpl& operator=(const RxmRawPollImpl&) = default;
    RxmRawPollImpl& operator=(RxmRawPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmRawPoll::RxmRawPoll() : m_pImpl(new RxmRawPollImpl) {}
RxmRawPoll::~RxmRawPoll() = default;

RxmRawPoll& RxmRawPoll::operator=(const RxmRawPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRawPoll& RxmRawPoll::operator=(RxmRawPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmRawPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmRawPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmRawPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmRawPoll::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRawPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmRawPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmRawPoll::MsgIdParamType RxmRawPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmRawPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmRawPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmRawPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmRawPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmRawPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


