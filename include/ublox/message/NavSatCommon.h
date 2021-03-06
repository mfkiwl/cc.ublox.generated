// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavSat message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavSat message.
/// @see ublox::message::NavSatFields
struct NavSatFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSatFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSatFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSatFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSatFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSatFields::NumSvs field.
    struct NumSvsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSatFields::NumSvs field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSatFields::NumSvs field.
        static const char* name()
        {
            return "numSvs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSatFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::NavSatFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavSatFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavSatFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::GnssId field.
            using GnssIdCommon = ublox::field::GnssIdCommon;
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSatFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Cno field.
            struct CnoCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSatFields::ListMembers::ElementMembers::Cno field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Cno field.
                static const char* name()
                {
                    return "cno";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Elev field.
            struct ElevCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSatFields::ListMembers::ElementMembers::Elev field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Elev field.
                static const char* name()
                {
                    return "elev";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Azim field.
            struct AzimCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSatFields::ListMembers::ElementMembers::Azim field.
                using ValueType = std::int16_t;
            
                /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Azim field.
                static const char* name()
                {
                    return "azim";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::PrRes field.
            struct PrResCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::NavSatFields::ListMembers::ElementMembers::PrRes field.
                using ValueType = std::int16_t;
            
                /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::PrRes field.
                static const char* name()
                {
                    return "prRes";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Flags field.
            struct FlagsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::QualityInd field.
                struct QualityIndCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::QualityInd field.
                    enum class ValueType : std::uint8_t
                    {
                        NoSignal = 0, ///< value <b>no signal</b>.
                        Searching = 1, ///< value <b>searching</b>.
                        Acquired = 2, ///< value <b>signal acquired</b>.
                        Unusable = 3, ///< value <b>detected but unsable</b>.
                        CodeLocked = 4, ///< value <b>code locked</b>.
                        CodeCarrierLocked = 5, ///< value <b>code and carrier locked</b>.
                        CodeCarrierLocked2 = 6, ///< value <b>code and carrier locked</b>.
                        CodeCarrierLocked3 = 7, ///< value <b>code and carrier locked</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 7, ///< Last defined value.
                        ValuesLimit = 8, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::QualityInd field.
                    static const char* name()
                    {
                        return "qualityInd";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "no signal",
                            "searching",
                            "signal acquired",
                            "detected but unsable",
                            "code locked",
                            "code and carrier locked",
                            "code and carrier locked",
                            "code and carrier locked"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::QualityInd field.
                using QualityIndVal = QualityIndCommon::ValueType;
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                struct BitsLowCommon
                {
                    /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "svUsed"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::Health field.
                struct HealthCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::Health field.
                    enum class ValueType : std::uint8_t
                    {
                        Unknown = 0, ///< value @b Unknown.
                        Healthy = 1, ///< value @b Healthy.
                        Unhealthy = 2, ///< value @b Unhealthy.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 2, ///< Last defined value.
                        ValuesLimit = 3, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::Health field.
                    static const char* name()
                    {
                        return "health";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "Unknown",
                            "Healthy",
                            "Unhealthy"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::Health field.
                using HealthVal = HealthCommon::ValueType;
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsMid field.
                struct BitsMidCommon
                {
                    /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsMid field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsMid field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "diffCorr",
                            "smoothed"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::OrbitSource field.
                struct OrbitSourceCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::OrbitSource field.
                    enum class ValueType : std::uint8_t
                    {
                        NoOrbit = 0, ///< value <b>No orbit</b>.
                        Ephemeris = 1, ///< value @b Ephemeris.
                        Almanac = 2, ///< value @b Almanac.
                        AssistNowOffline = 3, ///< value <b>AssistNow Offline</b>.
                        AssistNowAutonomous = 4, ///< value <b>AssistNow Autonomous</b>.
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 4, ///< Last defined value.
                        ValuesLimit = 5, ///< Upper limit for defined values.
                        
                    };
                    
                    /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::OrbitSource field.
                    static const char* name()
                    {
                        return "orbitSource";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        static const char* Map[] = {
                            "No orbit",
                            "Ephemeris",
                            "Almanac",
                            "AssistNow Offline",
                            "AssistNow Autonomous"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::OrbitSource field.
                using OrbitSourceVal = OrbitSourceCommon::ValueType;
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsHigh field.
                struct BitsHighCommon
                {
                    /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsHigh field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::FlagsMembers::BitsHigh field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "ephAvail",
                            "almAvail",
                            "anoAvail",
                            "aopAvail",
                            nullptr,
                            "sbasCorrUsed",
                            "rtcmCorrUsed",
                            nullptr,
                            nullptr,
                            "prCorrUsed",
                            "crCorrUsed",
                            "doCorrUsed"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
                
            };
            
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::NavSatFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::NavSatFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::NavSatFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::NavSatFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavSat message.
/// @see ublox::message::NavSat
struct NavSatCommon
{
    /// @brief Name of the @ref ublox::message::NavSat message.
    static const char* name()
    {
        return "NAV-SAT";
    }
    
};

} // namespace message

} // namespace ublox


