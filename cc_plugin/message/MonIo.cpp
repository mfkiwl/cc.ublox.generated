#include "MonIo.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonIo.h"
#include "cc_plugin/field/Res2.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_rxBytes()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::RxBytes;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_txBytes()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::TxBytes;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_parityErrs()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::ParityErrs;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_framingErrs()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::FramingErrs;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_overrunErrs()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::OverrunErrs;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_breakCond()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::BreakCond;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_rxBusy()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::RxBusy;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_txBusy()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::TxBusy;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved1()
        {
            using Field = ublox::message::MonIoFields<>::ListMembers::ElementMembers::Reserved1;
            return cc_plugin::field::createProps_res2(Field::name());
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::MonIoFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_rxBytes())
                .add(ElementMembers::createProps_txBytes())
                .add(ElementMembers::createProps_parityErrs())
                .add(ElementMembers::createProps_framingErrs())
                .add(ElementMembers::createProps_overrunErrs())
                .add(ElementMembers::createProps_breakCond())
                .add(ElementMembers::createProps_rxBusy())
                .add(ElementMembers::createProps_txBusy())
                .add(ElementMembers::createProps_reserved1())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::MonIoFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_list());
    return props;
}

} // namespace

class MonIoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonIo<ublox::cc_plugin::Message>,
        MonIoImpl
    >
{
public:
    MonIoImpl() = default;
    MonIoImpl(const MonIoImpl&) = delete;
    MonIoImpl(MonIoImpl&&) = delete;
    virtual ~MonIoImpl() = default;
    MonIoImpl& operator=(const MonIoImpl&) = default;
    MonIoImpl& operator=(MonIoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonIo::MonIo() : m_pImpl(new MonIoImpl) {}
MonIo::~MonIo() = default;

MonIo& MonIo::operator=(const MonIo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonIo& MonIo::operator=(MonIo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonIo::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonIo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonIo::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonIo::resetImpl()
{
    m_pImpl->reset();
}

bool MonIo::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonIo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonIo::MsgIdParamType MonIo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonIo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonIo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonIo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonIo::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonIo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


