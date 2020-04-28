// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::EcefY field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::EcefY field.
struct EcefYCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::EcefY field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref ublox::field::EcefY field.
    static const char* name()
    {
        return "ecefY";
    }
    
};

} // namespace field

} // namespace ublox


