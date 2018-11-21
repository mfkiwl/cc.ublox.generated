#include "CfgNavx5Mask2.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNavx5Mask2.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNavx5Mask2(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNavx5Mask2<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(6U, "adr")
            .add(7U, "sigAttenComp")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


