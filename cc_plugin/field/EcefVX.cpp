// Generated by commsdsl2comms v3.3.3

#include "EcefVX.h"

#include "comms_champion/property/field.h"
#include "ublox/field/EcefVX.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_ecefVX(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::EcefVX<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


