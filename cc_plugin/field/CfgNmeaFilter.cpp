// Generated by commsdsl2comms v3.3.3

#include "CfgNmeaFilter.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNmeaFilter.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNmeaFilter(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNmeaFilter<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "posFilt")
            .add(1U, "mskPosFilt")
            .add(2U, "timeFilt")
            .add(3U, "dateFilt")
            .add(4U, "gpsOnlyFilter")
            .add(5U, "trackFilt")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


