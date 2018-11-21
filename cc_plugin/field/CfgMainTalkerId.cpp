#include "CfgMainTalkerId.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgMainTalkerId.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgMainTalkerId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgMainTalkerId<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Not overridden", 0)
            .add("GP", 1)
            .add("GL", 2)
            .add("GN", 3)
            .add("GA", 4)
            .add("GB", 5)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


