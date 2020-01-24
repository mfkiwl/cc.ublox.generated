// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::InfWarning message and its fields.

#pragma once

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::InfWarning message.
/// @see ublox::message::InfWarningFields
struct InfWarningFieldsCommon
{
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::InfWarningFields::Str field.
    struct StrCommon
    {
        /// @brief Name of the @ref ublox::message::InfWarningFields::Str field.
        static const char* name()
        {
            return "str";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::InfWarning message.
/// @see ublox::message::InfWarning
struct InfWarningCommon
{
    /// @brief Name of the @ref ublox::message::InfWarning message.
    static const char* name()
    {
        return "INF-WARNING";
    }
    
};

} // namespace message

} // namespace ublox


