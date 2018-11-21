#include "CfgDatD.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgDatD.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgDatD(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgDatD<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


