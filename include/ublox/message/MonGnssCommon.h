// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonGnss message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonGnss message.
/// @see ublox::message::MonGnssFields
struct MonGnssFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonGnssFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonGnssFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonGnssFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonGnssFields::Supported field.
    struct SupportedCommon
    {
        /// @brief Name of the @ref ublox::message::MonGnssFields::Supported field.
        static const char* name()
        {
            return "supported";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonGnssFields::Supported field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSSup",
                "GlonassSup",
                "BeidouSup",
                "GalileoSup"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonGnssFields::DefaultGnss field.
    struct DefaultGnssCommon
    {
        /// @brief Name of the @ref ublox::message::MonGnssFields::DefaultGnss field.
        static const char* name()
        {
            return "defaultGnss";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonGnssFields::DefaultGnss field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSDef",
                "GlonassDef",
                "BeidouDef",
                "GalileoDef"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonGnssFields::Enabled field.
    struct EnabledCommon
    {
        /// @brief Name of the @ref ublox::message::MonGnssFields::Enabled field.
        static const char* name()
        {
            return "enabled";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonGnssFields::Enabled field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSEna",
                "GlonassEna",
                "BeidouEna",
                "GalileoEna"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonGnssFields::Simultaneous field.
    struct SimultaneousCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonGnssFields::Simultaneous field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonGnssFields::Simultaneous field.
        static const char* name()
        {
            return "simultaneous";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonGnssFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::MonGnssFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MonGnss message.
/// @see ublox::message::MonGnss
struct MonGnssCommon
{
    /// @brief Name of the @ref ublox::message::MonGnss message.
    static const char* name()
    {
        return "MON-GNSS";
    }
    
};

} // namespace message

} // namespace ublox


