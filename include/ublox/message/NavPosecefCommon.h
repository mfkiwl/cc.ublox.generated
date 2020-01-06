// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavPosecef message and its fields.

#pragma once

#include "ublox/field/EcefXCommon.h"
#include "ublox/field/EcefYCommon.h"
#include "ublox/field/EcefZCommon.h"
#include "ublox/field/ItowCommon.h"
#include "ublox/field/PAccCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavPosecef message.
/// @see ublox::message::NavPosecefFields
struct NavPosecefFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosecefFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosecefFields::EcefX field.
    using EcefXCommon = ublox::field::EcefXCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosecefFields::EcefY field.
    using EcefYCommon = ublox::field::EcefYCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosecefFields::EcefZ field.
    using EcefZCommon = ublox::field::EcefZCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavPosecefFields::PAcc field.
    using PAccCommon = ublox::field::PAccCommon;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavPosecef message.
/// @see ublox::message::NavPosecef
struct NavPosecefCommon
{
    /// @brief Name of the @ref ublox::message::NavPosecef message.
    static const char* name()
    {
        return "NAV-POSECEF";
    }
    
};

} // namespace message

} // namespace ublox


