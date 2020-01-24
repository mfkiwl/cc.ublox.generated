// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::UpdSosAck message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::UpdSosAck message.
/// @see ublox::message::UpdSosAckFields
struct UpdSosAckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosAckFields::Cmd field.
    struct CmdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::UpdSosAckFields::Cmd field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::UpdSosAckFields::Cmd field.
        static const char* name()
        {
            return "cmd";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosAckFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::UpdSosAckFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosAckFields::Response field.
    struct ResponseCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::UpdSosAckFields::Response field.
        enum class ValueType : std::uint8_t
        {
            NotAcknowledged = 0, ///< value @b NotAcknowledged
            Acknowledged = 1, ///< value @b Acknowledged
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::UpdSosAckFields::Response field.
        static const char* name()
        {
            return "response";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "NotAcknowledged",
                "Acknowledged"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::UpdSosAckFields::Response field.
    using ResponseVal = ResponseCommon::ValueType;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::UpdSosAckFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::UpdSosAckFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::UpdSosAck message.
/// @see ublox::message::UpdSosAck
struct UpdSosAckCommon
{
    /// @brief Name of the @ref ublox::message::UpdSosAck message.
    static const char* name()
    {
        return "UPD-SOS (Ack)";
    }
    
};

} // namespace message

} // namespace ublox

