// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"CFG-RATE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/CfgRateCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgRate.
/// @tparam TOpt Extra options
/// @see @ref CfgRate
/// @headerfile "ublox/message/CfgRate.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgRateFields
{
    /// @brief Definition of <b>"measRate"</b> field.
    struct MeasRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgRateFieldsCommon::MeasRateCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"navRate"</b> field.
    struct NavRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgRateFieldsCommon::NavRateCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"timeRef"</b> field.
    /// @see @ref ublox::message::CfgRateFieldsCommon::TimeRefVal
    class TimeRef : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgRateFieldsCommon::TimeRefVal,
            comms::option::def::ValidNumValueRange<0, 4>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgRateFieldsCommon::TimeRefVal,
                comms::option::def::ValidNumValueRange<0, 4>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgRateFieldsCommon::TimeRefCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgRateFieldsCommon::TimeRefCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MeasRate,
        NavRate,
        TimeRef
    >;
};

/// @brief Definition of <b>"CFG-RATE"</b> message class.
/// @details
///     See @ref CfgRateFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgRate.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgRate : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRate>,
        comms::option::def::FieldsImpl<typename CfgRateFields<TOpt>::All>,
        comms::option::def::MsgType<CfgRate<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRate>,
            comms::option::def::FieldsImpl<typename CfgRateFields<TOpt>::All>,
            comms::option::def::MsgType<CfgRate<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_measRate type and @b field_measRate() fuction
    ///         for @ref CfgRateFields::MeasRate field.
    ///     @li @b Field_navRate type and @b field_navRate() fuction
    ///         for @ref CfgRateFields::NavRate field.
    ///     @li @b Field_timeRef type and @b field_timeRef() fuction
    ///         for @ref CfgRateFields::TimeRef field.
    COMMS_MSG_FIELDS_NAMES(
        measRate,
        navRate,
        timeRef
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 6U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgRateCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


