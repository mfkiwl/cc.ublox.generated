#include "CfgPrtInProtoMask.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgPrtInProtoMask.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgPrtInProtoMask(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgPrtInProtoMask<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "inUbx")
            .add(1U, "inNmea")
            .add(2U, "inRtcm")
            .add(5U, "inRtcm3")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


