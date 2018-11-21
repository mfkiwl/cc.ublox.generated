#include "AidAlmPollSv.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAlmPollSv.h"
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
    using Field = ublox::message::AidAlmPollSvFields<>::Svid;
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

class AidAlmPollSvImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAlmPollSv<ublox::cc_plugin::Message>,
        AidAlmPollSvImpl
    >
{
public:
    AidAlmPollSvImpl() = default;
    AidAlmPollSvImpl(const AidAlmPollSvImpl&) = delete;
    AidAlmPollSvImpl(AidAlmPollSvImpl&&) = delete;
    virtual ~AidAlmPollSvImpl() = default;
    AidAlmPollSvImpl& operator=(const AidAlmPollSvImpl&) = default;
    AidAlmPollSvImpl& operator=(AidAlmPollSvImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlmPollSv::AidAlmPollSv() : m_pImpl(new AidAlmPollSvImpl) {}
AidAlmPollSv::~AidAlmPollSv() = default;

AidAlmPollSv& AidAlmPollSv::operator=(const AidAlmPollSv& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlmPollSv& AidAlmPollSv::operator=(AidAlmPollSv&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAlmPollSv::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlmPollSv::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlmPollSv::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlmPollSv::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlmPollSv::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlmPollSv*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlmPollSv::MsgIdParamType AidAlmPollSv::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlmPollSv::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlmPollSv::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlmPollSv::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlmPollSv::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlmPollSv::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


