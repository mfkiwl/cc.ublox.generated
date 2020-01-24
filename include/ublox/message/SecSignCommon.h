// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::SecSign message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/MsgIdCommon.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::SecSign message.
/// @see ublox::message::SecSignFields
struct SecSignFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::SecSignFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::SecSignFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::SecSignFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::SecSignFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::SecSignFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::SecSignFields::MsgId field.
    struct MsgIdCommon : public ublox::field::MsgIdCommon
    {
        /// @brief Name of the @ref ublox::message::SecSignFields::MsgId field.
        static const char* name()
        {
            return "msgId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::SecSignFields::Checksum field.
    struct ChecksumCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::SecSignFields::Checksum field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::SecSignFields::Checksum field.
        static const char* name()
        {
            return "checksum";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::SecSignFields::Hash field.
    struct HashCommon
    {
        /// @brief Name of the @ref ublox::message::SecSignFields::Hash field.
        static const char* name()
        {
            return "hash";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::SecSign message.
/// @see ublox::message::SecSign
struct SecSignCommon
{
    /// @brief Name of the @ref ublox::message::SecSign message.
    static const char* name()
    {
        return "SEC-SIGN";
    }
    
};

} // namespace message

} // namespace ublox


