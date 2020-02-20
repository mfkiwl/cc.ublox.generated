// Generated by commsdsl2comms v3.3.2

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

class AckAckImpl;
class AckAck : public ublox::cc_plugin::Message
{
public:
    AckAck();
    AckAck(const AckAck&) = delete;
    AckAck(AckAck&&) = delete;
    virtual ~AckAck();
    AckAck& operator=(const AckAck& other);
    AckAck& operator=(AckAck&&);

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
    std::unique_ptr<AckAckImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



