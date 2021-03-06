// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    fields used in definition of @ref ublox::frame::UbloxFrame frame.

#pragma once

#include <cstdint>
#include "ublox/field/MsgIdCommon.h"

namespace ublox
{

namespace frame
{

/// @brief Common types and functions of fields using in definition of
///     @ref ublox::frame::UbloxFrame frame.
/// @see ublox::frame::UbloxFrameLayers
struct UbloxFrameLayersCommon
{
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref ublox::frame::UbloxFrameLayers::SyncMembers struct.
    struct SyncMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::frame::UbloxFrameLayers::SyncMembers::Sync field.
        struct SyncCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::frame::UbloxFrameLayers::SyncMembers::Sync field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref ublox::frame::UbloxFrameLayers::SyncMembers::Sync field.
            static const char* name()
            {
                return "SYNC";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref ublox::frame::UbloxFrameLayers::ChecksumMembers struct.
    struct ChecksumMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::frame::UbloxFrameLayers::ChecksumMembers::Checksum field.
        struct ChecksumCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::frame::UbloxFrameLayers::ChecksumMembers::Checksum field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref ublox::frame::UbloxFrameLayers::ChecksumMembers::Checksum field.
            static const char* name()
            {
                return "CK";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref ublox::frame::UbloxFrameLayers::IdMembers struct.
    struct IdMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::frame::UbloxFrameLayers::IdMembers::MsgId field.
        struct MsgIdCommon : public ublox::field::MsgIdCommon
        {
            /// @brief Name of the @ref ublox::frame::UbloxFrameLayers::IdMembers::MsgId field.
            static const char* name()
            {
                return "CLASS + ID";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref ublox::frame::UbloxFrameLayers::LengthMembers struct.
    struct LengthMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::frame::UbloxFrameLayers::LengthMembers::LENGTH field.
        struct LENGTHCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::frame::UbloxFrameLayers::LengthMembers::LENGTH field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref ublox::frame::UbloxFrameLayers::LengthMembers::LENGTH field.
            static const char* name()
            {
                return "LENGTH";
            }
            
        };
        
    };
    
};
} // namespace frame

} // namespace ublox


