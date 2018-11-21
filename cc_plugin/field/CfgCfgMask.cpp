#include "CfgCfgMask.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgCfgMask.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgCfgMask(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgCfgMask<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "ioPort")
            .add(1U, "msgConf")
            .add(2U, "infMsg")
            .add(3U, "navConf")
            .add(4U, "rxmConf")
            .add(8U, "senConf")
            .add(9U, "rinvConf")
            .add(10U, "antConf")
            .add(11U, "logConf")
            .add(12U, "ftsConf")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


