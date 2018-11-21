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

class CfgUsbPollImpl;
class CfgUsbPoll : public ublox::cc_plugin::Message
{
public:
    CfgUsbPoll();
    CfgUsbPoll(const CfgUsbPoll&) = delete;
    CfgUsbPoll(CfgUsbPoll&&) = delete;
    virtual ~CfgUsbPoll();
    CfgUsbPoll& operator=(const CfgUsbPoll& other);
    CfgUsbPoll& operator=(CfgUsbPoll&&);

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
    std::unique_ptr<CfgUsbPollImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



