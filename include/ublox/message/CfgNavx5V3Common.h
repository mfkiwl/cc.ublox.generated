// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgNavx5V3 message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/CfgNavx5AopCfgCommon.h"
#include "ublox/field/CfgNavx5AopOrbMaxErrCommon.h"
#include "ublox/field/CfgNavx5Mask1Common.h"
#include "ublox/field/CfgNavx5Mask2Common.h"
#include "ublox/field/CfgNavx5SigAttenCompModeCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgNavx5V3 message.
/// @see ublox::message::CfgNavx5V3Fields
struct CfgNavx5V3FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::Version field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Mask1 field.
    using Mask1Common = ublox::field::CfgNavx5Mask1Common;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Mask2 field.
    using Mask2Common = ublox::field::CfgNavx5Mask2Common;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::MinSVs field.
    struct MinSVsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::MinSVs field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::MinSVs field.
        static const char* name()
        {
            return "minSVs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::MaxSVs field.
    struct MaxSVsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::MaxSVs field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::MaxSVs field.
        static const char* name()
        {
            return "maxSVs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::MinCNO field.
    struct MinCNOCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::MinCNO field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::MinCNO field.
        static const char* name()
        {
            return "minCNO";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::IniFix3D field.
    struct IniFix3DCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::IniFix3D field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::IniFix3D field.
        static const char* name()
        {
            return "iniFix3D";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::AckAiding field.
    struct AckAidingCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::AckAiding field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::AckAiding field.
        static const char* name()
        {
            return "ackAiding";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::WknRollover field.
    struct WknRolloverCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::WknRollover field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::WknRollover field.
        static const char* name()
        {
            return "wknRollover";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::SigAttenCompMode field.
    using SigAttenCompModeCommon = ublox::field::CfgNavx5SigAttenCompModeCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved4 field.
    struct Reserved4Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved4 field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved5 field.
    struct Reserved5Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved5 field.
        static const char* name()
        {
            return "reserved5";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved6 field.
    struct Reserved6Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved6 field.
        static const char* name()
        {
            return "reserved6";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::UsePPP field.
    struct UsePPPCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::UsePPP field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::UsePPP field.
        static const char* name()
        {
            return "usePPP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::AopCfg field.
    using AopCfgCommon = ublox::field::CfgNavx5AopCfgCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved7 field.
    struct Reserved7Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved7 field.
        static const char* name()
        {
            return "reserved7";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::AopOrbMaxErr field.
    using AopOrbMaxErrCommon = ublox::field::CfgNavx5AopOrbMaxErrCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved8 field.
    struct Reserved8Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved8 field.
        static const char* name()
        {
            return "reserved8";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved9 field.
    struct Reserved9Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved9 field.
        static const char* name()
        {
            return "reserved9";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::UseAdr field.
    struct UseAdrCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgNavx5V3Fields::UseAdr field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::UseAdr field.
        static const char* name()
        {
            return "useAdr";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved10 field.
    struct Reserved10Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved10 field.
        static const char* name()
        {
            return "reserved10";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgNavx5V3Fields::Reserved11 field.
    struct Reserved11Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgNavx5V3Fields::Reserved11 field.
        static const char* name()
        {
            return "reserved11";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgNavx5V3 message.
/// @see ublox::message::CfgNavx5V3
struct CfgNavx5V3Common
{
    /// @brief Name of the @ref ublox::message::CfgNavx5V3 message.
    static const char* name()
    {
        return "CFG-NAVX5";
    }
    
};

} // namespace message

} // namespace ublox


