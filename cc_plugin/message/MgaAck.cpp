#include "MgaAck.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaAck.h"
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
    using Field = ublox::message::MgaAckFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("NotUsed", 0)
            .add("Accepted", 1)
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaAckFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_infoCode()
{
    using Field = ublox::message::MgaAckFields<>::InfoCode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Accepted", 0)
            .add("TimeNotKnown", 1)
            .add("BadVersion", 2)
            .add("BadSize", 3)
            .add("StorageError", 4)
            .add("NotReady", 5)
            .add("UnknownType", 6)
            .asMap();
    
}

static QVariantMap createProps_msgId()
{
    using Field = ublox::message::MgaAckFields<>::MsgId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_msgPayloadStart()
{
    using Field = ublox::message::MgaAckFields<>::MsgPayloadStart;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_infoCode());
    props.append(createProps_msgId());
    props.append(createProps_msgPayloadStart());
    return props;
}

} // namespace

class MgaAckImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaAck<ublox::cc_plugin::Message>,
        MgaAckImpl
    >
{
public:
    MgaAckImpl() = default;
    MgaAckImpl(const MgaAckImpl&) = delete;
    MgaAckImpl(MgaAckImpl&&) = delete;
    virtual ~MgaAckImpl() = default;
    MgaAckImpl& operator=(const MgaAckImpl&) = default;
    MgaAckImpl& operator=(MgaAckImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaAck::MgaAck() : m_pImpl(new MgaAckImpl) {}
MgaAck::~MgaAck() = default;

MgaAck& MgaAck::operator=(const MgaAck& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaAck& MgaAck::operator=(MgaAck&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaAck::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaAck::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaAck::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaAck::resetImpl()
{
    m_pImpl->reset();
}

bool MgaAck::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaAck*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaAck::MsgIdParamType MgaAck::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaAck::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaAck::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaAck::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaAck::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaAck::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


