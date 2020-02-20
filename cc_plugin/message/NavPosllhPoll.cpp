// Generated by commsdsl2comms v3.3.2

#include "NavPosllhPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavPosllhPoll.h"
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

class NavPosllhPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavPosllhPoll<ublox::cc_plugin::Message>,
        NavPosllhPollImpl
    >
{
public:
    NavPosllhPollImpl() = default;
    NavPosllhPollImpl(const NavPosllhPollImpl&) = delete;
    NavPosllhPollImpl(NavPosllhPollImpl&&) = delete;
    virtual ~NavPosllhPollImpl() = default;
    NavPosllhPollImpl& operator=(const NavPosllhPollImpl&) = default;
    NavPosllhPollImpl& operator=(NavPosllhPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPosllhPoll::NavPosllhPoll() : m_pImpl(new NavPosllhPollImpl) {}
NavPosllhPoll::~NavPosllhPoll() = default;

NavPosllhPoll& NavPosllhPoll::operator=(const NavPosllhPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPosllhPoll& NavPosllhPoll::operator=(NavPosllhPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavPosllhPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPosllhPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPosllhPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPosllhPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavPosllhPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPosllhPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPosllhPoll::MsgIdParamType NavPosllhPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPosllhPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPosllhPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPosllhPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPosllhPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPosllhPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


