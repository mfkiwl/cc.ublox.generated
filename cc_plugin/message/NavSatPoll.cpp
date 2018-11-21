#include "NavSatPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSatPoll.h"
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

class NavSatPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSatPoll<ublox::cc_plugin::Message>,
        NavSatPollImpl
    >
{
public:
    NavSatPollImpl() = default;
    NavSatPollImpl(const NavSatPollImpl&) = delete;
    NavSatPollImpl(NavSatPollImpl&&) = delete;
    virtual ~NavSatPollImpl() = default;
    NavSatPollImpl& operator=(const NavSatPollImpl&) = default;
    NavSatPollImpl& operator=(NavSatPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSatPoll::NavSatPoll() : m_pImpl(new NavSatPollImpl) {}
NavSatPoll::~NavSatPoll() = default;

NavSatPoll& NavSatPoll::operator=(const NavSatPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSatPoll& NavSatPoll::operator=(NavSatPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSatPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSatPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSatPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSatPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavSatPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSatPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSatPoll::MsgIdParamType NavSatPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSatPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSatPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSatPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSatPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSatPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


