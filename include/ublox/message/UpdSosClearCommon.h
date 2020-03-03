// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::UpdSosClear message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::UpdSosClear message.
/// @see ublox::message::UpdSosClearFields
struct UpdSosClearFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosClearFields::Cmd field.
    struct CmdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::UpdSosClearFields::Cmd field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::UpdSosClearFields::Cmd field.
        static const char* name()
        {
            return "cmd";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosClearFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::UpdSosClearFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::UpdSosClear message.
/// @see ublox::message::UpdSosClear
struct UpdSosClearCommon
{
    /// @brief Name of the @ref ublox::message::UpdSosClear message.
    static const char* name()
    {
        return "UPD-SOS (Clear)";
    }
    
};

} // namespace message

} // namespace ublox


