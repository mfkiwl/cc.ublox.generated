#include "RxmImesPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmImesPoll.h"
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

class RxmImesPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmImesPoll<ublox::cc_plugin::Message>,
        RxmImesPollImpl
    >
{
public:
    RxmImesPollImpl() = default;
    RxmImesPollImpl(const RxmImesPollImpl&) = delete;
    RxmImesPollImpl(RxmImesPollImpl&&) = delete;
    virtual ~RxmImesPollImpl() = default;
    RxmImesPollImpl& operator=(const RxmImesPollImpl&) = default;
    RxmImesPollImpl& operator=(RxmImesPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmImesPoll::RxmImesPoll() : m_pImpl(new RxmImesPollImpl) {}
RxmImesPoll::~RxmImesPoll() = default;

RxmImesPoll& RxmImesPoll::operator=(const RxmImesPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmImesPoll& RxmImesPoll::operator=(RxmImesPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmImesPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmImesPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmImesPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmImesPoll::resetImpl()
{
    m_pImpl->reset();
}

bool RxmImesPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmImesPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmImesPoll::MsgIdParamType RxmImesPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmImesPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmImesPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmImesPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmImesPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmImesPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


