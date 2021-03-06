// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"CFG-DAT (Standard)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgDatDatumNum.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/CfgDatStandardCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgDatStandard.
/// @tparam TOpt Extra options
/// @see @ref CfgDatStandard
/// @headerfile "ublox/message/CfgDatStandard.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgDatStandardFields
{
    /// @brief Definition of <b>"datumNum"</b> field.
    struct DatumNum : public
        ublox::field::CfgDatDatumNum<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatStandardFieldsCommon::DatumNumCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        DatumNum
    >;
};

/// @brief Definition of <b>"CFG-DAT (Standard)"</b> message class.
/// @details
///     See @ref CfgDatStandardFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgDatStandard.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgDatStandard : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgDatStandard,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDat>,
        comms::option::def::FieldsImpl<typename CfgDatStandardFields<TOpt>::All>,
        comms::option::def::MsgType<CfgDatStandard<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgDatStandard,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDat>,
            comms::option::def::FieldsImpl<typename CfgDatStandardFields<TOpt>::All>,
            comms::option::def::MsgType<CfgDatStandard<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_datumNum type and @b field_datumNum() access fuction
    ///         for @ref CfgDatStandardFields::DatumNum field.
    COMMS_MSG_FIELDS_NAMES(
        datumNum
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgDatStandardCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


