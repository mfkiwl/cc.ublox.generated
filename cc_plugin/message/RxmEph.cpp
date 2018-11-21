#include "RxmEph.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmEph.h"
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
    using Field = ublox::message::RxmEphFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_how()
{
    using Field = ublox::message::RxmEphFields<>::How;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct SfdMembers
{
    struct ListsMembers
    {
        struct Sf1dMembers
        {
            static QVariantMap createProps_element()
            {
                using Field = ublox::message::RxmEphFields<>::SfdMembers::ListsMembers::Sf1dMembers::Element;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_sf1d()
        {
            using Field = ublox::message::RxmEphFields<>::SfdMembers::ListsMembers::Sf1d;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Sf1dMembers::createProps_element())
                    .serialisedHidden()
                    .asMap();
            
        }
        
        struct Sf2dMembers
        {
            static QVariantMap createProps_element()
            {
                using Field = ublox::message::RxmEphFields<>::SfdMembers::ListsMembers::Sf2dMembers::Element;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_sf2d()
        {
            using Field = ublox::message::RxmEphFields<>::SfdMembers::ListsMembers::Sf2d;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Sf2dMembers::createProps_element())
                    .serialisedHidden()
                    .asMap();
            
        }
        
        struct Sf3dMembers
        {
            static QVariantMap createProps_element()
            {
                using Field = ublox::message::RxmEphFields<>::SfdMembers::ListsMembers::Sf3dMembers::Element;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_sf3d()
        {
            using Field = ublox::message::RxmEphFields<>::SfdMembers::ListsMembers::Sf3d;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Sf3dMembers::createProps_element())
                    .serialisedHidden()
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_lists()
    {
        using Field = ublox::message::RxmEphFields<>::SfdMembers::Lists;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ListsMembers::createProps_sf1d())
                .add(ListsMembers::createProps_sf2d())
                .add(ListsMembers::createProps_sf3d())
                .asMap();
        
    }
    
};

static QVariantMap createProps_sfd()
{
    using Field = ublox::message::RxmEphFields<>::Sfd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(SfdMembers::createProps_lists())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid());
    props.append(createProps_how());
    props.append(createProps_sfd());
    return props;
}

} // namespace

class RxmEphImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmEph<ublox::cc_plugin::Message>,
        RxmEphImpl
    >
{
public:
    RxmEphImpl() = default;
    RxmEphImpl(const RxmEphImpl&) = delete;
    RxmEphImpl(RxmEphImpl&&) = delete;
    virtual ~RxmEphImpl() = default;
    RxmEphImpl& operator=(const RxmEphImpl&) = default;
    RxmEphImpl& operator=(RxmEphImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmEph::RxmEph() : m_pImpl(new RxmEphImpl) {}
RxmEph::~RxmEph() = default;

RxmEph& RxmEph::operator=(const RxmEph& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmEph& RxmEph::operator=(RxmEph&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmEph::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmEph::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmEph::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmEph::resetImpl()
{
    m_pImpl->reset();
}

bool RxmEph::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmEph*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmEph::MsgIdParamType RxmEph::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmEph::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmEph::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmEph::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmEph::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmEph::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


