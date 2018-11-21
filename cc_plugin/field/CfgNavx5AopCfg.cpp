#include "CfgNavx5AopCfg.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNavx5AopCfg.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNavx5AopCfg(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNavx5AopCfg<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "useAOP")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


