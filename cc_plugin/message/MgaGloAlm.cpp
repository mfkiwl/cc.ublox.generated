#include "MgaGloAlm.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaGloAlm.h"
#include "cc_plugin/field/Res1.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaGloAlmFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaGloAlmFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::MgaGloAlmFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaGloAlmFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_n()
{
    using Field = ublox::message::MgaGloAlmFields<>::N;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_m()
{
    using Field = ublox::message::MgaGloAlmFields<>::M;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_c()
{
    using Field = ublox::message::MgaGloAlmFields<>::C;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tau()
{
    using Field = ublox::message::MgaGloAlmFields<>::Tau;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_epsilon()
{
    using Field = ublox::message::MgaGloAlmFields<>::Epsilon;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_lambda()
{
    using Field = ublox::message::MgaGloAlmFields<>::Lambda;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaI()
{
    using Field = ublox::message::MgaGloAlmFields<>::DeltaI;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tLambda()
{
    using Field = ublox::message::MgaGloAlmFields<>::TLambda;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaT()
{
    using Field = ublox::message::MgaGloAlmFields<>::DeltaT;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaDT()
{
    using Field = ublox::message::MgaGloAlmFields<>::DeltaDT;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_h()
{
    using Field = ublox::message::MgaGloAlmFields<>::H;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega()
{
    using Field = ublox::message::MgaGloAlmFields<>::Omega;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaGloAlmFields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_svid());
    props.append(createProps_reserved1());
    props.append(createProps_n());
    props.append(createProps_m());
    props.append(createProps_c());
    props.append(createProps_tau());
    props.append(createProps_epsilon());
    props.append(createProps_lambda());
    props.append(createProps_deltaI());
    props.append(createProps_tLambda());
    props.append(createProps_deltaT());
    props.append(createProps_deltaDT());
    props.append(createProps_h());
    props.append(createProps_omega());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaGloAlmImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaGloAlm<ublox::cc_plugin::Message>,
        MgaGloAlmImpl
    >
{
public:
    MgaGloAlmImpl() = default;
    MgaGloAlmImpl(const MgaGloAlmImpl&) = delete;
    MgaGloAlmImpl(MgaGloAlmImpl&&) = delete;
    virtual ~MgaGloAlmImpl() = default;
    MgaGloAlmImpl& operator=(const MgaGloAlmImpl&) = default;
    MgaGloAlmImpl& operator=(MgaGloAlmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGloAlm::MgaGloAlm() : m_pImpl(new MgaGloAlmImpl) {}
MgaGloAlm::~MgaGloAlm() = default;

MgaGloAlm& MgaGloAlm::operator=(const MgaGloAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGloAlm& MgaGloAlm::operator=(MgaGloAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGloAlm::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGloAlm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGloAlm::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGloAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGloAlm::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGloAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGloAlm::MsgIdParamType MgaGloAlm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGloAlm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGloAlm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGloAlm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGloAlm::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGloAlm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


