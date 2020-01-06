// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MgaIniPosXyz message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/EcefXCommon.h"
#include "ublox/field/EcefYCommon.h"
#include "ublox/field/EcefZCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MgaIniPosXyz message.
/// @see ublox::message::MgaIniPosXyzFields
struct MgaIniPosXyzFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniPosXyzFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniPosXyzFields::Type field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniPosXyzFields::Type field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniPosXyzFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniPosXyzFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniPosXyzFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniPosXyzFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MgaIniPosXyzFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniPosXyzFields::EcefX field.
    using EcefXCommon = ublox::field::EcefXCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniPosXyzFields::EcefY field.
    using EcefYCommon = ublox::field::EcefYCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniPosXyzFields::EcefZ field.
    using EcefZCommon = ublox::field::EcefZCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MgaIniPosXyzFields::PosAcc field.
    struct PosAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MgaIniPosXyzFields::PosAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::MgaIniPosXyzFields::PosAcc field.
        static const char* name()
        {
            return "posAcc";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MgaIniPosXyz message.
/// @see ublox::message::MgaIniPosXyz
struct MgaIniPosXyzCommon
{
    /// @brief Name of the @ref ublox::message::MgaIniPosXyz message.
    static const char* name()
    {
        return "MGA-BDS-POS_XYZ";
    }
    
};

} // namespace message

} // namespace ublox


