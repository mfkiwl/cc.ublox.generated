// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"MGA-GLO-TIMEOFFSET"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MgaGloTimeoffsetCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGloTimeoffset.
/// @tparam TOpt Extra options
/// @see @ref MgaGloTimeoffset
/// @headerfile "ublox/message/MgaGloTimeoffset.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGloTimeoffsetFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloTimeoffsetFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaGloTimeoffsetFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"N"</b> field.
    struct N : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloTimeoffsetFieldsCommon::NCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tauC"</b> field.
    struct TauC : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 134217728L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloTimeoffsetFieldsCommon::TauCCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tauGps"</b> field.
    struct TauGps : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloTimeoffsetFieldsCommon::TauGpsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"B1"</b> field.
    struct B1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 1024>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloTimeoffsetFieldsCommon::B1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"B2"</b> field.
    struct B2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloTimeoffsetFieldsCommon::B2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloTimeoffsetFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        N,
        TauC,
        TauGps,
        B1,
        B2,
        Reserved1
    >;
};

/// @brief Definition of <b>"MGA-GLO-TIMEOFFSET"</b> message class.
/// @details
///     See @ref MgaGloTimeoffsetFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGloTimeoffset.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGloTimeoffset : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGloTimeoffset,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
        comms::option::def::FieldsImpl<typename MgaGloTimeoffsetFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGloTimeoffset<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGloTimeoffset,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
            comms::option::def::FieldsImpl<typename MgaGloTimeoffsetFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGloTimeoffset<TMsgBase, TOpt> >,
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
    ///         for @ref MgaGloTimeoffsetFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaGloTimeoffsetFields::Version field.
    ///     @li @b Field_n type and @b field_n() fuction
    ///         for @ref MgaGloTimeoffsetFields::N field.
    ///     @li @b Field_tauC type and @b field_tauC() fuction
    ///         for @ref MgaGloTimeoffsetFields::TauC field.
    ///     @li @b Field_tauGps type and @b field_tauGps() fuction
    ///         for @ref MgaGloTimeoffsetFields::TauGps field.
    ///     @li @b Field_b1 type and @b field_b1() fuction
    ///         for @ref MgaGloTimeoffsetFields::B1 field.
    ///     @li @b Field_b2 type and @b field_b2() fuction
    ///         for @ref MgaGloTimeoffsetFields::B2 field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaGloTimeoffsetFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        n,
        tauC,
        tauGps,
        b1,
        b2,
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
        return ublox::message::MgaGloTimeoffsetCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


