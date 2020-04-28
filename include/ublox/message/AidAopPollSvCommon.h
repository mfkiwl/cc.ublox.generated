// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAopPollSv message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAopPollSv message.
/// @see ublox::message::AidAopPollSvFields
struct AidAopPollSvFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidAopPollSvFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidAopPollSvFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidAopPollSvFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAopPollSv message.
/// @see ublox::message::AidAopPollSv
struct AidAopPollSvCommon
{
    /// @brief Name of the @ref ublox::message::AidAopPollSv message.
    static const char* name()
    {
        return "AID-AOP (Poll SV)";
    }
    
};

} // namespace message

} // namespace ublox


