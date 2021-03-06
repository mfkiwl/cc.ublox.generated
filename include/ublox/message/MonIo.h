// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"MON-IO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/message/MonIoCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonIo.
/// @tparam TOpt Extra options
/// @see @ref MonIo
/// @headerfile "ublox/message/MonIo.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonIoFields
{
    /// @brief Scope for all the member fields of
    ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of
        ///     @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"rxBytes"</b> field.
            struct RxBytes : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::RxBytesCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"txBytes"</b> field.
            struct TxBytes : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::TxBytesCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"parityErrs"</b> field.
            struct ParityErrs : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::ParityErrsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"framingErrs"</b> field.
            struct FramingErrs : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::FramingErrsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"overrunErrs"</b> field.
            struct OverrunErrs : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::OverrunErrsCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"breakCond"</b> field.
            struct BreakCond : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::BreakCondCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"rxBusy"</b> field.
            struct RxBusy : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::RxBusyCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"txBusy"</b> field.
            struct TxBusy : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::TxBusyCommon::name();
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
                    return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved1Common::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   RxBytes,
                   TxBytes,
                   ParityErrs,
                   FramingErrs,
                   OverrunErrs,
                   BreakCond,
                   RxBusy,
                   TxBusy,
                   Reserved1
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access types and functions functions are:
            ///     @li @b Field_rxBytestype and @b field_rxBytes() access function -
            ///         for ElementMembers::RxBytes member field.
            ///     @li @b Field_txBytestype and @b field_txBytes() access function -
            ///         for ElementMembers::TxBytes member field.
            ///     @li @b Field_parityErrstype and @b field_parityErrs() access function -
            ///         for ElementMembers::ParityErrs member field.
            ///     @li @b Field_framingErrstype and @b field_framingErrs() access function -
            ///         for ElementMembers::FramingErrs member field.
            ///     @li @b Field_overrunErrstype and @b field_overrunErrs() access function -
            ///         for ElementMembers::OverrunErrs member field.
            ///     @li @b Field_breakCondtype and @b field_breakCond() access function -
            ///         for ElementMembers::BreakCond member field.
            ///     @li @b Field_rxBusytype and @b field_rxBusy() access function -
            ///         for ElementMembers::RxBusy member field.
            ///     @li @b Field_txBusytype and @b field_txBusy() access function -
            ///         for ElementMembers::TxBusy member field.
            ///     @li @b Field_reserved1type and @b field_reserved1() access function -
            ///         for ElementMembers::Reserved1 member field.
            COMMS_FIELD_MEMBERS_NAMES(
                rxBytes,
                txBytes,
                parityErrs,
                framingErrs,
                overrunErrs,
                breakCond,
                rxBusy,
                txBusy,
                reserved1
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::MonIoFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::MonIoFields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MonIoFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        List
    >;
};

/// @brief Definition of <b>"MON-IO"</b> message class.
/// @details
///     See @ref MonIoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonIo.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonIo : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonIo,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonIo>,
        comms::option::def::FieldsImpl<typename MonIoFields<TOpt>::All>,
        comms::option::def::MsgType<MonIo<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonIo,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonIo>,
            comms::option::def::FieldsImpl<typename MonIoFields<TOpt>::All>,
            comms::option::def::MsgType<MonIo<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_list type and @b field_list() access fuction
    ///         for @ref MonIoFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MonIoCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


