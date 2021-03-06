// Generated by commsdsl2comms v3.5.0

#include "EsfMeasPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/EsfMeasPoll.h"
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

class EsfMeasPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::EsfMeasPoll<ublox::cc_plugin::Message>,
        EsfMeasPollImpl
    >
{
public:
    EsfMeasPollImpl() = default;
    EsfMeasPollImpl(const EsfMeasPollImpl&) = delete;
    EsfMeasPollImpl(EsfMeasPollImpl&&) = delete;
    virtual ~EsfMeasPollImpl() = default;
    EsfMeasPollImpl& operator=(const EsfMeasPollImpl&) = default;
    EsfMeasPollImpl& operator=(EsfMeasPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfMeasPoll::EsfMeasPoll() : m_pImpl(new EsfMeasPollImpl) {}
EsfMeasPoll::~EsfMeasPoll() = default;

EsfMeasPoll& EsfMeasPoll::operator=(const EsfMeasPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfMeasPoll& EsfMeasPoll::operator=(EsfMeasPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfMeasPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfMeasPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfMeasPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfMeasPoll::resetImpl()
{
    m_pImpl->reset();
}

bool EsfMeasPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfMeasPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfMeasPoll::MsgIdParamType EsfMeasPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfMeasPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfMeasPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfMeasPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfMeasPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfMeasPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


