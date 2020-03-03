// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavDop message and its fields.

#pragma once

#include "ublox/field/DopCommon.h"
#include "ublox/field/ItowCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavDop message.
/// @see ublox::message::NavDopFields
struct NavDopFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::GDOP field.
    struct GDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavDopFields::GDOP field.
        static const char* name()
        {
            return "gDOP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::PDOP field.
    struct PDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavDopFields::PDOP field.
        static const char* name()
        {
            return "pDOP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::TDOP field.
    struct TDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavDopFields::TDOP field.
        static const char* name()
        {
            return "tDOP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::VDOP field.
    struct VDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavDopFields::VDOP field.
        static const char* name()
        {
            return "vDOP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::HDOP field.
    struct HDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavDopFields::HDOP field.
        static const char* name()
        {
            return "hDOP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::NDOP field.
    struct NDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavDopFields::NDOP field.
        static const char* name()
        {
            return "nDOP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavDopFields::EDOP field.
    struct EDOPCommon : public ublox::field::DopCommon
    {
        /// @brief Name of the @ref ublox::message::NavDopFields::EDOP field.
        static const char* name()
        {
            return "eDOP";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavDop message.
/// @see ublox::message::NavDop
struct NavDopCommon
{
    /// @brief Name of the @ref ublox::message::NavDop message.
    static const char* name()
    {
        return "NAV-DOP";
    }
    
};

} // namespace message

} // namespace ublox


