// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgDgnss message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgDgnss message.
/// @see ublox::message::CfgDgnssFields
struct CfgDgnssFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDgnssFields::DgnssMode field.
    struct DgnssModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgDgnssFields::DgnssMode field.
        enum class ValueType : std::uint8_t
        {
            Float = 2, ///< value @b Float
            Fixed = 3, ///< value @b Fixed
            
            // --- Extra values generated for convenience ---
            FirstValue = 2, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgDgnssFields::DgnssMode field.
        static const char* name()
        {
            return "dgnssMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                "Float",
                "Fixed"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgDgnssFields::DgnssMode field.
    using DgnssModeVal = DgnssModeCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDgnssFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::CfgDgnssFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgDgnss message.
/// @see ublox::message::CfgDgnss
struct CfgDgnssCommon
{
    /// @brief Name of the @ref ublox::message::CfgDgnss message.
    static const char* name()
    {
        return "CFG-DGNSS";
    }
    
};

} // namespace message

} // namespace ublox


