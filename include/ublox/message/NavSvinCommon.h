// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::NavSvin message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/ItowCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::NavSvin message.
/// @see ublox::message::NavSvinFields
struct NavSvinFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res3Common
    {
        /// @brief Name of the @ref ublox::message::NavSvinFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Dur field.
    struct DurCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::Dur field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::Dur field.
        static const char* name()
        {
            return "dur";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::MeanX field.
    struct MeanXCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::MeanX field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::MeanX field.
        static const char* name()
        {
            return "meanX";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::MeanY field.
    struct MeanYCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::MeanY field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::MeanY field.
        static const char* name()
        {
            return "meanY";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::MeanZ field.
    struct MeanZCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::MeanZ field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::MeanZ field.
        static const char* name()
        {
            return "meanZ";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::MeanXHP field.
    struct MeanXHPCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::MeanXHP field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::MeanXHP field.
        static const char* name()
        {
            return "meanXHP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::MeanYHP field.
    struct MeanYHPCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::MeanYHP field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::MeanYHP field.
        static const char* name()
        {
            return "meanYHP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::MeanZHP field.
    struct MeanZHPCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::MeanZHP field.
        using ValueType = std::int8_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::MeanZHP field.
        static const char* name()
        {
            return "meanZHP";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::NavSvinFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::MeanAcc field.
    struct MeanAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::MeanAcc field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::MeanAcc field.
        static const char* name()
        {
            return "meanAcc";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Obs field.
    struct ObsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::Obs field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::Obs field.
        static const char* name()
        {
            return "obs";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Valid field.
    struct ValidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::Valid field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::Valid field.
        static const char* name()
        {
            return "valid";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Active field.
    struct ActiveCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::NavSvinFields::Active field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::NavSvinFields::Active field.
        static const char* name()
        {
            return "active";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::NavSvinFields::Reserved3 field.
    struct Reserved3Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::NavSvinFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::NavSvin message.
/// @see ublox::message::NavSvin
struct NavSvinCommon
{
    /// @brief Name of the @ref ublox::message::NavSvin message.
    static const char* name()
    {
        return "NAV-SVIN";
    }
    
};

} // namespace message

} // namespace ublox


