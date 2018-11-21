#include "NavTimegalPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimegalPoll.h"
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

class NavTimegalPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimegalPoll<ublox::cc_plugin::Message>,
        NavTimegalPollImpl
    >
{
public:
    NavTimegalPollImpl() = default;
    NavTimegalPollImpl(const NavTimegalPollImpl&) = delete;
    NavTimegalPollImpl(NavTimegalPollImpl&&) = delete;
    virtual ~NavTimegalPollImpl() = default;
    NavTimegalPollImpl& operator=(const NavTimegalPollImpl&) = default;
    NavTimegalPollImpl& operator=(NavTimegalPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimegalPoll::NavTimegalPoll() : m_pImpl(new NavTimegalPollImpl) {}
NavTimegalPoll::~NavTimegalPoll() = default;

NavTimegalPoll& NavTimegalPoll::operator=(const NavTimegalPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimegalPoll& NavTimegalPoll::operator=(NavTimegalPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimegalPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimegalPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimegalPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimegalPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimegalPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimegalPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimegalPoll::MsgIdParamType NavTimegalPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimegalPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimegalPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimegalPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimegalPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimegalPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


