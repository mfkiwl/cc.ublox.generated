#include "InfError.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/InfError.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_str()
{
    using Field = ublox::message::InfErrorFields<>::Str;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_str());
    return props;
}

} // namespace

class InfErrorImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::InfError<ublox::cc_plugin::Message>,
        InfErrorImpl
    >
{
public:
    InfErrorImpl() = default;
    InfErrorImpl(const InfErrorImpl&) = delete;
    InfErrorImpl(InfErrorImpl&&) = delete;
    virtual ~InfErrorImpl() = default;
    InfErrorImpl& operator=(const InfErrorImpl&) = default;
    InfErrorImpl& operator=(InfErrorImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

InfError::InfError() : m_pImpl(new InfErrorImpl) {}
InfError::~InfError() = default;

InfError& InfError::operator=(const InfError& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

InfError& InfError::operator=(InfError&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* InfError::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& InfError::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void InfError::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void InfError::resetImpl()
{
    m_pImpl->reset();
}

bool InfError::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const InfError*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

InfError::MsgIdParamType InfError::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus InfError::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus InfError::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool InfError::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t InfError::lengthImpl() const
{
    return m_pImpl->length();
}

bool InfError::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


