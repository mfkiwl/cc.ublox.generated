#include "SbasSys.h"

#include "comms_champion/property/field.h"
#include "ublox/field/SbasSys.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_sbasSys(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::SbasSys<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Unknown", -1)
            .add("WAAS", 0)
            .add("EGNOS", 1)
            .add("MSAS", 2)
            .add("GAGAN", 3)
            .add("GPS", 16)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


