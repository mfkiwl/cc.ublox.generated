#include "Lon.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Lon.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_lon(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Lon<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .scaledDecimals(7U)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


