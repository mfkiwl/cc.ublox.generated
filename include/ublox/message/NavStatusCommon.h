// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavStatus message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/GpsFixCommon.h"
#include "ublox/field/ItowCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavStatus message.
/// @see ublox::message::NavStatusFields
struct NavStatusFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavStatusFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavStatusFields::GpsFix field.
    using GpsFixCommon = ublox::field::GpsFixCommon;
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavStatusFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::NavStatusFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavStatusFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "gpsFixOk",
                "diffSoln",
                "wknSet",
                "towSet"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavStatusFields::FixStat field.
    struct FixStatMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::NavStatusFields::FixStatMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::NavStatusFields::FixStatMembers::Bits field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::NavStatusFields::FixStatMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "diffCorr"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavStatusFields::FixStatMembers::MapMatching field.
        struct MapMatchingCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavStatusFields::FixStatMembers::MapMatching field.
            enum class ValueType : std::uint8_t
            {
                None = 0, ///< value <b>none</b>.
                NotUsed = 1, ///< value <b>not used</b>.
                Used = 2, ///< value <b>used</b>.
                UsedDeadReckon = 3, ///< value <b>used + dead reckon</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::NavStatusFields::FixStatMembers::MapMatching field.
            static const char* name()
            {
                return "mapMatching";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "none",
                    "not used",
                    "used",
                    "used + dead reckon"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavStatusFields::FixStatMembers::MapMatching field.
        using MapMatchingVal = MapMatchingCommon::ValueType;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavStatusFields::FixStat field.
    struct FixStatCommon
    {
        /// @brief Name of the @ref ublox::message::NavStatusFields::FixStat field.
        static const char* name()
        {
            return "fixStat";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavStatusFields::Flags2 field.
    struct Flags2MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavStatusFields::Flags2Members::PsmState field.
        struct PsmStateCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavStatusFields::Flags2Members::PsmState field.
            enum class ValueType : std::uint8_t
            {
                Acquisition = 0, ///< value <b>ACQUISITION</b>.
                Tracking = 1, ///< value <b>TRAKING</b>.
                PowerOptimizedTracking = 2, ///< value <b>POWER OPTIMIZED TRACKING</b>.
                Inactive = 3, ///< value <b>INACTIVE</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::NavStatusFields::Flags2Members::PsmState field.
            static const char* name()
            {
                return "psmState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "ACQUISITION",
                    "TRAKING",
                    "POWER OPTIMIZED TRACKING",
                    "INACTIVE"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavStatusFields::Flags2Members::PsmState field.
        using PsmStateVal = PsmStateCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavStatusFields::Flags2Members::Res1 field.
        struct Res1Common
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::NavStatusFields::Flags2Members::Res1 field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::NavStatusFields::Flags2Members::Res1 field.
            static const char* name()
            {
                return "res1";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavStatusFields::Flags2Members::SpoofDetState field.
        struct SpoofDetStateCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavStatusFields::Flags2Members::SpoofDetState field.
            enum class ValueType : std::uint8_t
            {
                Unknown = 0, ///< value @b Unknown
                NoSpoofing = 1, ///< value <b>No spoofing</b>.
                Spoofing = 2, ///< value @b Spoofing
                MultipleSpoofing = 3, ///< value <b>Multiple spoofing</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::NavStatusFields::Flags2Members::SpoofDetState field.
            static const char* name()
            {
                return "spoofDetState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Unknown",
                    "No spoofing",
                    "Spoofing",
                    "Multiple spoofing"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavStatusFields::Flags2Members::SpoofDetState field.
        using SpoofDetStateVal = SpoofDetStateCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::NavStatusFields::Flags2Members::Res2 field.
        struct Res2Common
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::NavStatusFields::Flags2Members::Res2 field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::NavStatusFields::Flags2Members::Res2 field.
            static const char* name()
            {
                return "res2";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavStatusFields::Flags2 field.
    struct Flags2Common
    {
        /// @brief Name of the @ref ublox::message::NavStatusFields::Flags2 field.
        static const char* name()
        {
            return "flags2";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavStatusFields::Ttff field.
    struct TtffCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavStatusFields::Ttff field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavStatusFields::Ttff field.
        static const char* name()
        {
            return "ttff";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavStatusFields::Msss field.
    struct MsssCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavStatusFields::Msss field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavStatusFields::Msss field.
        static const char* name()
        {
            return "msss";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavStatus message.
/// @see ublox::message::NavStatus
struct NavStatusCommon
{
    /// @brief Name of the @ref ublox::message::NavStatus message.
    static const char* name()
    {
        return "NAV-STATUS";
    }
    
};

} // namespace message

} // namespace ublox


