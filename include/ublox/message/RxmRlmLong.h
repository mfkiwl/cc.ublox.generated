// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"RXM-RLM (Long)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res3.h"
#include "ublox/message/RxmRlmLongCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmRlmLong.
/// @tparam TOpt Extra options
/// @see @ref RxmRlmLong
/// @headerfile "ublox/message/RxmRlmLong.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmRlmLongFields
{
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
            return ublox::message::RxmRlmLongFieldsCommon::VersionCommon::name();
        }
        
    };
    
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
            return ublox::message::RxmRlmLongFieldsCommon::TypeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmLongFieldsCommon::SvidCommon::name();
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
            return ublox::message::RxmRlmLongFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"beacon"</b> field.
    struct Beacon : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::RxmRlmLongFields::Beacon,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmLongFieldsCommon::BeaconCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"message"</b> field.
    struct Message : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmLongFieldsCommon::MessageCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"params"</b> field.
    struct Params : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::RxmRlmLongFields::Params,
            comms::option::def::SequenceFixedSize<12U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmLongFieldsCommon::ParamsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::RxmRlmLongFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Type,
        Svid,
        Reserved1,
        Beacon,
        Message,
        Params,
        Reserved2
    >;
};

/// @brief Definition of <b>"RXM-RLM (Long)"</b> message class.
/// @details
///     See @ref RxmRlmLongFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmRlmLong.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmRlmLong : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRlmLong,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRlm>,
        comms::option::def::FieldsImpl<typename RxmRlmLongFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRlmLong<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRlmLong,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRlm>,
            comms::option::def::FieldsImpl<typename RxmRlmLongFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRlmLong<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref RxmRlmLongFields::Version field.
    ///     @li @b Field_type type and @b field_type() fuction
    ///         for @ref RxmRlmLongFields::Type field.
    ///     @li @b Field_svid type and @b field_svid() fuction
    ///         for @ref RxmRlmLongFields::Svid field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref RxmRlmLongFields::Reserved1 field.
    ///     @li @b Field_beacon type and @b field_beacon() fuction
    ///         for @ref RxmRlmLongFields::Beacon field.
    ///     @li @b Field_message type and @b field_message() fuction
    ///         for @ref RxmRlmLongFields::Message field.
    ///     @li @b Field_params type and @b field_params() fuction
    ///         for @ref RxmRlmLongFields::Params field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref RxmRlmLongFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        type,
        svid,
        reserved1,
        beacon,
        message,
        params,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::RxmRlmLongCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


