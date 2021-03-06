// Generated by commsdsl2comms v3.5.0

#include "MgaDbdPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaDbdPoll.h"
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

class MgaDbdPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaDbdPoll<ublox::cc_plugin::Message>,
        MgaDbdPollImpl
    >
{
public:
    MgaDbdPollImpl() = default;
    MgaDbdPollImpl(const MgaDbdPollImpl&) = delete;
    MgaDbdPollImpl(MgaDbdPollImpl&&) = delete;
    virtual ~MgaDbdPollImpl() = default;
    MgaDbdPollImpl& operator=(const MgaDbdPollImpl&) = default;
    MgaDbdPollImpl& operator=(MgaDbdPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaDbdPoll::MgaDbdPoll() : m_pImpl(new MgaDbdPollImpl) {}
MgaDbdPoll::~MgaDbdPoll() = default;

MgaDbdPoll& MgaDbdPoll::operator=(const MgaDbdPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaDbdPoll& MgaDbdPoll::operator=(MgaDbdPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaDbdPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaDbdPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaDbdPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaDbdPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MgaDbdPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaDbdPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaDbdPoll::MsgIdParamType MgaDbdPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaDbdPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaDbdPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaDbdPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaDbdPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaDbdPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


