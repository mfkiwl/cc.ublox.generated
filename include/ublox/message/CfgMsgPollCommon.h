// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgMsgPoll message and its fields.

#pragma once

#include "ublox/field/MsgIdCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgMsgPoll message.
/// @see ublox::message::CfgMsgPollFields
struct CfgMsgPollFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgMsgPollFields::MsgId field.
    using MsgIdCommon = ublox::field::MsgIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgMsgPoll message.
/// @see ublox::message::CfgMsgPoll
struct CfgMsgPollCommon
{
    /// @brief Name of the @ref ublox::message::CfgMsgPoll message.
    static const char* name()
    {
        return "CFG-MSG (Poll)";
    }
    
};

} // namespace message

} // namespace ublox


