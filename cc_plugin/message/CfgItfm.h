// Generated by commsdsl2comms v3.5.0

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

class CfgItfmImpl;
class CfgItfm : public ublox::cc_plugin::Message
{
public:
    CfgItfm();
    CfgItfm(const CfgItfm&) = delete;
    CfgItfm(CfgItfm&&) = delete;
    virtual ~CfgItfm();
    CfgItfm& operator=(const CfgItfm& other);
    CfgItfm& operator=(CfgItfm&&);

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
    std::unique_ptr<CfgItfmImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



