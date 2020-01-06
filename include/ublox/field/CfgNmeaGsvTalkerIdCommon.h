// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::CfgNmeaGsvTalkerId field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::CfgNmeaGsvTalkerId field.
struct CfgNmeaGsvTalkerIdCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgNmeaGsvTalkerId field.
    enum class ValueType : std::uint8_t
    {
        GnssSpecific = 0, ///< value <b>GNSS Specific</b>.
        Main = 1, ///< value @b Main
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::CfgNmeaGsvTalkerId field.
    static const char* name()
    {
        return "cfgNmeaGsvTalkerId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "GNSS Specific",
            "Main"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::CfgNmeaGsvTalkerId field.
using CfgNmeaGsvTalkerIdVal = CfgNmeaGsvTalkerIdCommon::ValueType;

} // namespace field

} // namespace ublox


