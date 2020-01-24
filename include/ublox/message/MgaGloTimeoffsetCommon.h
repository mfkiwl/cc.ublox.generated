// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGloTimeoffset message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGloTimeoffset message.
/// @see ublox::message::MgaGloTimeoffsetFields
struct MgaGloTimeoffsetFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloTimeoffsetFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloTimeoffsetFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::N field.
    struct NCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloTimeoffsetFields::N field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::N field.
        static const char* name()
        {
            return "N";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::TauC field.
    struct TauCCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloTimeoffsetFields::TauC field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::TauC field.
        static const char* name()
        {
            return "tauC";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::TauGps field.
    struct TauGpsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloTimeoffsetFields::TauGps field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::TauGps field.
        static const char* name()
        {
            return "tauGps";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::B1 field.
    struct B1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloTimeoffsetFields::B1 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::B1 field.
        static const char* name()
        {
            return "B1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::B2 field.
    struct B2Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGloTimeoffsetFields::B2 field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::B2 field.
        static const char* name()
        {
            return "B2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGloTimeoffsetFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::MgaGloTimeoffsetFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGloTimeoffset message.
/// @see ublox::message::MgaGloTimeoffset
struct MgaGloTimeoffsetCommon
{
    /// @brief Name of the @ref ublox::message::MgaGloTimeoffset message.
    static const char* name()
    {
        return "MGA-GLO-TIMEOFFSET";
    }
    
};

} // namespace message

} // namespace ublox


