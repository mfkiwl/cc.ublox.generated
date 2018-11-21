#include "NavAttPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavAttPoll.h"
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

class NavAttPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavAttPoll<ublox::cc_plugin::Message>,
        NavAttPollImpl
    >
{
public:
    NavAttPollImpl() = default;
    NavAttPollImpl(const NavAttPollImpl&) = delete;
    NavAttPollImpl(NavAttPollImpl&&) = delete;
    virtual ~NavAttPollImpl() = default;
    NavAttPollImpl& operator=(const NavAttPollImpl&) = default;
    NavAttPollImpl& operator=(NavAttPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAttPoll::NavAttPoll() : m_pImpl(new NavAttPollImpl) {}
NavAttPoll::~NavAttPoll() = default;

NavAttPoll& NavAttPoll::operator=(const NavAttPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAttPoll& NavAttPoll::operator=(NavAttPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavAttPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAttPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAttPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAttPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavAttPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAttPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAttPoll::MsgIdParamType NavAttPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAttPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAttPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAttPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAttPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAttPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


