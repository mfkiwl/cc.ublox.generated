#include "CfgRxm.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgRxm.h"
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

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgRxmFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_lpMode()
{
    using Field = ublox::message::CfgRxmFields<>::LpMode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Continuous", 0)
            .add("Power Save", 1)
            .add("Continuous (2)", 4)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_reserved1());
    props.append(createProps_lpMode());
    return props;
}

} // namespace

class CfgRxmImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgRxm<ublox::cc_plugin::Message>,
        CfgRxmImpl
    >
{
public:
    CfgRxmImpl() = default;
    CfgRxmImpl(const CfgRxmImpl&) = delete;
    CfgRxmImpl(CfgRxmImpl&&) = delete;
    virtual ~CfgRxmImpl() = default;
    CfgRxmImpl& operator=(const CfgRxmImpl&) = default;
    CfgRxmImpl& operator=(CfgRxmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRxm::CfgRxm() : m_pImpl(new CfgRxmImpl) {}
CfgRxm::~CfgRxm() = default;

CfgRxm& CfgRxm::operator=(const CfgRxm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRxm& CfgRxm::operator=(CfgRxm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRxm::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRxm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRxm::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRxm::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRxm::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRxm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRxm::MsgIdParamType CfgRxm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRxm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRxm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRxm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRxm::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRxm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


