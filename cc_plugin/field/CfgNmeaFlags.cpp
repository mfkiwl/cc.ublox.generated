#include "CfgNmeaFlags.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNmeaFlags.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNmeaFlags(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNmeaFlags<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "compat")
            .add(1U, "consider")
            .add(2U, "limit82")
            .add(3U, "highPrec")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


