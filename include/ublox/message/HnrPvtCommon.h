// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::HnrPvt message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/DayCommon.h"
#include "ublox/field/GpsFixCommon.h"
#include "ublox/field/HAccCommon.h"
#include "ublox/field/HMSLCommon.h"
#include "ublox/field/HeadingAccCommon.h"
#include "ublox/field/HeadingCommon.h"
#include "ublox/field/HeightCommon.h"
#include "ublox/field/HourCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/LatCommon.h"
#include "ublox/field/LonCommon.h"
#include "ublox/field/MinCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res4Common.h"
#include "ublox/field/SecCommon.h"
#include "ublox/field/VAccCommon.h"
#include "ublox/field/YearCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::HnrPvt message.
/// @see ublox::message::HnrPvtFields
struct HnrPvtFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Year field.
    using YearCommon = ublox::field::YearCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Hour field.
    using HourCommon = ublox::field::HourCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Min field.
    using MinCommon = ublox::field::MinCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Sec field.
    using SecCommon = ublox::field::SecCommon;
    
    /// @brief Common functions for
    ///     @ref ublox::message::HnrPvtFields::Valid field.
    struct ValidCommon
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::Valid field.
        static const char* name()
        {
            return "valid";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::HnrPvtFields::Valid field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "validDate",
                "validTime",
                "fullyResolved"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Nano field.
    struct NanoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::HnrPvtFields::Nano field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::HnrPvtFields::Nano field.
        static const char* name()
        {
            return "nano";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::FixType field.
    struct FixTypeCommon : public ublox::field::GpsFixCommon
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::FixType field.
        static const char* name()
        {
            return "fixType";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::HnrPvtFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::HnrPvtFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSfixOK",
                "DiffSoln",
                "WKNSET",
                "TOWSET",
                "headVehValid"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Lon field.
    using LonCommon = ublox::field::LonCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Lat field.
    using LatCommon = ublox::field::LatCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Height field.
    using HeightCommon = ublox::field::HeightCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::HMSL field.
    using HMSLCommon = ublox::field::HMSLCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::GSpeed field.
    struct GSpeedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::HnrPvtFields::GSpeed field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::HnrPvtFields::GSpeed field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Speed field.
    struct SpeedCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::HnrPvtFields::Speed field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::HnrPvtFields::Speed field.
        static const char* name()
        {
            return "speed";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::HeadMot field.
    struct HeadMotCommon : public ublox::field::HeadingCommon
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::HeadMot field.
        static const char* name()
        {
            return "headMot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::HeadVeh field.
    struct HeadVehCommon : public ublox::field::HeadingCommon
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::HeadVeh field.
        static const char* name()
        {
            return "headVeh";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::HAcc field.
    using HAccCommon = ublox::field::HAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::VAcc field.
    using VAccCommon = ublox::field::VAccCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::SAcc field.
    struct SAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::HnrPvtFields::SAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::HnrPvtFields::SAcc field.
        static const char* name()
        {
            return "sAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::HeadAcc field.
    struct HeadAccCommon : public ublox::field::HeadingAccCommon
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::HeadAcc field.
        static const char* name()
        {
            return "headAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::HnrPvtFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::HnrPvtFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::HnrPvt message.
/// @see ublox::message::HnrPvt
struct HnrPvtCommon
{
    /// @brief Name of the @ref ublox::message::HnrPvt message.
    static const char* name()
    {
        return "HNR-PVT";
    }
    
};

} // namespace message

} // namespace ublox


