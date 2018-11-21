#include "CfgNvsMask.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNvsMask.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNvsMask(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNvsMask<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(17U, "alm")
            .add(29U, "aop")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


