// Generated by commsdsl2comms v3.5.0

#include "CfgTp5PollSelect.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTp5PollSelect.h"
#include "cc_plugin/field/CfgTp5TpIdx.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_tpIdx()
{
    using Field = ublox::message::CfgTp5PollSelectFields<>::TpIdx;
    auto props = cc_plugin::field::createProps_cfgTp5TpIdx(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_tpIdx());
    return props;
}

} // namespace

class CfgTp5PollSelectImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTp5PollSelect<ublox::cc_plugin::Message>,
        CfgTp5PollSelectImpl
    >
{
public:
    CfgTp5PollSelectImpl() = default;
    CfgTp5PollSelectImpl(const CfgTp5PollSelectImpl&) = delete;
    CfgTp5PollSelectImpl(CfgTp5PollSelectImpl&&) = delete;
    virtual ~CfgTp5PollSelectImpl() = default;
    CfgTp5PollSelectImpl& operator=(const CfgTp5PollSelectImpl&) = default;
    CfgTp5PollSelectImpl& operator=(CfgTp5PollSelectImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTp5PollSelect::CfgTp5PollSelect() : m_pImpl(new CfgTp5PollSelectImpl) {}
CfgTp5PollSelect::~CfgTp5PollSelect() = default;

CfgTp5PollSelect& CfgTp5PollSelect::operator=(const CfgTp5PollSelect& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTp5PollSelect& CfgTp5PollSelect::operator=(CfgTp5PollSelect&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTp5PollSelect::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTp5PollSelect::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTp5PollSelect::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTp5PollSelect::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTp5PollSelect::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTp5PollSelect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTp5PollSelect::MsgIdParamType CfgTp5PollSelect::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTp5PollSelect::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTp5PollSelect::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTp5PollSelect::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTp5PollSelect::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTp5PollSelect::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


