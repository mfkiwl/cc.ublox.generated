// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavSol message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/DopCommon.h"
#include "ublox/field/EcefVXCommon.h"
#include "ublox/field/EcefVYCommon.h"
#include "ublox/field/EcefVZCommon.h"
#include "ublox/field/EcefXCommon.h"
#include "ublox/field/EcefYCommon.h"
#include "ublox/field/EcefZCommon.h"
#include "ublox/field/FtowCommon.h"
#include "ublox/field/GpsFixCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/PAccCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"
#include "ublox/field/SAccCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavSol message.
/// @see ublox::message::NavSolFields
struct NavSolFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::Ftow field.
    using FtowCommon = ublox::field::FtowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSolFields::Week field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::NavSolFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::GpsFix field.
    using GpsFixCommon = ublox::field::GpsFixCommon;
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavSolFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::NavSolFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::NavSolFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSfixOK",
                "DiffSoln",
                "WKNSET",
                "TOWSET"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::EcefX field.
    using EcefXCommon = ublox::field::EcefXCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::EcefY field.
    using EcefYCommon = ublox::field::EcefYCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::EcefZ field.
    using EcefZCommon = ublox::field::EcefZCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::PAcc field.
    using PAccCommon = ublox::field::PAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::EcefVX field.
    using EcefVXCommon = ublox::field::EcefVXCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::EcefVY field.
    using EcefVYCommon = ublox::field::EcefVYCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::EcefVZ field.
    using EcefVZCommon = ublox::field::EcefVZCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::SAcc field.
    using SAccCommon = ublox::field::SAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::PDOP field.
    struct PDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavSolFields::PDOP field.
        static const char* name()
        {
            return "pDOP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::NavSolFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::NumSV field.
    struct NumSVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSolFields::NumSV field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSolFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSolFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::NavSolFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavSol message.
/// @see ublox::message::NavSol
struct NavSolCommon
{
    /// @brief Name of the @ref ublox::message::NavSol message.
    static const char* name()
    {
        return "NAV-SOL";
    }
    
};

} // namespace message

} // namespace ublox


