// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNmeaNumSV field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgNmeaNumSV field.
struct CfgNmeaNumSVCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::CfgNmeaNumSV field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref ublox::field::CfgNmeaNumSV field.
    static const char* name()
    {
        return "cfgNmeaNumSV";
    }
    
    /// @brief Special value <b>"Unlimited"</b>.
    static constexpr ValueType valueUnlimited()
    {
        return static_cast<ValueType>(0);
    }
    
    
    
};

} // namespace field

} // namespace ublox


