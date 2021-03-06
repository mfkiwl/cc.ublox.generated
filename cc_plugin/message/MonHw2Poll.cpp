// Generated by commsdsl2comms v3.5.0

#include "MonHw2Poll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonHw2Poll.h"
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

class MonHw2PollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonHw2Poll<ublox::cc_plugin::Message>,
        MonHw2PollImpl
    >
{
public:
    MonHw2PollImpl() = default;
    MonHw2PollImpl(const MonHw2PollImpl&) = delete;
    MonHw2PollImpl(MonHw2PollImpl&&) = delete;
    virtual ~MonHw2PollImpl() = default;
    MonHw2PollImpl& operator=(const MonHw2PollImpl&) = default;
    MonHw2PollImpl& operator=(MonHw2PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonHw2Poll::MonHw2Poll() : m_pImpl(new MonHw2PollImpl) {}
MonHw2Poll::~MonHw2Poll() = default;

MonHw2Poll& MonHw2Poll::operator=(const MonHw2Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonHw2Poll& MonHw2Poll::operator=(MonHw2Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonHw2Poll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonHw2Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonHw2Poll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonHw2Poll::resetImpl()
{
    m_pImpl->reset();
}

bool MonHw2Poll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonHw2Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonHw2Poll::MsgIdParamType MonHw2Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonHw2Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonHw2Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonHw2Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonHw2Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonHw2Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


