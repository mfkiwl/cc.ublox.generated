// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPrtDdc message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/CfgPrtFlagsCommon.h"
#include "ublox/field/CfgPrtInProtoMaskCommon.h"
#include "ublox/field/CfgPrtOutProtoMaskCommon.h"
#include "ublox/field/CfgPrtTxReadyCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPrtDdc message.
/// @see ublox::message::CfgPrtDdcFields
struct CfgPrtDdcFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::PortId field.
    struct PortIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPrtDdcFields::PortId field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::PortId field.
        static const char* name()
        {
            return "portId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for members of
    ///     @ref ublox::message::CfgPrtDdcFields::TxReady field.
    using TxReadyMembersCommon = ublox::field::CfgPrtTxReadyMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::TxReady field.
    struct TxReadyCommon : public ublox::field::CfgPrtTxReadyCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::TxReady field.
        static const char* name()
        {
            return "txReady";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgPrtDdcFields::Mode field.
    struct ModeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtDdcFields::ModeMembers::ReservedLow field.
        struct ReservedLowCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtDdcFields::ModeMembers::ReservedLow field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::ModeMembers::ReservedLow field.
            static const char* name()
            {
                return "reservedLow";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtDdcFields::ModeMembers::SlaveAddr field.
        struct SlaveAddrCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtDdcFields::ModeMembers::SlaveAddr field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::ModeMembers::SlaveAddr field.
            static const char* name()
            {
                return "slaveAddr";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtDdcFields::ModeMembers::ReservedHigh field.
        struct ReservedHighCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtDdcFields::ModeMembers::ReservedHigh field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::ModeMembers::ReservedHigh field.
            static const char* name()
            {
                return "reservedHigh";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgPrtDdcFields::Mode field.
    struct ModeCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::Mode field.
        static const char* name()
        {
            return "mode";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::InProtoMask field.
    struct InProtoMaskCommon : public ublox::field::CfgPrtInProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::InProtoMask field.
        static const char* name()
        {
            return "inProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::OutProtoMask field.
    struct OutProtoMaskCommon : public ublox::field::CfgPrtOutProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::OutProtoMask field.
        static const char* name()
        {
            return "outProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::CfgPrtFlags field.
    using CfgPrtFlagsCommon = ublox::field::CfgPrtFlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtDdcFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtDdcFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPrtDdc message.
/// @see ublox::message::CfgPrtDdc
struct CfgPrtDdcCommon
{
    /// @brief Name of the @ref ublox::message::CfgPrtDdc message.
    static const char* name()
    {
        return "CFG-PRT (DDC)";
    }
    
};

} // namespace message

} // namespace ublox


