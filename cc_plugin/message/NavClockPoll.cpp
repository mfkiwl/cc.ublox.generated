#include "NavClockPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavClockPoll.h"
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

class NavClockPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavClockPoll<ublox::cc_plugin::Message>,
        NavClockPollImpl
    >
{
public:
    NavClockPollImpl() = default;
    NavClockPollImpl(const NavClockPollImpl&) = delete;
    NavClockPollImpl(NavClockPollImpl&&) = delete;
    virtual ~NavClockPollImpl() = default;
    NavClockPollImpl& operator=(const NavClockPollImpl&) = default;
    NavClockPollImpl& operator=(NavClockPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavClockPoll::NavClockPoll() : m_pImpl(new NavClockPollImpl) {}
NavClockPoll::~NavClockPoll() = default;

NavClockPoll& NavClockPoll::operator=(const NavClockPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavClockPoll& NavClockPoll::operator=(NavClockPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavClockPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavClockPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavClockPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavClockPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavClockPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavClockPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavClockPoll::MsgIdParamType NavClockPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavClockPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavClockPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavClockPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavClockPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavClockPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


