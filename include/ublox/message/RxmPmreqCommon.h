// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmPmreq message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmPmreq message.
/// @see ublox::message::RxmPmreqFields
struct RxmPmreqFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmPmreqFields::Duration field.
    struct DurationCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmPmreqFields::Duration field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::RxmPmreqFields::Duration field.
        static const char* name()
        {
            return "duration";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::RxmPmreqFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::RxmPmreqFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::RxmPmreqFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "backup"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmPmreq message.
/// @see ublox::message::RxmPmreq
struct RxmPmreqCommon
{
    /// @brief Name of the @ref ublox::message::RxmPmreq message.
    static const char* name()
    {
        return "RXM-PMREQ";
    }
    
};

} // namespace message

} // namespace ublox


