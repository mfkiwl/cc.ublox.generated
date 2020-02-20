// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaAno message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/DayCommon.h"
#include "ublox/field/GnssIdCommon.h"
#include "ublox/field/MonthCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaAno message.
/// @see ublox::message::MgaAnoFields
struct MgaAnoFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaAnoFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaAnoFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaAnoFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaAnoFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaAnoFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaAnoFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::GnssId field.
    using GnssIdCommon = ublox::field::GnssIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Year field.
    struct YearCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaAnoFields::Year field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaAnoFields::Year field.
        static const char* name()
        {
            return "year";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Month field.
    using MonthCommon = ublox::field::MonthCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Day field.
    using DayCommon = ublox::field::DayCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MgaAnoFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MgaAnoFields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref ublox::message::MgaAnoFields::Data field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaAnoFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaAnoFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaAno message.
/// @see ublox::message::MgaAno
struct MgaAnoCommon
{
    /// @brief Name of the @ref ublox::message::MgaAno message.
    static const char* name()
    {
        return "MGA-ANO";
    }
    
};

} // namespace message

} // namespace ublox


