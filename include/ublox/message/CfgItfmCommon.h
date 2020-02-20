// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgItfm message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgItfm message.
/// @see ublox::message::CfgItfmFields
struct CfgItfmFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgItfmFields::Config field.
    struct ConfigMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgItfmFields::ConfigMembers::BbThreshold field.
        struct BbThresholdCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgItfmFields::ConfigMembers::BbThreshold field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgItfmFields::ConfigMembers::BbThreshold field.
            static const char* name()
            {
                return "bbThreshold";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgItfmFields::ConfigMembers::CwThreshold field.
        struct CwThresholdCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgItfmFields::ConfigMembers::CwThreshold field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgItfmFields::ConfigMembers::CwThreshold field.
            static const char* name()
            {
                return "cwThreshold";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgItfmFields::ConfigMembers::AlgorithmBits field.
        struct AlgorithmBitsCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgItfmFields::ConfigMembers::AlgorithmBits field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgItfmFields::ConfigMembers::AlgorithmBits field.
            static const char* name()
            {
                return "algorithmBits";
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgItfmFields::ConfigMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Name of the @ref ublox::message::CfgItfmFields::ConfigMembers::Bits field.
            static const char* name()
            {
                return "bits";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::CfgItfmFields::ConfigMembers::Bits field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "enable"
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
    ///     @ref ublox::message::CfgItfmFields::Config field.
    struct ConfigCommon
    {
        /// @brief Name of the @ref ublox::message::CfgItfmFields::Config field.
        static const char* name()
        {
            return "config";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgItfmFields::Config2 field.
    struct Config2MembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::GeneralBits field.
        struct GeneralBitsCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgItfmFields::Config2Members::GeneralBits field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref ublox::message::CfgItfmFields::Config2Members::GeneralBits field.
            static const char* name()
            {
                return "generalBits";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::AntSetting field.
        struct AntSettingCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgItfmFields::Config2Members::AntSetting field.
            enum class ValueType : std::uint8_t
            {
                Unknown = 0, ///< value @b Unknown
                Passive = 1, ///< value @b Passive
                Active = 2, ///< value @b Active
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 2, ///< Last defined value.
                ValuesLimit = 3, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgItfmFields::Config2Members::AntSetting field.
            static const char* name()
            {
                return "antSetting";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Unknown",
                    "Passive",
                    "Active"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::AntSetting field.
        using AntSettingVal = AntSettingCommon::ValueType;
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Name of the @ref ublox::message::CfgItfmFields::Config2Members::BitsHigh field.
            static const char* name()
            {
                return "bitsHigh";
            }
            
            /// @brief Retrieve name of the bit of
            ///     @ref ublox::message::CfgItfmFields::Config2Members::BitsHigh field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "enable2"
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
    ///     @ref ublox::message::CfgItfmFields::Config2 field.
    struct Config2Common
    {
        /// @brief Name of the @ref ublox::message::CfgItfmFields::Config2 field.
        static const char* name()
        {
            return "config2";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgItfm message.
/// @see ublox::message::CfgItfm
struct CfgItfmCommon
{
    /// @brief Name of the @ref ublox::message::CfgItfm message.
    static const char* name()
    {
        return "CFG-ITFM";
    }
    
};

} // namespace message

} // namespace ublox


