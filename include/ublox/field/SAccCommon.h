// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::SAcc field.

#pragma once

#include <cstdint>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::SAcc field.
struct SAccCommon
{
    /// @brief Re-definition of the value type used by
    ///     ublox::field::SAcc field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref ublox::field::SAcc field.
    static const char* name()
    {
        return "sAcc";
    }
    
};

} // namespace field

} // namespace ublox


