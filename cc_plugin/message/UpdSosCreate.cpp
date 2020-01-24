// Generated by commsdsl2comms v3.3.1

#include "UpdSosCreate.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/UpdSosCreate.h"
#include "cc_plugin/field/Res3.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_cmd()
{
    using Field = ublox::message::UpdSosCreateFields<>::Cmd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::UpdSosCreateFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_cmd());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class UpdSosCreateImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::UpdSosCreate<ublox::cc_plugin::Message>,
        UpdSosCreateImpl
    >
{
public:
    UpdSosCreateImpl() = default;
    UpdSosCreateImpl(const UpdSosCreateImpl&) = delete;
    UpdSosCreateImpl(UpdSosCreateImpl&&) = delete;
    virtual ~UpdSosCreateImpl() = default;
    UpdSosCreateImpl& operator=(const UpdSosCreateImpl&) = default;
    UpdSosCreateImpl& operator=(UpdSosCreateImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

UpdSosCreate::UpdSosCreate() : m_pImpl(new UpdSosCreateImpl) {}
UpdSosCreate::~UpdSosCreate() = default;

UpdSosCreate& UpdSosCreate::operator=(const UpdSosCreate& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

UpdSosCreate& UpdSosCreate::operator=(UpdSosCreate&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* UpdSosCreate::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& UpdSosCreate::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void UpdSosCreate::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void UpdSosCreate::resetImpl()
{
    m_pImpl->reset();
}

bool UpdSosCreate::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const UpdSosCreate*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

UpdSosCreate::MsgIdParamType UpdSosCreate::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus UpdSosCreate::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus UpdSosCreate::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool UpdSosCreate::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t UpdSosCreate::lengthImpl() const
{
    return m_pImpl->length();
}

bool UpdSosCreate::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


