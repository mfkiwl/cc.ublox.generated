#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "cc_plugin/Message.h"

namespace ublox
{

namespace cc_plugin
{

namespace message
{

class CfgTmode3PollImpl;
class CfgTmode3Poll : public ublox::cc_plugin::Message
{
public:
    CfgTmode3Poll();
    CfgTmode3Poll(const CfgTmode3Poll&) = delete;
    CfgTmode3Poll(CfgTmode3Poll&&) = delete;
    virtual ~CfgTmode3Poll();
    CfgTmode3Poll& operator=(const CfgTmode3Poll& other);
    CfgTmode3Poll& operator=(CfgTmode3Poll&&);

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(comms_champion::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const comms_champion::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<CfgTmode3PollImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



