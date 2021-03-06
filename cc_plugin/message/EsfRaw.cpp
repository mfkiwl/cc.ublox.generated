// Generated by commsdsl2comms v3.5.0

#include "EsfRaw.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/EsfRaw.h"
#include "cc_plugin/field/Res4.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::EsfRawFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

struct DataMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_dataField()
        {
            using Field = ublox::message::EsfRawFields<>::DataMembers::ElementMembers::DataField;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_dataType()
        {
            using Field = ublox::message::EsfRawFields<>::DataMembers::ElementMembers::DataType;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_sTtag()
        {
            using Field = ublox::message::EsfRawFields<>::DataMembers::ElementMembers::STtag;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::EsfRawFields<>::DataMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_dataField())
                .add(ElementMembers::createProps_dataType())
                .add(ElementMembers::createProps_sTtag())
                .asMap();
        
    }
    
};

static QVariantMap createProps_data()
{
    using Field = ublox::message::EsfRawFields<>::Data;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(DataMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_reserved1());
    props.append(createProps_data());
    return props;
}

} // namespace

class EsfRawImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::EsfRaw<ublox::cc_plugin::Message>,
        EsfRawImpl
    >
{
public:
    EsfRawImpl() = default;
    EsfRawImpl(const EsfRawImpl&) = delete;
    EsfRawImpl(EsfRawImpl&&) = delete;
    virtual ~EsfRawImpl() = default;
    EsfRawImpl& operator=(const EsfRawImpl&) = default;
    EsfRawImpl& operator=(EsfRawImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfRaw::EsfRaw() : m_pImpl(new EsfRawImpl) {}
EsfRaw::~EsfRaw() = default;

EsfRaw& EsfRaw::operator=(const EsfRaw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfRaw& EsfRaw::operator=(EsfRaw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfRaw::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfRaw::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfRaw::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfRaw::resetImpl()
{
    m_pImpl->reset();
}

bool EsfRaw::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfRaw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfRaw::MsgIdParamType EsfRaw::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfRaw::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfRaw::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfRaw::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfRaw::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfRaw::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


