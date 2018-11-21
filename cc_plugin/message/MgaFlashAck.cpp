#include "MgaFlashAck.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaFlashAck.h"
#include "cc_plugin/field/Res1.h"

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
    using Field = ublox::message::MgaFlashAckFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaFlashAckFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_ack()
{
    using Field = ublox::message::MgaFlashAckFields<>::Ack;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Ack", 0)
            .add("NakRetransmit", 1)
            .add("NakGiveUp", 2)
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaFlashAckFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_sequence()
{
    using Field = ublox::message::MgaFlashAckFields<>::Sequence;
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
    props.append(createProps_ack());
    props.append(createProps_reserved1());
    props.append(createProps_sequence());
    return props;
}

} // namespace

class MgaFlashAckImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaFlashAck<ublox::cc_plugin::Message>,
        MgaFlashAckImpl
    >
{
public:
    MgaFlashAckImpl() = default;
    MgaFlashAckImpl(const MgaFlashAckImpl&) = delete;
    MgaFlashAckImpl(MgaFlashAckImpl&&) = delete;
    virtual ~MgaFlashAckImpl() = default;
    MgaFlashAckImpl& operator=(const MgaFlashAckImpl&) = default;
    MgaFlashAckImpl& operator=(MgaFlashAckImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaFlashAck::MgaFlashAck() : m_pImpl(new MgaFlashAckImpl) {}
MgaFlashAck::~MgaFlashAck() = default;

MgaFlashAck& MgaFlashAck::operator=(const MgaFlashAck& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaFlashAck& MgaFlashAck::operator=(MgaFlashAck&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaFlashAck::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaFlashAck::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaFlashAck::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaFlashAck::resetImpl()
{
    m_pImpl->reset();
}

bool MgaFlashAck::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaFlashAck*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaFlashAck::MsgIdParamType MgaFlashAck::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaFlashAck::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaFlashAck::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaFlashAck::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaFlashAck::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaFlashAck::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


