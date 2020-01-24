// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::AidAlpData message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::AidAlpData message.
/// @see ublox::message::AidAlpDataFields
struct AidAlpDataFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::AidAlpDataFields::AlpData list.
    struct AlpDataMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::AidAlpDataFields::AlpDataMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::AidAlpDataFields::AlpDataMembers::Element field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref ublox::message::AidAlpDataFields::AlpDataMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::AidAlpDataFields::AlpData field.
    struct AlpDataCommon
    {
        /// @brief Name of the @ref ublox::message::AidAlpDataFields::AlpData field.
        static const char* name()
        {
            return "alpData";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::AidAlpData message.
/// @see ublox::message::AidAlpData
struct AidAlpDataCommon
{
    /// @brief Name of the @ref ublox::message::AidAlpData message.
    static const char* name()
    {
        return "AID-ALP (Data)";
    }
    
};

} // namespace message

} // namespace ublox


