#include "NavSvinPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSvinPoll.h"
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

class NavSvinPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSvinPoll<ublox::cc_plugin::Message>,
        NavSvinPollImpl
    >
{
public:
    NavSvinPollImpl() = default;
    NavSvinPollImpl(const NavSvinPollImpl&) = delete;
    NavSvinPollImpl(NavSvinPollImpl&&) = delete;
    virtual ~NavSvinPollImpl() = default;
    NavSvinPollImpl& operator=(const NavSvinPollImpl&) = default;
    NavSvinPollImpl& operator=(NavSvinPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSvinPoll::NavSvinPoll() : m_pImpl(new NavSvinPollImpl) {}
NavSvinPoll::~NavSvinPoll() = default;

NavSvinPoll& NavSvinPoll::operator=(const NavSvinPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvinPoll& NavSvinPoll::operator=(NavSvinPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSvinPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSvinPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSvinPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSvinPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvinPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSvinPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSvinPoll::MsgIdParamType NavSvinPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSvinPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSvinPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSvinPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSvinPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSvinPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


