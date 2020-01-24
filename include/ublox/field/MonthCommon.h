// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Month field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Month field.
struct MonthCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Month field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref ublox::field::Month field.
    static const char* name()
    {
        return "month";
    }
    
};

} // namespace field

} // namespace ublox


