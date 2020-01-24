// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"MGA-GPS-IONO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MgaGpsIonoCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGpsIono.
/// @tparam TOpt Extra options
/// @see @ref MgaGpsIono
/// @headerfile "ublox/message/MgaGpsIono.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGpsIonoFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<6>,
            comms::option::def::ValidNumValue<6>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaGpsIonoFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaGpsIonoFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoAlpha0"</b> field.
    struct IonoAlpha0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoAlpha1"</b> field.
    struct IonoAlpha1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 134217728L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoAlpha2"</b> field.
    struct IonoAlpha2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16777216L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoAlpha3"</b> field.
    struct IonoAlpha3 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16777216L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha3Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoBeta0"</b> field.
    struct IonoBeta0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 2048>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoBeta0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoBeta1"</b> field.
    struct IonoBeta1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16384>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoBeta1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoBeta2"</b> field.
    struct IonoBeta2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoBeta2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ionoBeta3"</b> field.
    struct IonoBeta3 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGpsIonoFieldsCommon::IonoBeta3Common::name();
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
            return ublox::message::MgaGpsIonoFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        IonoAlpha0,
        IonoAlpha1,
        IonoAlpha2,
        IonoAlpha3,
        IonoBeta0,
        IonoBeta1,
        IonoBeta2,
        IonoBeta3,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GPS-IONO"</b> message class.
/// @details
///     See @ref MgaGpsIonoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGpsIono.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGpsIono : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGpsIono,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
        comms::option::def::FieldsImpl<typename MgaGpsIonoFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGpsIono<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGpsIono,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
            comms::option::def::FieldsImpl<typename MgaGpsIonoFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGpsIono<TMsgBase, TOpt> >,
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
    ///         for @ref MgaGpsIonoFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaGpsIonoFields::Version field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaGpsIonoFields::Reserved1 field.
    ///     @li @b Field_ionoAlpha0 type and @b field_ionoAlpha0() fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha0 field.
    ///     @li @b Field_ionoAlpha1 type and @b field_ionoAlpha1() fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha1 field.
    ///     @li @b Field_ionoAlpha2 type and @b field_ionoAlpha2() fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha2 field.
    ///     @li @b Field_ionoAlpha3 type and @b field_ionoAlpha3() fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha3 field.
    ///     @li @b Field_ionoBeta0 type and @b field_ionoBeta0() fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta0 field.
    ///     @li @b Field_ionoBeta1 type and @b field_ionoBeta1() fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta1 field.
    ///     @li @b Field_ionoBeta2 type and @b field_ionoBeta2() fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta2 field.
    ///     @li @b Field_ionoBeta3 type and @b field_ionoBeta3() fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta3 field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref MgaGpsIonoFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        ionoAlpha0,
        ionoAlpha1,
        ionoAlpha2,
        ionoAlpha3,
        ionoBeta0,
        ionoBeta1,
        ionoBeta2,
        ionoBeta3,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaGpsIonoCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


