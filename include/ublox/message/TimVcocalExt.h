// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"TIM-VCOCAL (Extended)"</b> message and its fields.

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
#include "ublox/field/Res2.h"
#include "ublox/message/TimVcocalExtCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimVcocalExt.
/// @tparam TOpt Extra options
/// @see @ref TimVcocalExt
/// @headerfile "ublox/message/TimVcocalExt.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimVcocalExtFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVcocalExtFieldsCommon::TypeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVcocalExtFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"oscId"</b> field.
    /// @see @ref ublox::message::TimVcocalExtFieldsCommon::OscIdVal
    class OscId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::TimVcocalExtFieldsCommon::OscIdVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::TimVcocalExtFieldsCommon::OscIdVal,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVcocalExtFieldsCommon::OscIdCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::TimVcocalExtFieldsCommon::OscIdCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"srcId"</b> field.
    /// @see @ref ublox::message::TimVcocalExtFieldsCommon::SrcIdVal
    class SrcId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::TimVcocalExtFieldsCommon::SrcIdVal,
            comms::option::def::ValidNumValueRange<0, 3>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::TimVcocalExtFieldsCommon::SrcIdVal,
                comms::option::def::ValidNumValueRange<0, 3>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVcocalExtFieldsCommon::SrcIdCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::TimVcocalExtFieldsCommon::SrcIdCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
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
            return ublox::message::TimVcocalExtFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"raw0"</b> field.
    struct Raw0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVcocalExtFieldsCommon::Raw0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"raw1"</b> field.
    struct Raw1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVcocalExtFieldsCommon::Raw1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"maxStepSize"</b> field.
    struct MaxStepSize : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimVcocalExtFieldsCommon::MaxStepSizeCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        OscId,
        SrcId,
        Reserved1,
        Raw0,
        Raw1,
        MaxStepSize
    >;
};

/// @brief Definition of <b>"TIM-VCOCAL (Extended)"</b> message class.
/// @details
///     See @ref TimVcocalExtFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimVcocalExt.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimVcocalExt : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVcocalExt,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
        comms::option::def::FieldsImpl<typename TimVcocalExtFields<TOpt>::All>,
        comms::option::def::MsgType<TimVcocalExt<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimVcocalExt,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
            comms::option::def::FieldsImpl<typename TimVcocalExtFields<TOpt>::All>,
            comms::option::def::MsgType<TimVcocalExt<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() fuction
    ///         for @ref TimVcocalExtFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref TimVcocalExtFields::Version field.
    ///     @li @b Field_oscId type and @b field_oscId() fuction
    ///         for @ref TimVcocalExtFields::OscId field.
    ///     @li @b Field_srcId type and @b field_srcId() fuction
    ///         for @ref TimVcocalExtFields::SrcId field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref TimVcocalExtFields::Reserved1 field.
    ///     @li @b Field_raw0 type and @b field_raw0() fuction
    ///         for @ref TimVcocalExtFields::Raw0 field.
    ///     @li @b Field_raw1 type and @b field_raw1() fuction
    ///         for @ref TimVcocalExtFields::Raw1 field.
    ///     @li @b Field_maxStepSize type and @b field_maxStepSize() fuction
    ///         for @ref TimVcocalExtFields::MaxStepSize field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        oscId,
        srcId,
        reserved1,
        raw0,
        raw1,
        maxStepSize
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::TimVcocalExtCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


