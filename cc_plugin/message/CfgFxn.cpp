#include "CfgFxn.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgFxn.h"
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

static QVariantMap createProps_flags()
{
    using Field = ublox::message::CfgFxnFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(1U, "sleep")
            .add(3U, "absAlign")
            .add(4U, "onOff")
            .asMap();
    
}

static QVariantMap createProps_tReacq()
{
    using Field = ublox::message::CfgFxnFields<>::TReacq;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAcq()
{
    using Field = ublox::message::CfgFxnFields<>::TAcq;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tReacqOff()
{
    using Field = ublox::message::CfgFxnFields<>::TReacqOff;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tAcqOff()
{
    using Field = ublox::message::CfgFxnFields<>::TAcqOff;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tOn()
{
    using Field = ublox::message::CfgFxnFields<>::TOn;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_tOff()
{
    using Field = ublox::message::CfgFxnFields<>::TOff;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_res()
{
    using Field = ublox::message::CfgFxnFields<>::Res;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

static QVariantMap createProps_baseTow()
{
    using Field = ublox::message::CfgFxnFields<>::BaseTow;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_tReacq());
    props.append(createProps_tAcq());
    props.append(createProps_tReacqOff());
    props.append(createProps_tAcqOff());
    props.append(createProps_tOn());
    props.append(createProps_tOff());
    props.append(createProps_res());
    props.append(createProps_baseTow());
    return props;
}

} // namespace

class CfgFxnImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgFxn<ublox::cc_plugin::Message>,
        CfgFxnImpl
    >
{
public:
    CfgFxnImpl() = default;
    CfgFxnImpl(const CfgFxnImpl&) = delete;
    CfgFxnImpl(CfgFxnImpl&&) = delete;
    virtual ~CfgFxnImpl() = default;
    CfgFxnImpl& operator=(const CfgFxnImpl&) = default;
    CfgFxnImpl& operator=(CfgFxnImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgFxn::CfgFxn() : m_pImpl(new CfgFxnImpl) {}
CfgFxn::~CfgFxn() = default;

CfgFxn& CfgFxn::operator=(const CfgFxn& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgFxn& CfgFxn::operator=(CfgFxn&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgFxn::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgFxn::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgFxn::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgFxn::resetImpl()
{
    m_pImpl->reset();
}

bool CfgFxn::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgFxn*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgFxn::MsgIdParamType CfgFxn::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgFxn::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgFxn::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgFxn::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgFxn::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgFxn::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


