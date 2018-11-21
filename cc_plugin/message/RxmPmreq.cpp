#include "RxmPmreq.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmPmreq.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_duration()
{
    using Field = ublox::message::RxmPmreqFields<>::Duration;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_flags()
{
    using Field = ublox::message::RxmPmreqFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(1U, "backup")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_duration());
    props.append(createProps_flags());
    return props;
}

} // namespace

class RxmPmreqImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmPmreq<ublox::cc_plugin::Message>,
        RxmPmreqImpl
    >
{
public:
    RxmPmreqImpl() = default;
    RxmPmreqImpl(const RxmPmreqImpl&) = delete;
    RxmPmreqImpl(RxmPmreqImpl&&) = delete;
    virtual ~RxmPmreqImpl() = default;
    RxmPmreqImpl& operator=(const RxmPmreqImpl&) = default;
    RxmPmreqImpl& operator=(RxmPmreqImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmPmreq::RxmPmreq() : m_pImpl(new RxmPmreqImpl) {}
RxmPmreq::~RxmPmreq() = default;

RxmPmreq& RxmPmreq::operator=(const RxmPmreq& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmPmreq& RxmPmreq::operator=(RxmPmreq&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmPmreq::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmPmreq::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmPmreq::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmPmreq::resetImpl()
{
    m_pImpl->reset();
}

bool RxmPmreq::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmPmreq*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmPmreq::MsgIdParamType RxmPmreq::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmPmreq::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmPmreq::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmPmreq::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmPmreq::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmPmreq::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


