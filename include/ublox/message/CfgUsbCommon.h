// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgUsb message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgUsb message.
/// @see ublox::message::CfgUsbFields
struct CfgUsbFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgUsbFields::VendorId field.
    struct VendorIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgUsbFields::VendorId field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgUsbFields::VendorId field.
        static const char* name()
        {
            return "vendorId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgUsbFields::ProductId field.
    struct ProductIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgUsbFields::ProductId field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgUsbFields::ProductId field.
        static const char* name()
        {
            return "productId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgUsbFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgUsbFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgUsbFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgUsbFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgUsbFields::PowerConsumption field.
    struct PowerConsumptionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgUsbFields::PowerConsumption field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgUsbFields::PowerConsumption field.
        static const char* name()
        {
            return "powerConsumption";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgUsbFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgUsbFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgUsbFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "reEnum",
                "powerMode"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgUsbFields::VendorString field.
    struct VendorStringCommon
    {
        /// @brief Name of the @ref ublox::message::CfgUsbFields::VendorString field.
        static const char* name()
        {
            return "vendorString";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgUsbFields::ProductString field.
    struct ProductStringCommon
    {
        /// @brief Name of the @ref ublox::message::CfgUsbFields::ProductString field.
        static const char* name()
        {
            return "productString";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgUsbFields::SerialNumber field.
    struct SerialNumberCommon
    {
        /// @brief Name of the @ref ublox::message::CfgUsbFields::SerialNumber field.
        static const char* name()
        {
            return "serialNumber";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgUsb message.
/// @see ublox::message::CfgUsb
struct CfgUsbCommon
{
    /// @brief Name of the @ref ublox::message::CfgUsb message.
    static const char* name()
    {
        return "CFG-USB";
    }
    
};

} // namespace message

} // namespace ublox


