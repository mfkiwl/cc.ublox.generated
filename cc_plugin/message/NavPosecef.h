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

class NavPosecefImpl;
class NavPosecef : public ublox::cc_plugin::Message
{
public:
    NavPosecef();
    NavPosecef(const NavPosecef&) = delete;
    NavPosecef(NavPosecef&&) = delete;
    virtual ~NavPosecef();
    NavPosecef& operator=(const NavPosecef& other);
    NavPosecef& operator=(NavPosecef&&);

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
    std::unique_ptr<NavPosecefImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



