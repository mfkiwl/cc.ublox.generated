// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"cfgNmeaNumSV"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/CfgNmeaNumSVCommon.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"cfgNmeaNumSV"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNmeaNumSV : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Special value <b>"Unlimited"</b>.
    static constexpr ValueType valueUnlimited()
    {
        return ublox::field::CfgNmeaNumSVCommon::valueUnlimited();
    }
    
    /// @brief Check the value is equal to special @ref valueUnlimited().
    bool isUnlimited() const
    {
        return Base::value() == valueUnlimited();
    }
    
    /// @brief Assign special value @ref valueUnlimited() to the field.
    void setUnlimited()
    {
        Base::value() = valueUnlimited();
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgNmeaNumSVCommon::name();
    }
    
};

} // namespace field

} // namespace ublox


