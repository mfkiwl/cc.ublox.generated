// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaGalUtc message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaGalUtc message.
/// @see ublox::message::MgaGalUtcFields
struct MgaGalUtcFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::A0 field.
    struct A0Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::A0 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::A0 field.
        static const char* name()
        {
            return "a0";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::A1 field.
    struct A1Common
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::A1 field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::A1 field.
        static const char* name()
        {
            return "a1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::DtLS field.
    struct DtLSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::DtLS field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::DtLS field.
        static const char* name()
        {
            return "dtLS";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::Tot field.
    struct TotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::Tot field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::Tot field.
        static const char* name()
        {
            return "tot";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::Wnt field.
    struct WntCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::Wnt field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::Wnt field.
        static const char* name()
        {
            return "wnt";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::WnLSF field.
    struct WnLSFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::WnLSF field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::WnLSF field.
        static const char* name()
        {
            return "wnLSF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::DN field.
    struct DNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::DN field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::DN field.
        static const char* name()
        {
            return "dN";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::DTLSF field.
    struct DTLSFCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaGalUtcFields::DTLSF field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::DTLSF field.
        static const char* name()
        {
            return "dTLSF";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaGalUtcFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaGalUtcFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaGalUtc message.
/// @see ublox::message::MgaGalUtc
struct MgaGalUtcCommon
{
    /// @brief Name of the @ref ublox::message::MgaGalUtc message.
    static const char* name()
    {
        return "MGA-GAL-UTC";
    }
    
};

} // namespace message

} // namespace ublox


