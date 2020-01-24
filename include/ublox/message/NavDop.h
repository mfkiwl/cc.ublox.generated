// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"NAV-DOP"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Dop.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/message/NavDopCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavDop.
/// @tparam TOpt Extra options
/// @see @ref NavDop
/// @headerfile "ublox/message/NavDop.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavDopFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"gDOP"</b> field.
    struct GDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDopFieldsCommon::GDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"pDOP"</b> field.
    struct PDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDopFieldsCommon::PDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tDOP"</b> field.
    struct TDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDopFieldsCommon::TDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"vDOP"</b> field.
    struct VDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDopFieldsCommon::VDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"hDOP"</b> field.
    struct HDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDopFieldsCommon::HDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"nDOP"</b> field.
    struct NDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDopFieldsCommon::NDOPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"eDOP"</b> field.
    struct EDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavDopFieldsCommon::EDOPCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        GDOP,
        PDOP,
        TDOP,
        VDOP,
        HDOP,
        NDOP,
        EDOP
    >;
};

/// @brief Definition of <b>"NAV-DOP"</b> message class.
/// @details
///     See @ref NavDopFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavDop.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavDop : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavDop,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavDop>,
        comms::option::def::FieldsImpl<typename NavDopFields<TOpt>::All>,
        comms::option::def::MsgType<NavDop<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavDop,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavDop>,
            comms::option::def::FieldsImpl<typename NavDopFields<TOpt>::All>,
            comms::option::def::MsgType<NavDop<TMsgBase, TOpt> >,
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
    ///         for @ref NavDopFields::Itow field.
    ///     @li @b Field_gDOP type and @b field_gDOP() fuction
    ///         for @ref NavDopFields::GDOP field.
    ///     @li @b Field_pDOP type and @b field_pDOP() fuction
    ///         for @ref NavDopFields::PDOP field.
    ///     @li @b Field_tDOP type and @b field_tDOP() fuction
    ///         for @ref NavDopFields::TDOP field.
    ///     @li @b Field_vDOP type and @b field_vDOP() fuction
    ///         for @ref NavDopFields::VDOP field.
    ///     @li @b Field_hDOP type and @b field_hDOP() fuction
    ///         for @ref NavDopFields::HDOP field.
    ///     @li @b Field_nDOP type and @b field_nDOP() fuction
    ///         for @ref NavDopFields::NDOP field.
    ///     @li @b Field_eDOP type and @b field_eDOP() fuction
    ///         for @ref NavDopFields::EDOP field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        gDOP,
        pDOP,
        tDOP,
        vDOP,
        hDOP,
        nDOP,
        eDOP
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 18U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 18U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavDopCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


