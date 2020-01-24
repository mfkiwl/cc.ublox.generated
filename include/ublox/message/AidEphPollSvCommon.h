// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidEphPollSv message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidEphPollSv message.
/// @see ublox::message::AidEphPollSvFields
struct AidEphPollSvFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::AidEphPollSvFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::AidEphPollSvFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::AidEphPollSvFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidEphPollSv message.
/// @see ublox::message::AidEphPollSv
struct AidEphPollSvCommon
{
    /// @brief Name of the @ref ublox::message::AidEphPollSv message.
    static const char* name()
    {
        return "AID-EPH (Poll SV)";
    }
    
};

} // namespace message

} // namespace ublox


