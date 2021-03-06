// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"MGA-ACK"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/MgaAckCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaAck.
/// @tparam TOpt Extra options
/// @see @ref MgaAck
/// @headerfile "ublox/message/MgaAck.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaAckFields
{
    /// @brief Definition of <b>"type"</b> field.
    /// @see @ref ublox::message::MgaAckFieldsCommon::TypeVal
    class Type : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::MgaAckFieldsCommon::TypeVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::MgaAckFieldsCommon::TypeVal,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaAckFieldsCommon::TypeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::MgaAckFieldsCommon::TypeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
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
            return ublox::message::MgaAckFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"infoCode"</b> field.
    /// @see @ref ublox::message::MgaAckFieldsCommon::InfoCodeVal
    class InfoCode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::MgaAckFieldsCommon::InfoCodeVal,
            comms::option::def::ValidNumValueRange<0, 6>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::MgaAckFieldsCommon::InfoCodeVal,
                comms::option::def::ValidNumValueRange<0, 6>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaAckFieldsCommon::InfoCodeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::MgaAckFieldsCommon::InfoCodeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"msgId"</b> field.
    struct MsgId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaAckFieldsCommon::MsgIdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"msgPayloadStart"</b> field.
    struct MsgPayloadStart : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MgaAckFields::MsgPayloadStart,
            comms::option::def::SequenceFixedSize<4U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaAckFieldsCommon::MsgPayloadStartCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        InfoCode,
        MsgId,
        MsgPayloadStart
    >;
};

/// @brief Definition of <b>"MGA-ACK"</b> message class.
/// @details
///     See @ref MgaAckFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaAck.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaAck : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaAck,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaAck>,
        comms::option::def::FieldsImpl<typename MgaAckFields<TOpt>::All>,
        comms::option::def::MsgType<MgaAck<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaAck,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaAck>,
            comms::option::def::FieldsImpl<typename MgaAckFields<TOpt>::All>,
            comms::option::def::MsgType<MgaAck<TMsgBase, TOpt> >,
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
    ///         for @ref MgaAckFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaAckFields::Version field.
    ///     @li @b Field_infoCode type and @b field_infoCode() access fuction
    ///         for @ref MgaAckFields::InfoCode field.
    ///     @li @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref MgaAckFields::MsgId field.
    ///     @li @b Field_msgPayloadStart type and @b field_msgPayloadStart() access fuction
    ///         for @ref MgaAckFields::MsgPayloadStart field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        infoCode,
        msgId,
        msgPayloadStart
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaAckCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


