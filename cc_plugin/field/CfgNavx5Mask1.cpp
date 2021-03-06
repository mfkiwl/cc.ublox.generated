// Generated by commsdsl2comms v3.5.0

#include "CfgNavx5Mask1.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNavx5Mask1.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNavx5Mask1(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNavx5Mask1<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(2U, "minMax")
            .add(3U, "minCno")
            .add(6U, "initial3dfix")
            .add(9U, "wknRoll")
            .add(10U, "ackAid")
            .add(13U, "ppp")
            .add(14U, "aop")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


