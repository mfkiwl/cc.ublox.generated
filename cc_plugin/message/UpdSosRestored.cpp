#include "UpdSosRestored.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/UpdSosRestored.h"
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
    using Field = ublox::message::UpdSosRestoredFields<>::Cmd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::UpdSosRestoredFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_response()
{
    using Field = ublox::message::UpdSosRestoredFields<>::Response;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Unknown", 0)
            .add("Failed", 1)
            .add("Restored", 2)
            .add("NotRestored", 3)
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::UpdSosRestoredFields<>::Reserved2;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_cmd());
    props.append(createProps_reserved1());
    props.append(createProps_response());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class UpdSosRestoredImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::UpdSosRestored<ublox::cc_plugin::Message>,
        UpdSosRestoredImpl
    >
{
public:
    UpdSosRestoredImpl() = default;
    UpdSosRestoredImpl(const UpdSosRestoredImpl&) = delete;
    UpdSosRestoredImpl(UpdSosRestoredImpl&&) = delete;
    virtual ~UpdSosRestoredImpl() = default;
    UpdSosRestoredImpl& operator=(const UpdSosRestoredImpl&) = default;
    UpdSosRestoredImpl& operator=(UpdSosRestoredImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

UpdSosRestored::UpdSosRestored() : m_pImpl(new UpdSosRestoredImpl) {}
UpdSosRestored::~UpdSosRestored() = default;

UpdSosRestored& UpdSosRestored::operator=(const UpdSosRestored& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

UpdSosRestored& UpdSosRestored::operator=(UpdSosRestored&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* UpdSosRestored::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& UpdSosRestored::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void UpdSosRestored::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void UpdSosRestored::resetImpl()
{
    m_pImpl->reset();
}

bool UpdSosRestored::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const UpdSosRestored*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

UpdSosRestored::MsgIdParamType UpdSosRestored::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus UpdSosRestored::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus UpdSosRestored::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool UpdSosRestored::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t UpdSosRestored::lengthImpl() const
{
    return m_pImpl->length();
}

bool UpdSosRestored::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


