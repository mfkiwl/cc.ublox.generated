// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavVelecef message and its fields.

#pragma once

#include "ublox/field/EcefVXCommon.h"
#include "ublox/field/EcefVYCommon.h"
#include "ublox/field/EcefVZCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/SAccCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavVelecef message.
/// @see ublox::message::NavVelecefFields
struct NavVelecefFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelecefFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelecefFields::EcefVX field.
    using EcefVXCommon = ublox::field::EcefVXCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelecefFields::EcefVY field.
    using EcefVYCommon = ublox::field::EcefVYCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelecefFields::EcefVZ field.
    using EcefVZCommon = ublox::field::EcefVZCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavVelecefFields::SAcc field.
    using SAccCommon = ublox::field::SAccCommon;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavVelecef message.
/// @see ublox::message::NavVelecef
struct NavVelecefCommon
{
    /// @brief Name of the @ref ublox::message::NavVelecef message.
    static const char* name()
    {
        return "NAV-VELECEF";
    }
    
};

} // namespace message

} // namespace ublox


