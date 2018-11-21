#include "RxmAlmPollSv.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmAlmPollSv.h"
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
    using Field = ublox::message::RxmAlmPollSvFields<>::Svid;
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

class RxmAlmPollSvImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmAlmPollSv<ublox::cc_plugin::Message>,
        RxmAlmPollSvImpl
    >
{
public:
    RxmAlmPollSvImpl() = default;
    RxmAlmPollSvImpl(const RxmAlmPollSvImpl&) = delete;
    RxmAlmPollSvImpl(RxmAlmPollSvImpl&&) = delete;
    virtual ~RxmAlmPollSvImpl() = default;
    RxmAlmPollSvImpl& operator=(const RxmAlmPollSvImpl&) = default;
    RxmAlmPollSvImpl& operator=(RxmAlmPollSvImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmAlmPollSv::RxmAlmPollSv() : m_pImpl(new RxmAlmPollSvImpl) {}
RxmAlmPollSv::~RxmAlmPollSv() = default;

RxmAlmPollSv& RxmAlmPollSv::operator=(const RxmAlmPollSv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmAlmPollSv& RxmAlmPollSv::operator=(RxmAlmPollSv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmAlmPollSv::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmAlmPollSv::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmAlmPollSv::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmAlmPollSv::resetImpl()
{
    m_pImpl->reset();
}

bool RxmAlmPollSv::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmAlmPollSv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmAlmPollSv::MsgIdParamType RxmAlmPollSv::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmAlmPollSv::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmAlmPollSv::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmAlmPollSv::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmAlmPollSv::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmAlmPollSv::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


