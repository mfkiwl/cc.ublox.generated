#include "RxmSfrb.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmSfrb.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_cno()
{
    using Field = ublox::message::RxmSfrbFields<>::Cno;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::RxmSfrbFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct DwrdMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::RxmSfrbFields<>::DwrdMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_dwrd()
{
    using Field = ublox::message::RxmSfrbFields<>::Dwrd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(DwrdMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_cno());
    props.append(createProps_svid());
    props.append(createProps_dwrd());
    return props;
}

} // namespace

class RxmSfrbImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmSfrb<ublox::cc_plugin::Message>,
        RxmSfrbImpl
    >
{
public:
    RxmSfrbImpl() = default;
    RxmSfrbImpl(const RxmSfrbImpl&) = delete;
    RxmSfrbImpl(RxmSfrbImpl&&) = delete;
    virtual ~RxmSfrbImpl() = default;
    RxmSfrbImpl& operator=(const RxmSfrbImpl&) = default;
    RxmSfrbImpl& operator=(RxmSfrbImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmSfrb::RxmSfrb() : m_pImpl(new RxmSfrbImpl) {}
RxmSfrb::~RxmSfrb() = default;

RxmSfrb& RxmSfrb::operator=(const RxmSfrb& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmSfrb& RxmSfrb::operator=(RxmSfrb&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmSfrb::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmSfrb::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmSfrb::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmSfrb::resetImpl()
{
    m_pImpl->reset();
}

bool RxmSfrb::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmSfrb*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmSfrb::MsgIdParamType RxmSfrb::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmSfrb::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmSfrb::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmSfrb::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmSfrb::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmSfrb::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


