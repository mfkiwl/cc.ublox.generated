// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmRlmLong message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmRlmLong message.
/// @see ublox::message::RxmRlmLongFields
struct RxmRlmLongFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmLongFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmLongFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmLongFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmLongFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmLongFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmLongFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmLongFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmRlmLongFields::Beacon field.
    struct BeaconCommon
    {
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Beacon field.
        static const char* name()
        {
            return "beacon";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmLongFields::Message field.
    struct MessageCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmRlmLongFields::Message field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Message field.
        static const char* name()
        {
            return "message";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmRlmLongFields::Params field.
    struct ParamsCommon
    {
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Params field.
        static const char* name()
        {
            return "params";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmRlmLongFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::RxmRlmLongFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmRlmLong message.
/// @see ublox::message::RxmRlmLong
struct RxmRlmLongCommon
{
    /// @brief Name of the @ref ublox::message::RxmRlmLong message.
    static const char* name()
    {
        return "RXM-RLM (Long)";
    }
    
};

} // namespace message

} // namespace ublox


