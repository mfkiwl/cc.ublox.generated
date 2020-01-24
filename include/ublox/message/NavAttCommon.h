// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavAtt message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavAtt message.
/// @see ublox::message::NavAttFields
struct NavAttFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAttFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavAttFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::NavAttFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::Roll field.
    struct RollCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAttFields::Roll field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavAttFields::Roll field.
        static const char* name()
        {
            return "roll";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::Pitch field.
    struct PitchCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAttFields::Pitch field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavAttFields::Pitch field.
        static const char* name()
        {
            return "pitch";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::Heading field.
    struct HeadingCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAttFields::Heading field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavAttFields::Heading field.
        static const char* name()
        {
            return "heading";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::AccRoll field.
    struct AccRollCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAttFields::AccRoll field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavAttFields::AccRoll field.
        static const char* name()
        {
            return "accRoll";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::AccPitch field.
    struct AccPitchCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAttFields::AccPitch field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavAttFields::AccPitch field.
        static const char* name()
        {
            return "accPitch";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavAttFields::AccHeading field.
    struct AccHeadingCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavAttFields::AccHeading field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavAttFields::AccHeading field.
        static const char* name()
        {
            return "accHeading";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavAtt message.
/// @see ublox::message::NavAtt
struct NavAttCommon
{
    /// @brief Name of the @ref ublox::message::NavAtt message.
    static const char* name()
    {
        return "NAV-ATT";
    }
    
};

} // namespace message

} // namespace ublox


