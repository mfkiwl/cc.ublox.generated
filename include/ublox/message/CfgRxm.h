// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"CFG-RXM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/message/CfgRxmCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgRxm.
/// @tparam TOpt Extra options
/// @see @ref CfgRxm
/// @headerfile "ublox/message/CfgRxm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgRxmFields
{
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgRxmFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"lpMode"</b> field.
    /// @see @ref ublox::message::CfgRxmFieldsCommon::LpModeVal
    class LpMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgRxmFieldsCommon::LpModeVal,
            comms::option::def::ValidNumValueRange<0, 1>,
            comms::option::def::ValidNumValue<4>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgRxmFieldsCommon::LpModeVal,
                comms::option::def::ValidNumValueRange<0, 1>,
                comms::option::def::ValidNumValue<4>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgRxmFieldsCommon::LpModeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgRxmFieldsCommon::LpModeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Reserved1,
        LpMode
    >;
};

/// @brief Definition of <b>"CFG-RXM"</b> message class.
/// @details
///     See @ref CfgRxmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgRxm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgRxm : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRxm>,
        comms::option::def::FieldsImpl<typename CfgRxmFields<TOpt>::All>,
        comms::option::def::MsgType<CfgRxm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRxm>,
            comms::option::def::FieldsImpl<typename CfgRxmFields<TOpt>::All>,
            comms::option::def::MsgType<CfgRxm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref CfgRxmFields::Reserved1 field.
    ///     @li @b Field_lpMode type and @b field_lpMode() fuction
    ///         for @ref CfgRxmFields::LpMode field.
    COMMS_MSG_FIELDS_NAMES(
        reserved1,
        lpMode
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgRxmCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


