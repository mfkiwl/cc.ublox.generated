#include "NavGeofencePoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavGeofencePoll.h"
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

class NavGeofencePollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavGeofencePoll<ublox::cc_plugin::Message>,
        NavGeofencePollImpl
    >
{
public:
    NavGeofencePollImpl() = default;
    NavGeofencePollImpl(const NavGeofencePollImpl&) = delete;
    NavGeofencePollImpl(NavGeofencePollImpl&&) = delete;
    virtual ~NavGeofencePollImpl() = default;
    NavGeofencePollImpl& operator=(const NavGeofencePollImpl&) = default;
    NavGeofencePollImpl& operator=(NavGeofencePollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavGeofencePoll::NavGeofencePoll() : m_pImpl(new NavGeofencePollImpl) {}
NavGeofencePoll::~NavGeofencePoll() = default;

NavGeofencePoll& NavGeofencePoll::operator=(const NavGeofencePoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavGeofencePoll& NavGeofencePoll::operator=(NavGeofencePoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavGeofencePoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavGeofencePoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavGeofencePoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavGeofencePoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavGeofencePoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavGeofencePoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavGeofencePoll::MsgIdParamType NavGeofencePoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavGeofencePoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavGeofencePoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavGeofencePoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavGeofencePoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavGeofencePoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


