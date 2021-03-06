// Generated by commsdsl2comms v3.5.0

#include "UpdSosClear.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/UpdSosClear.h"
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
    using Field = ublox::message::UpdSosClearFields<>::Cmd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::UpdSosClearFields<>::Reserved1;
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

class UpdSosClearImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::UpdSosClear<ublox::cc_plugin::Message>,
        UpdSosClearImpl
    >
{
public:
    UpdSosClearImpl() = default;
    UpdSosClearImpl(const UpdSosClearImpl&) = delete;
    UpdSosClearImpl(UpdSosClearImpl&&) = delete;
    virtual ~UpdSosClearImpl() = default;
    UpdSosClearImpl& operator=(const UpdSosClearImpl&) = default;
    UpdSosClearImpl& operator=(UpdSosClearImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

UpdSosClear::UpdSosClear() : m_pImpl(new UpdSosClearImpl) {}
UpdSosClear::~UpdSosClear() = default;

UpdSosClear& UpdSosClear::operator=(const UpdSosClear& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

UpdSosClear& UpdSosClear::operator=(UpdSosClear&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* UpdSosClear::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& UpdSosClear::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void UpdSosClear::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void UpdSosClear::resetImpl()
{
    m_pImpl->reset();
}

bool UpdSosClear::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const UpdSosClear*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

UpdSosClear::MsgIdParamType UpdSosClear::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus UpdSosClear::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus UpdSosClear::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool UpdSosClear::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t UpdSosClear::lengthImpl() const
{
    return m_pImpl->length();
}

bool UpdSosClear::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


