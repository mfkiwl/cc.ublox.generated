#include "AidAop.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/AidAop.h"
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
    using Field = ublox::message::AidAopFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_data()
{
    using Field = ublox::message::AidAopFields<>::Data;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct OptionalsMembers
{
    struct OptionalsWrapMembers
    {
        static QVariantMap createProps_optional0()
        {
            using Field = ublox::message::AidAopFields<>::OptionalsMembers::OptionalsWrapMembers::Optional0;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_optional1()
        {
            using Field = ublox::message::AidAopFields<>::OptionalsMembers::OptionalsWrapMembers::Optional1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_optional2()
        {
            using Field = ublox::message::AidAopFields<>::OptionalsMembers::OptionalsWrapMembers::Optional2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_optionalsWrap()
    {
        using Field = ublox::message::AidAopFields<>::OptionalsMembers::OptionalsWrap;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(OptionalsWrapMembers::createProps_optional0())
                .add(OptionalsWrapMembers::createProps_optional1())
                .add(OptionalsWrapMembers::createProps_optional2())
                .asMap();
        
    }
    
};

static QVariantMap createProps_optionals()
{
    using Field = ublox::message::AidAopFields<>::Optionals;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .field(OptionalsMembers::createProps_optionalsWrap())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid());
    props.append(createProps_data());
    props.append(createProps_optionals());
    return props;
}

} // namespace

class AidAopImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::AidAop<ublox::cc_plugin::Message>,
        AidAopImpl
    >
{
public:
    AidAopImpl() = default;
    AidAopImpl(const AidAopImpl&) = delete;
    AidAopImpl(AidAopImpl&&) = delete;
    virtual ~AidAopImpl() = default;
    AidAopImpl& operator=(const AidAopImpl&) = default;
    AidAopImpl& operator=(AidAopImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAop::AidAop() : m_pImpl(new AidAopImpl) {}
AidAop::~AidAop() = default;

AidAop& AidAop::operator=(const AidAop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAop& AidAop::operator=(AidAop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AidAop::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAop::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAop::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAop::resetImpl()
{
    m_pImpl->reset();
}

bool AidAop::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAop::MsgIdParamType AidAop::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAop::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAop::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAop::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAop::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAop::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


