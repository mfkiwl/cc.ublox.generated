// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"TIM-VRFY"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res1.h"
#include "ublox/message/TimVrfyCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimVrfy.
/// @tparam TOpt Extra options
/// @see @ref TimVrfy
/// @headerfile "ublox/message/TimVrfy.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimVrfyFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"frac"</b> field.
    struct Frac : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVrfyFieldsCommon::FracCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deltaMs"</b> field.
    struct DeltaMs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVrfyFieldsCommon::DeltaMsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deltaNs"</b> field.
    struct DeltaNs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVrfyFieldsCommon::DeltaNsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"wno"</b> field.
    struct Wno : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVrfyFieldsCommon::WnoCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>"src"</b> field.
        /// @see @ref ublox::message::TimVrfyFieldsCommon::FlagsMembersCommon::SrcVal
        class Src : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::TimVrfyFieldsCommon::FlagsMembersCommon::SrcVal,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::TimVrfyFieldsCommon::FlagsMembersCommon::SrcVal,
                    comms::option::def::FixedBitLength<3U>,
                    comms::option::def::ValidNumValueRange<0, 2>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::TimVrfyFieldsCommon::FlagsMembersCommon::SrcCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::TimVrfyFieldsCommon::FlagsMembersCommon::SrcCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>"reserved"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct Reserved : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<5U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::TimVrfyFieldsCommon::FlagsMembersCommon::ReservedCommon::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Src,
               Reserved
            >;
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename FlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename FlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b Field_src @b field_src() -
        ///         for FlagsMembers::Src member field.
        ///     @li @b Field_reserved @b field_reserved() -
        ///         for FlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_NAMES(
            src,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVrfyFieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVrfyFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Frac,
        DeltaMs,
        DeltaNs,
        Wno,
        Flags,
        Reserved1
    >;
};

/// @brief Definition of <b>"TIM-VRFY"</b> message class.
/// @details
///     See @ref TimVrfyFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimVrfy.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimVrfy : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVrfy,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVrfy>,
        comms::option::def::FieldsImpl<typename TimVrfyFields<TOpt>::All>,
        comms::option::def::MsgType<TimVrfy<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimVrfy,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVrfy>,
            comms::option::def::FieldsImpl<typename TimVrfyFields<TOpt>::All>,
            comms::option::def::MsgType<TimVrfy<TMsgBase, TOpt> >,
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
    ///         for @ref TimVrfyFields::Itow field.
    ///     @li @b Field_frac type and @b field_frac() fuction
    ///         for @ref TimVrfyFields::Frac field.
    ///     @li @b Field_deltaMs type and @b field_deltaMs() fuction
    ///         for @ref TimVrfyFields::DeltaMs field.
    ///     @li @b Field_deltaNs type and @b field_deltaNs() fuction
    ///         for @ref TimVrfyFields::DeltaNs field.
    ///     @li @b Field_wno type and @b field_wno() fuction
    ///         for @ref TimVrfyFields::Wno field.
    ///     @li @b Field_flags type and @b field_flags() fuction
    ///         for @ref TimVrfyFields::Flags field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref TimVrfyFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        frac,
        deltaMs,
        deltaNs,
        wno,
        flags,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::TimVrfyCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


