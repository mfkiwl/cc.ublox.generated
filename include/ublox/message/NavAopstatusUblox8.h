// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"NAV-AOPSTATUS (ublox-8)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/NavAopstatusUblox8Common.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavAopstatusUblox8.
/// @tparam TOpt Extra options
/// @see @ref NavAopstatusUblox8
/// @headerfile "ublox/message/NavAopstatusUblox8.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavAopstatusUblox8Fields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"aopCfg"</b> field.
    class AopCfg : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_useAOP, @b getBitValue_useAOP() and @b setBitValue_useAOP().
        COMMS_BITMASK_BITS_SEQ(
            useAOP
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAopstatusUblox8FieldsCommon::AopCfgCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavAopstatusUblox8FieldsCommon::AopCfgCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"status"</b> field.
    struct Status : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAopstatusUblox8FieldsCommon::StatusCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAopstatusUblox8FieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAopstatusUblox8FieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavAopstatusUblox8FieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        AopCfg,
        Status,
        Reserved1,
        Reserved2,
        Reserved3
    >;
};

/// @brief Definition of <b>"NAV-AOPSTATUS (ublox-8)"</b> message class.
/// @details
///     See @ref NavAopstatusUblox8Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavAopstatusUblox8.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavAopstatusUblox8 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavAopstatusUblox8,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAopstatus>,
        comms::option::def::FieldsImpl<typename NavAopstatusUblox8Fields<TOpt>::All>,
        comms::option::def::MsgType<NavAopstatusUblox8<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavAopstatusUblox8,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAopstatus>,
            comms::option::def::FieldsImpl<typename NavAopstatusUblox8Fields<TOpt>::All>,
            comms::option::def::MsgType<NavAopstatusUblox8<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_itow type and @b field_itow() fuction
    ///         for @ref NavAopstatusUblox8Fields::Itow field.
    ///     @li @b Field_aopCfg type and @b field_aopCfg() fuction
    ///         for @ref NavAopstatusUblox8Fields::AopCfg field.
    ///     @li @b Field_status type and @b field_status() fuction
    ///         for @ref NavAopstatusUblox8Fields::Status field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref NavAopstatusUblox8Fields::Reserved1 field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref NavAopstatusUblox8Fields::Reserved2 field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() fuction
    ///         for @ref NavAopstatusUblox8Fields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        aopCfg,
        status,
        reserved1,
        reserved2,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavAopstatusUblox8Common::name();
    }
    
    
};

} // namespace message

} // namespace ublox


