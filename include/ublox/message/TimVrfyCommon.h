// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::TimVrfy message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::TimVrfy message.
/// @see ublox::message::TimVrfyFields
struct TimVrfyFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVrfyFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVrfyFields::Frac field.
    struct FracCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVrfyFields::Frac field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimVrfyFields::Frac field.
        static const char* name()
        {
            return "frac";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVrfyFields::DeltaMs field.
    struct DeltaMsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVrfyFields::DeltaMs field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimVrfyFields::DeltaMs field.
        static const char* name()
        {
            return "deltaMs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVrfyFields::DeltaNs field.
    struct DeltaNsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVrfyFields::DeltaNs field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::TimVrfyFields::DeltaNs field.
        static const char* name()
        {
            return "deltaNs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVrfyFields::Wno field.
    struct WnoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::TimVrfyFields::Wno field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::TimVrfyFields::Wno field.
        static const char* name()
        {
            return "wno";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimVrfyFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimVrfyFields::FlagsMembers::Src field.
        struct SrcCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::TimVrfyFields::FlagsMembers::Src field.
            enum class ValueType : std::uint8_t
            {
                NoAiding = 0, ///< value @b NoAiding
                RTC = 1, ///< value @b RTC
                AidIni = 2, ///< value @b AidIni
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::TimVrfyFields::FlagsMembers::Src field.
            static const char* name()
            {
                return "src";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "NoAiding",
                    "RTC",
                    "AidIni"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimVrfyFields::FlagsMembers::Src field.
        using SrcVal = SrcCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::TimVrfyFields::FlagsMembers::Reserved field.
        struct ReservedCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::TimVrfyFields::FlagsMembers::Reserved field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::TimVrfyFields::FlagsMembers::Reserved field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::TimVrfyFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::TimVrfyFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::TimVrfyFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::TimVrfyFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::TimVrfy message.
/// @see ublox::message::TimVrfy
struct TimVrfyCommon
{
    /// @brief Name of the @ref ublox::message::TimVrfy message.
    static const char* name()
    {
        return "TIM-VRFY";
    }
    
};

} // namespace message

} // namespace ublox


