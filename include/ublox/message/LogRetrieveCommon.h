// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::LogRetrieve message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::LogRetrieve message.
/// @see ublox::message::LogRetrieveFields
struct LogRetrieveFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveFields::StartNumber field.
    struct StartNumberCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveFields::StartNumber field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveFields::StartNumber field.
        static const char* name()
        {
            return "startNumber";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveFields::EntryCount field.
    struct EntryCountCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveFields::EntryCount field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveFields::EntryCount field.
        static const char* name()
        {
            return "entryCount";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::LogRetrieveFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::LogRetrieveFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::LogRetrieveFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::LogRetrieveFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::LogRetrieve message.
/// @see ublox::message::LogRetrieve
struct LogRetrieveCommon
{
    /// @brief Name of the @ref ublox::message::LogRetrieve message.
    static const char* name()
    {
        return "LOG-RETRIEVE";
    }
    
};

} // namespace message

} // namespace ublox


