// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgDat message and its fields.

#pragma once

#include "ublox/field/CfgDatDCommon.h"
#include "ublox/field/CfgDatDatumNumCommon.h"
#include "ublox/field/CfgDatFlatCommon.h"
#include "ublox/field/CfgDatMajACommon.h"
#include "ublox/field/CfgDatRotCommon.h"
#include "ublox/field/CfgDatScaleCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgDat message.
/// @see ublox::message::CfgDatFields
struct CfgDatFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::DatumNum field.
    struct DatumNumCommon : public ublox::field::CfgDatDatumNumCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::DatumNum field.
        static const char* name()
        {
            return "datumNum";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgDatFields::DatumName field.
    struct DatumNameCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::DatumName field.
        static const char* name()
        {
            return "datumName";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::MajA field.
    struct MajACommon : public ublox::field::CfgDatMajACommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::MajA field.
        static const char* name()
        {
            return "majA";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::Flat field.
    struct FlatCommon : public ublox::field::CfgDatFlatCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::Flat field.
        static const char* name()
        {
            return "flat";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::DX field.
    struct DXCommon : public ublox::field::CfgDatDCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::DX field.
        static const char* name()
        {
            return "dX";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::DY field.
    struct DYCommon : public ublox::field::CfgDatDCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::DY field.
        static const char* name()
        {
            return "dY";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::DZ field.
    struct DZCommon : public ublox::field::CfgDatDCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::DZ field.
        static const char* name()
        {
            return "dZ";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::RotX field.
    struct RotXCommon : public ublox::field::CfgDatRotCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::RotX field.
        static const char* name()
        {
            return "rotX";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::RotY field.
    struct RotYCommon : public ublox::field::CfgDatRotCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::RotY field.
        static const char* name()
        {
            return "rotY";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::RotZ field.
    struct RotZCommon : public ublox::field::CfgDatRotCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::RotZ field.
        static const char* name()
        {
            return "rotZ";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgDatFields::Scale field.
    struct ScaleCommon : public ublox::field::CfgDatScaleCommon
    {
        /// @brief Name of the @ref ublox::message::CfgDatFields::Scale field.
        static const char* name()
        {
            return "scale";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgDat message.
/// @see ublox::message::CfgDat
struct CfgDatCommon
{
    /// @brief Name of the @ref ublox::message::CfgDat message.
    static const char* name()
    {
        return "CFG-DAT";
    }
    
};

} // namespace message

} // namespace ublox


