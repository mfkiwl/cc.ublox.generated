// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Year field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Year field.
struct YearCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Year field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref ublox::field::Year field.
    static const char* name()
    {
        return "year";
    }
    
};

} // namespace field

} // namespace ublox


