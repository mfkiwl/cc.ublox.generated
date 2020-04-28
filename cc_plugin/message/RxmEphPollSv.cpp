// Generated by commsdsl2comms v3.4.0

#include "RxmEphPollSv.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmEphPollSv.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_svid()
{
    using Field = ublox::message::RxmEphPollSvFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid());
    return props;
}

} // namespace

class RxmEphPollSvImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmEphPollSv<ublox::cc_plugin::Message>,
        RxmEphPollSvImpl
    >
{
public:
    RxmEphPollSvImpl() = default;
    RxmEphPollSvImpl(const RxmEphPollSvImpl&) = delete;
    RxmEphPollSvImpl(RxmEphPollSvImpl&&) = delete;
    virtual ~RxmEphPollSvImpl() = default;
    RxmEphPollSvImpl& operator=(const RxmEphPollSvImpl&) = default;
    RxmEphPollSvImpl& operator=(RxmEphPollSvImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmEphPollSv::RxmEphPollSv() : m_pImpl(new RxmEphPollSvImpl) {}
RxmEphPollSv::~RxmEphPollSv() = default;

RxmEphPollSv& RxmEphPollSv::operator=(const RxmEphPollSv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmEphPollSv& RxmEphPollSv::operator=(RxmEphPollSv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmEphPollSv::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmEphPollSv::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmEphPollSv::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmEphPollSv::resetImpl()
{
    m_pImpl->reset();
}

bool RxmEphPollSv::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmEphPollSv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmEphPollSv::MsgIdParamType RxmEphPollSv::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmEphPollSv::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmEphPollSv::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmEphPollSv::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmEphPollSv::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmEphPollSv::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


