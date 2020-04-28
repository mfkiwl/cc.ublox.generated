// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains definition of <b>"CFG-NAVX5"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgNavx5AopCfg.h"
#include "ublox/field/CfgNavx5AopOrbMaxErr.h"
#include "ublox/field/CfgNavx5Mask1.h"
#include "ublox/field/CfgNavx5Mask2.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Res6.h"
#include "ublox/message/CfgNavx5Common.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgNavx5.
/// @tparam TOpt Extra options
/// @see @ref CfgNavx5
/// @headerfile "ublox/message/CfgNavx5.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgNavx5Fields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"mask1"</b> field.
    using Mask1 =
        ublox::field::CfgNavx5Mask1<
            TOpt
        >;
    
    /// @brief Definition of <b>"mask2"</b> field.
    using Mask2 =
        ublox::field::CfgNavx5Mask2<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"minSVs"</b> field.
    struct MinSVs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::MinSVsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"maxSVs"</b> field.
    struct MaxSVs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::MaxSVsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"minCNO"</b> field.
    struct MinCNO : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::MinCNOCommon::name();
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
            return ublox::message::CfgNavx5FieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"iniFix3D"</b> field.
    struct IniFix3D : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::IniFix3DCommon::name();
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
            return ublox::message::CfgNavx5FieldsCommon::Reserved3Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"ackAiding"</b> field.
    struct AckAiding : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::AckAidingCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"wknRollover"</b> field.
    struct WknRollover : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::WknRolloverCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved4"</b> field.
    struct Reserved4 : public
        ublox::field::Res6<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::Reserved4Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"usePPP"</b> field.
    struct UsePPP : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::UsePPPCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"aopCfg"</b> field.
    using AopCfg =
        ublox::field::CfgNavx5AopCfg<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved5"</b> field.
    struct Reserved5 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::Reserved5Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"aopOrbMaxErr"</b> field.
    using AopOrbMaxErr =
        ublox::field::CfgNavx5AopOrbMaxErr<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved6"</b> field.
    struct Reserved6 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::Reserved6Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"reserved7"</b> field.
    struct Reserved7 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::Reserved7Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"useAdr"</b> field.
    struct UseAdr : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNavx5FieldsCommon::UseAdrCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Mask1,
        Mask2,
        Reserved1,
        MinSVs,
        MaxSVs,
        MinCNO,
        Reserved2,
        IniFix3D,
        Reserved3,
        AckAiding,
        WknRollover,
        Reserved4,
        UsePPP,
        AopCfg,
        Reserved5,
        AopOrbMaxErr,
        Reserved6,
        Reserved7,
        UseAdr
    >;
};

/// @brief Definition of <b>"CFG-NAVX5"</b> message class.
/// @details
///     See @ref CfgNavx5Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgNavx5.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgNavx5 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNavx5>,
        comms::option::def::FieldsImpl<typename CfgNavx5Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgNavx5<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNavx5>,
            comms::option::def::FieldsImpl<typename CfgNavx5Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgNavx5<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref CfgNavx5Fields::Version field.
    ///     @li @b Field_mask1 type and @b field_mask1() access fuction
    ///         for @ref CfgNavx5Fields::Mask1 field.
    ///     @li @b Field_mask2 type and @b field_mask2() access fuction
    ///         for @ref CfgNavx5Fields::Mask2 field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgNavx5Fields::Reserved1 field.
    ///     @li @b Field_minSVs type and @b field_minSVs() access fuction
    ///         for @ref CfgNavx5Fields::MinSVs field.
    ///     @li @b Field_maxSVs type and @b field_maxSVs() access fuction
    ///         for @ref CfgNavx5Fields::MaxSVs field.
    ///     @li @b Field_minCNO type and @b field_minCNO() access fuction
    ///         for @ref CfgNavx5Fields::MinCNO field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref CfgNavx5Fields::Reserved2 field.
    ///     @li @b Field_iniFix3D type and @b field_iniFix3D() access fuction
    ///         for @ref CfgNavx5Fields::IniFix3D field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref CfgNavx5Fields::Reserved3 field.
    ///     @li @b Field_ackAiding type and @b field_ackAiding() access fuction
    ///         for @ref CfgNavx5Fields::AckAiding field.
    ///     @li @b Field_wknRollover type and @b field_wknRollover() access fuction
    ///         for @ref CfgNavx5Fields::WknRollover field.
    ///     @li @b Field_reserved4 type and @b field_reserved4() access fuction
    ///         for @ref CfgNavx5Fields::Reserved4 field.
    ///     @li @b Field_usePPP type and @b field_usePPP() access fuction
    ///         for @ref CfgNavx5Fields::UsePPP field.
    ///     @li @b Field_aopCfg type and @b field_aopCfg() access fuction
    ///         for @ref CfgNavx5Fields::AopCfg field.
    ///     @li @b Field_reserved5 type and @b field_reserved5() access fuction
    ///         for @ref CfgNavx5Fields::Reserved5 field.
    ///     @li @b Field_aopOrbMaxErr type and @b field_aopOrbMaxErr() access fuction
    ///         for @ref CfgNavx5Fields::AopOrbMaxErr field.
    ///     @li @b Field_reserved6 type and @b field_reserved6() access fuction
    ///         for @ref CfgNavx5Fields::Reserved6 field.
    ///     @li @b Field_reserved7 type and @b field_reserved7() access fuction
    ///         for @ref CfgNavx5Fields::Reserved7 field.
    ///     @li @b Field_useAdr type and @b field_useAdr() access fuction
    ///         for @ref CfgNavx5Fields::UseAdr field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        mask1,
        mask2,
        reserved1,
        minSVs,
        maxSVs,
        minCNO,
        reserved2,
        iniFix3D,
        reserved3,
        ackAiding,
        wknRollover,
        reserved4,
        usePPP,
        aopCfg,
        reserved5,
        aopOrbMaxErr,
        reserved6,
        reserved7,
        useAdr
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgNavx5Common::name();
    }
    
    
};

} // namespace message

} // namespace ublox


