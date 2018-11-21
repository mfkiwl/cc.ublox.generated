#include "MgaDbd.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaDbd.h"
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

struct Reserved1Members
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::MgaDbdFields<>::Reserved1Members::Element;
        return cc_plugin::field::createProps_res1(Field::name());
        
    }
    
};

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaDbdFields<>::Reserved1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(Reserved1Members::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

static QVariantMap createProps_data()
{
    using Field = ublox::message::MgaDbdFields<>::Data;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
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

class MgaDbdImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaDbd<ublox::cc_plugin::Message>,
        MgaDbdImpl
    >
{
public:
    MgaDbdImpl() = default;
    MgaDbdImpl(const MgaDbdImpl&) = delete;
    MgaDbdImpl(MgaDbdImpl&&) = delete;
    virtual ~MgaDbdImpl() = default;
    MgaDbdImpl& operator=(const MgaDbdImpl&) = default;
    MgaDbdImpl& operator=(MgaDbdImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaDbd::MgaDbd() : m_pImpl(new MgaDbdImpl) {}
MgaDbd::~MgaDbd() = default;

MgaDbd& MgaDbd::operator=(const MgaDbd& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaDbd& MgaDbd::operator=(MgaDbd&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaDbd::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaDbd::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaDbd::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaDbd::resetImpl()
{
    m_pImpl->reset();
}

bool MgaDbd::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaDbd*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaDbd::MsgIdParamType MgaDbd::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaDbd::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaDbd::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaDbd::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaDbd::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaDbd::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


