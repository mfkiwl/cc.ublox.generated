#include "SbasService.h"

#include "comms_champion/property/field.h"
#include "ublox/field/SbasService.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_sbasService(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::SbasService<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "Ranging")
            .add(1U, "Corrections")
            .add(2U, "Integrity")
            .add(3U, "Testmode")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


