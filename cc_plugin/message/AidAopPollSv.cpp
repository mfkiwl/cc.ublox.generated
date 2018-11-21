#include "AidAopPollSv.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAopPollSv.h"
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
    using Field = ublox::message::AidAopPollSvFields<>::Svid;
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

class AidAopPollSvImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAopPollSv<ublox::cc_plugin::Message>,
        AidAopPollSvImpl
    >
{
public:
    AidAopPollSvImpl() = default;
    AidAopPollSvImpl(const AidAopPollSvImpl&) = delete;
    AidAopPollSvImpl(AidAopPollSvImpl&&) = delete;
    virtual ~AidAopPollSvImpl() = default;
    AidAopPollSvImpl& operator=(const AidAopPollSvImpl&) = default;
    AidAopPollSvImpl& operator=(AidAopPollSvImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAopPollSv::AidAopPollSv() : m_pImpl(new AidAopPollSvImpl) {}
AidAopPollSv::~AidAopPollSv() = default;

AidAopPollSv& AidAopPollSv::operator=(const AidAopPollSv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAopPollSv& AidAopPollSv::operator=(AidAopPollSv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAopPollSv::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAopPollSv::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAopPollSv::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAopPollSv::resetImpl()
{
    m_pImpl->reset();
}

bool AidAopPollSv::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAopPollSv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAopPollSv::MsgIdParamType AidAopPollSv::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAopPollSv::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAopPollSv::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAopPollSv::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAopPollSv::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAopPollSv::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


