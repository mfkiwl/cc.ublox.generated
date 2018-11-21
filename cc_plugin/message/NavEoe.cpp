#include "NavEoe.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavEoe.h"
#include "cc_plugin/field/Itow.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavEoeFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    return props;
}

} // namespace

class NavEoeImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavEoe<ublox::cc_plugin::Message>,
        NavEoeImpl
    >
{
public:
    NavEoeImpl() = default;
    NavEoeImpl(const NavEoeImpl&) = delete;
    NavEoeImpl(NavEoeImpl&&) = delete;
    virtual ~NavEoeImpl() = default;
    NavEoeImpl& operator=(const NavEoeImpl&) = default;
    NavEoeImpl& operator=(NavEoeImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavEoe::NavEoe() : m_pImpl(new NavEoeImpl) {}
NavEoe::~NavEoe() = default;

NavEoe& NavEoe::operator=(const NavEoe& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavEoe& NavEoe::operator=(NavEoe&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavEoe::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavEoe::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavEoe::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavEoe::resetImpl()
{
    m_pImpl->reset();
}

bool NavEoe::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavEoe*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavEoe::MsgIdParamType NavEoe::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavEoe::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavEoe::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavEoe::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavEoe::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavEoe::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


