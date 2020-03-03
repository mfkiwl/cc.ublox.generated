// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::Itow field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::Itow field.
struct ItowCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::Itow field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::Itow field.
    static const char* name()
    {
        return "iTOW";
    }
    
};

} // namespace field

} // namespace ublox


