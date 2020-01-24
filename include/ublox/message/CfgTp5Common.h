// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgTp5 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/CfgTp5TpIdxCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgTp5 message.
/// @see ublox::message::CfgTp5Fields
struct CfgTp5FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTp5Fields::TpIdx field.
    using TpIdxCommon = ublox::field::CfgTp5TpIdxCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTp5Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTp5Fields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTp5Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTp5Fields::AntCableDelay field.
    struct AntCableDelayCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTp5Fields::AntCableDelay field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::AntCableDelay field.
        static const char* name()
        {
            return "antCableDelay";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTp5Fields::RfGroupDelay field.
    struct RfGroupDelayCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTp5Fields::RfGroupDelay field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::RfGroupDelay field.
        static const char* name()
        {
            return "rfGroupDelay";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::Freq field.
    struct FreqMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::FreqMembers::Freq field.
        struct FreqCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::FreqMembers::Freq field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::FreqMembers::Freq field.
            static const char* name()
            {
                return "freq";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::Freq field.
    struct FreqCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::Freq field.
        static const char* name()
        {
            return "freq";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::Period field.
    struct PeriodMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::PeriodMembers::Period field.
        struct PeriodCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::PeriodMembers::Period field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::PeriodMembers::Period field.
            static const char* name()
            {
                return "period";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::Period field.
    struct PeriodCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::Period field.
        static const char* name()
        {
            return "period";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::FreqLock field.
    struct FreqLockMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::FreqLockMembers::FreqLock field.
        struct FreqLockCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::FreqLockMembers::FreqLock field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::FreqLockMembers::FreqLock field.
            static const char* name()
            {
                return "freqLock";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::FreqLock field.
    struct FreqLockCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::FreqLock field.
        static const char* name()
        {
            return "freqLock";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::PeriodLock field.
    struct PeriodLockMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::PeriodLockMembers::PeriodLock field.
        struct PeriodLockCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::PeriodLockMembers::PeriodLock field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::PeriodLockMembers::PeriodLock field.
            static const char* name()
            {
                return "periodLock";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::PeriodLock field.
    struct PeriodLockCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::PeriodLock field.
        static const char* name()
        {
            return "periodLock";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::PulseLen field.
    struct PulseLenMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::PulseLenMembers::PulseLen field.
        struct PulseLenCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::PulseLenMembers::PulseLen field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::PulseLenMembers::PulseLen field.
            static const char* name()
            {
                return "pulseLen";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::PulseLen field.
    struct PulseLenCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::PulseLen field.
        static const char* name()
        {
            return "pulseLen";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::Ratio field.
    struct RatioMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::RatioMembers::Ratio field.
        struct RatioCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::RatioMembers::Ratio field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::RatioMembers::Ratio field.
            static const char* name()
            {
                return "ratio";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::Ratio field.
    struct RatioCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::Ratio field.
        static const char* name()
        {
            return "ratio";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::PulseLenLock field.
    struct PulseLenLockMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::PulseLenLockMembers::PulseLenLock field.
        struct PulseLenLockCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::PulseLenLockMembers::PulseLenLock field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::PulseLenLockMembers::PulseLenLock field.
            static const char* name()
            {
                return "pulseLenLock";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::PulseLenLock field.
    struct PulseLenLockCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::PulseLenLock field.
        static const char* name()
        {
            return "pulseLenLock";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::RatioLock field.
    struct RatioLockMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::RatioLockMembers::RatioLock field.
        struct RatioLockCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::RatioLockMembers::RatioLock field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::RatioLockMembers::RatioLock field.
            static const char* name()
            {
                return "ratioLock";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::RatioLock field.
    struct RatioLockCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::RatioLock field.
        static const char* name()
        {
            return "ratioLock";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgTp5Fields::UserConfigDelay field.
    struct UserConfigDelayCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgTp5Fields::UserConfigDelay field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::UserConfigDelay field.
        static const char* name()
        {
            return "userConfigDelay";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::FlagsMembers::Bits field.
            static const char* name()
            {
                return "bits";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "active",
                    "lockGnssFreq",
                    "lockedOtherSet",
                    "isFreq",
                    "isLength",
                    "alignToTow",
                    "polarity"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnss field.
        struct GridUtcGnssCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnss field.
            enum class ValueType : std::uint8_t
            {
                UTC = 0, ///< value @b UTC
                GPS = 1, ///< value @b GPS
                GLONASS = 2, ///< value @b GLONASS
                BeiDou = 3, ///< value @b BeiDou
                Galileo = 4, ///< value @b Galileo
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 4, ///< Last defined value.
                ValuesLimit = 5, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnss field.
            static const char* name()
            {
                return "gridUtcGnss";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "UTC",
                    "GPS",
                    "GLONASS",
                    "BeiDou",
                    "Galileo"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnss field.
        using GridUtcGnssVal = GridUtcGnssCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::SyncMode field.
        struct SyncModeCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::FlagsMembers::SyncMode field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::FlagsMembers::SyncMode field.
            static const char* name()
            {
                return "syncMode";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::Reserved field.
        struct ReservedCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgTp5Fields::FlagsMembers::Reserved field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgTp5Fields::FlagsMembers::Reserved field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgTp5Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgTp5Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgTp5 message.
/// @see ublox::message::CfgTp5
struct CfgTp5Common
{
    /// @brief Name of the @ref ublox::message::CfgTp5 message.
    static const char* name()
    {
        return "CFG-TP5";
    }
    
};

} // namespace message

} // namespace ublox


