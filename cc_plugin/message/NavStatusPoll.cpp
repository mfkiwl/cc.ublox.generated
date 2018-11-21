#include "NavStatusPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavStatusPoll.h"
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

class NavStatusPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavStatusPoll<ublox::cc_plugin::Message>,
        NavStatusPollImpl
    >
{
public:
    NavStatusPollImpl() = default;
    NavStatusPollImpl(const NavStatusPollImpl&) = delete;
    NavStatusPollImpl(NavStatusPollImpl&&) = delete;
    virtual ~NavStatusPollImpl() = default;
    NavStatusPollImpl& operator=(const NavStatusPollImpl&) = default;
    NavStatusPollImpl& operator=(NavStatusPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavStatusPoll::NavStatusPoll() : m_pImpl(new NavStatusPollImpl) {}
NavStatusPoll::~NavStatusPoll() = default;

NavStatusPoll& NavStatusPoll::operator=(const NavStatusPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavStatusPoll& NavStatusPoll::operator=(NavStatusPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavStatusPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavStatusPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavStatusPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavStatusPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavStatusPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavStatusPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavStatusPoll::MsgIdParamType NavStatusPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavStatusPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavStatusPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavStatusPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavStatusPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavStatusPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


