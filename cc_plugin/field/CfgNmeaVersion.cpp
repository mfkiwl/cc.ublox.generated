#include "CfgNmeaVersion.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNmeaVersion.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNmeaVersion(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNmeaVersion<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("v2.1", 33)
            .add("v2.3", 35)
            .add("v4.0", 64)
            .add("v4.1", 65)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


