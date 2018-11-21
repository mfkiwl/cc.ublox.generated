#include "Ftow.h"

#include "comms_champion/property/field.h"
#include "ublox/field/Ftow.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_ftow(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::Ftow<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


