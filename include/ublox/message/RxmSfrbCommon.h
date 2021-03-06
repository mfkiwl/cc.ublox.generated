// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmSfrb message and its fields.

#pragma once

#include <cstdint>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmSfrb message.
/// @see ublox::message::RxmSfrbFields
struct RxmSfrbFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbFields::Cno field.
    struct CnoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSfrbFields::Cno field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSfrbFields::Cno field.
        static const char* name()
        {
            return "cno";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSfrbFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSfrbFields::Svid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSfrbFields::Svid field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmSfrbFields::Dwrd list.
    struct DwrdMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::RxmSfrbFields::DwrdMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::RxmSfrbFields::DwrdMembers::Element field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::RxmSfrbFields::DwrdMembers::Element field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmSfrbFields::Dwrd field.
    struct DwrdCommon
    {
        /// @brief Name of the @ref ublox::message::RxmSfrbFields::Dwrd field.
        static const char* name()
        {
            return "dwrd";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmSfrb message.
/// @see ublox::message::RxmSfrb
struct RxmSfrbCommon
{
    /// @brief Name of the @ref ublox::message::RxmSfrb message.
    static const char* name()
    {
        return "RXM-SFRB";
    }
    
};

} // namespace message

} // namespace ublox


