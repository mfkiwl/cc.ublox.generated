// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonMsgpp message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonMsgpp message.
/// @see ublox::message::MonMsgppFields
struct MonMsgppFieldsCommon
{
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonMsgppFields::Msg1 field.
    struct Msg1Common
    {
        /// @brief Name of the @ref ublox::message::MonMsgppFields::Msg1 field.
        static const char* name()
        {
            return "msg1";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonMsgppFields::Msg2 field.
    struct Msg2Common
    {
        /// @brief Name of the @ref ublox::message::MonMsgppFields::Msg2 field.
        static const char* name()
        {
            return "msg2";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonMsgppFields::Msg3 field.
    struct Msg3Common
    {
        /// @brief Name of the @ref ublox::message::MonMsgppFields::Msg3 field.
        static const char* name()
        {
            return "msg3";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonMsgppFields::Msg4 field.
    struct Msg4Common
    {
        /// @brief Name of the @ref ublox::message::MonMsgppFields::Msg4 field.
        static const char* name()
        {
            return "msg4";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonMsgppFields::Msg5 field.
    struct Msg5Common
    {
        /// @brief Name of the @ref ublox::message::MonMsgppFields::Msg5 field.
        static const char* name()
        {
            return "msg5";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonMsgppFields::Msg6 field.
    struct Msg6Common
    {
        /// @brief Name of the @ref ublox::message::MonMsgppFields::Msg6 field.
        static const char* name()
        {
            return "msg6";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonMsgppFields::Skipped list.
    struct SkippedMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonMsgppFields::SkippedMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::MonMsgppFields::SkippedMembers::Element field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::MonMsgppFields::SkippedMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonMsgppFields::Skipped field.
    struct SkippedCommon
    {
        /// @brief Name of the @ref ublox::message::MonMsgppFields::Skipped field.
        static const char* name()
        {
            return "skipped";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MonMsgpp message.
/// @see ublox::message::MonMsgpp
struct MonMsgppCommon
{
    /// @brief Name of the @ref ublox::message::MonMsgpp message.
    static const char* name()
    {
        return "MON-MSGPP";
    }
    
};

} // namespace message

} // namespace ublox


