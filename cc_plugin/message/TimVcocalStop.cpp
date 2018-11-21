#include "TimVcocalStop.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimVcocalStop.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_type()
{
    using Field = ublox::message::TimVcocalStopFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    return props;
}

} // namespace

class TimVcocalStopImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimVcocalStop<ublox::cc_plugin::Message>,
        TimVcocalStopImpl
    >
{
public:
    TimVcocalStopImpl() = default;
    TimVcocalStopImpl(const TimVcocalStopImpl&) = delete;
    TimVcocalStopImpl(TimVcocalStopImpl&&) = delete;
    virtual ~TimVcocalStopImpl() = default;
    TimVcocalStopImpl& operator=(const TimVcocalStopImpl&) = default;
    TimVcocalStopImpl& operator=(TimVcocalStopImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVcocalStop::TimVcocalStop() : m_pImpl(new TimVcocalStopImpl) {}
TimVcocalStop::~TimVcocalStop() = default;

TimVcocalStop& TimVcocalStop::operator=(const TimVcocalStop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVcocalStop& TimVcocalStop::operator=(TimVcocalStop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimVcocalStop::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVcocalStop::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVcocalStop::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVcocalStop::resetImpl()
{
    m_pImpl->reset();
}

bool TimVcocalStop::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVcocalStop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVcocalStop::MsgIdParamType TimVcocalStop::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVcocalStop::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVcocalStop::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVcocalStop::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVcocalStop::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVcocalStop::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


