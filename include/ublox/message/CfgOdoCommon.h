// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgOdo message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"
#include "ublox/field/Res6Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgOdo message.
/// @see ublox::message::CfgOdoFields
struct CfgOdoFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgOdoFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgOdoFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::CfgOdoFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgOdoFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgOdoFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgOdoFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "useODO",
                "useCOG",
                "outLPVel",
                "outLPCog"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgOdoFields::OdoCfg field.
    struct OdoCfgMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgOdoFields::OdoCfgMembers::Profile field.
        struct ProfileCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgOdoFields::OdoCfgMembers::Profile field.
            enum class ValueType : std::uint8_t
            {
                Running = 0, ///< value @b Running.
                Cycling = 1, ///< value @b Cycling.
                Swimming = 2, ///< value @b Swimming.
                Car = 3, ///< value @b Car.
                Custom = 4, ///< value @b Custom.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 4, ///< Last defined value.
                ValuesLimit = 5, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgOdoFields::OdoCfgMembers::Profile field.
            static const char* name()
            {
                return "profile";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Running",
                    "Cycling",
                    "Swimming",
                    "Car",
                    "Custom"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgOdoFields::OdoCfgMembers::Profile field.
        using ProfileVal = ProfileCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgOdoFields::OdoCfgMembers::Reserved field.
        struct ReservedCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgOdoFields::OdoCfgMembers::Reserved field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgOdoFields::OdoCfgMembers::Reserved field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgOdoFields::OdoCfg field.
    struct OdoCfgCommon
    {
        /// @brief Name of the @ref ublox::message::CfgOdoFields::OdoCfg field.
        static const char* name()
        {
            return "odoCfg";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res6Common
    {
        /// @brief Name of the @ref ublox::message::CfgOdoFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::CogMaxSpeed field.
    struct CogMaxSpeedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgOdoFields::CogMaxSpeed field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgOdoFields::CogMaxSpeed field.
        static const char* name()
        {
            return "cogMaxSpeed";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::CogMaxPosAcc field.
    struct CogMaxPosAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgOdoFields::CogMaxPosAcc field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgOdoFields::CogMaxPosAcc field.
        static const char* name()
        {
            return "cogMaxPosAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgOdoFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::VelLpGain field.
    struct VelLpGainCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgOdoFields::VelLpGain field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgOdoFields::VelLpGain field.
        static const char* name()
        {
            return "velLpGain";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::CogLpGain field.
    struct CogLpGainCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgOdoFields::CogLpGain field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgOdoFields::CogLpGain field.
        static const char* name()
        {
            return "cogLpGain";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgOdoFields::Reserved4 field.
    struct Reserved4Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgOdoFields::Reserved4 field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgOdo message.
/// @see ublox::message::CfgOdo
struct CfgOdoCommon
{
    /// @brief Name of the @ref ublox::message::CfgOdo message.
    static const char* name()
    {
        return "CFG-ODO";
    }
    
};

} // namespace message

} // namespace ublox


