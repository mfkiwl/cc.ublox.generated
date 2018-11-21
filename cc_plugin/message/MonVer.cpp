#include "MonVer.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonVer.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_swVersion()
{
    using Field = ublox::message::MonVerFields<>::SwVersion;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_hwVersion()
{
    using Field = ublox::message::MonVerFields<>::HwVersion;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct ListMembers
{
    static QVariantMap createProps_extension()
    {
        using Field = ublox::message::MonVerFields<>::ListMembers::Extension;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::MonVerFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_extension())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_swVersion());
    props.append(createProps_hwVersion());
    props.append(createProps_list());
    return props;
}

} // namespace

class MonVerImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonVer<ublox::cc_plugin::Message>,
        MonVerImpl
    >
{
public:
    MonVerImpl() = default;
    MonVerImpl(const MonVerImpl&) = delete;
    MonVerImpl(MonVerImpl&&) = delete;
    virtual ~MonVerImpl() = default;
    MonVerImpl& operator=(const MonVerImpl&) = default;
    MonVerImpl& operator=(MonVerImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonVer::MonVer() : m_pImpl(new MonVerImpl) {}
MonVer::~MonVer() = default;

MonVer& MonVer::operator=(const MonVer& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonVer& MonVer::operator=(MonVer&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonVer::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonVer::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonVer::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonVer::resetImpl()
{
    m_pImpl->reset();
}

bool MonVer::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonVer*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonVer::MsgIdParamType MonVer::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonVer::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonVer::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonVer::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonVer::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonVer::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


