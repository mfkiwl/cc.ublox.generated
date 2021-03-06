// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"MGA-BDS-UTC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/message/MgaBdsUtcCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaBdsUtc.
/// @tparam TOpt Extra options
/// @see @ref MgaBdsUtc
/// @headerfile "ublox/message/MgaBdsUtc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaBdsUtcFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<5>,
            comms::option::def::ValidNumValue<5>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaBdsUtcFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaBdsUtcFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"a0UTC"</b> field.
    struct A0UTC : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::A0UTCCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"a1UTC"</b> field.
    struct A1UTC : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x4000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::A1UTCCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dtLS"</b> field.
    struct DtLS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::DtLSCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"wnRec"</b> field.
    struct WnRec : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::WnRecCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"wnLSF"</b> field.
    struct WnLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::WnLSFCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dN"</b> field.
    struct DN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::DNCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dtLSF"</b> field.
    struct DtLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::DtLSFCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsUtcFieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        A0UTC,
        A1UTC,
        DtLS,
        Reserved2,
        WnRec,
        WnLSF,
        DN,
        DtLSF,
        Reserved3
    >;
};

/// @brief Definition of <b>"MGA-BDS-UTC"</b> message class.
/// @details
///     See @ref MgaBdsUtcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaBdsUtc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaBdsUtc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaBdsUtc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
        comms::option::def::FieldsImpl<typename MgaBdsUtcFields<TOpt>::All>,
        comms::option::def::MsgType<MgaBdsUtc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaBdsUtc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
            comms::option::def::FieldsImpl<typename MgaBdsUtcFields<TOpt>::All>,
            comms::option::def::MsgType<MgaBdsUtc<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() access fuction
    ///         for @ref MgaBdsUtcFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaBdsUtcFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaBdsUtcFields::Reserved1 field.
    ///     @li @b Field_a0UTC type and @b field_a0UTC() access fuction
    ///         for @ref MgaBdsUtcFields::A0UTC field.
    ///     @li @b Field_a1UTC type and @b field_a1UTC() access fuction
    ///         for @ref MgaBdsUtcFields::A1UTC field.
    ///     @li @b Field_dtLS type and @b field_dtLS() access fuction
    ///         for @ref MgaBdsUtcFields::DtLS field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaBdsUtcFields::Reserved2 field.
    ///     @li @b Field_wnRec type and @b field_wnRec() access fuction
    ///         for @ref MgaBdsUtcFields::WnRec field.
    ///     @li @b Field_wnLSF type and @b field_wnLSF() access fuction
    ///         for @ref MgaBdsUtcFields::WnLSF field.
    ///     @li @b Field_dN type and @b field_dN() access fuction
    ///         for @ref MgaBdsUtcFields::DN field.
    ///     @li @b Field_dtLSF type and @b field_dtLSF() access fuction
    ///         for @ref MgaBdsUtcFields::DtLSF field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref MgaBdsUtcFields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        a0UTC,
        a1UTC,
        dtLS,
        reserved2,
        wnRec,
        wnLSF,
        dN,
        dtLSF,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaBdsUtcCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


