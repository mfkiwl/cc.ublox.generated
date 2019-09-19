#include "Message.h"

#include "comms_champion/property/field.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace 

QString Message::idAsStringImpl() const
{
    return "0x" + QString("%1").arg(static_cast<unsigned long long>(getId()), 4, 16, QChar('0')).toUpper();
}

const QVariantList& Message::extraTransportFieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace cc_plugin

} // namespace ublox


