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

class NavAopstatusUblox8Impl;
class NavAopstatusUblox8 : public ublox::cc_plugin::Message
{
public:
    NavAopstatusUblox8();
    NavAopstatusUblox8(const NavAopstatusUblox8&) = delete;
    NavAopstatusUblox8(NavAopstatusUblox8&&) = delete;
    virtual ~NavAopstatusUblox8();
    NavAopstatusUblox8& operator=(const NavAopstatusUblox8& other);
    NavAopstatusUblox8& operator=(NavAopstatusUblox8&&);

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
    std::unique_ptr<NavAopstatusUblox8Impl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace ublox



