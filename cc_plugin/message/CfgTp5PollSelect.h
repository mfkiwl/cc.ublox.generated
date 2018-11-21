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

class CfgTp5PollSelectImpl;
class CfgTp5PollSelect : public ublox::cc_plugin::Message
{
public:
    CfgTp5PollSelect();
    CfgTp5PollSelect(const CfgTp5PollSelect&) = delete;
    CfgTp5PollSelect(CfgTp5PollSelect&&) = delete;
    virtual ~CfgTp5PollSelect();
    CfgTp5PollSelect& operator=(const CfgTp5PollSelect& other);
    CfgTp5PollSelect& operator=(CfgTp5PollSelect&&);

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
    std::unique_ptr<CfgTp5PollSelectImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



