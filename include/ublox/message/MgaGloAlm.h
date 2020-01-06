// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"MGA-GLO-ALM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res4.h"
#include "ublox/message/MgaGloAlmCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGloAlm.
/// @tparam TOpt Extra options
/// @see @ref MgaGloAlm
/// @headerfile "ublox/message/MgaGloAlm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGloAlmFields
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
            return ublox::message::MgaGloAlmFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaGloAlmFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaGloAlmFieldsCommon::SvidCommon::name();
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
            return ublox::message::MgaGloAlmFieldsCommon::Reserved1Common::name();
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
            return ublox::message::MgaGloAlmFieldsCommon::NCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"M"</b> field.
    struct M : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::MCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"C"</b> field.
    struct C : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::CCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tau"</b> field.
    struct Tau : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 262144L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::TauCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"epsilon"</b> field.
    struct Epsilon : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::EpsilonCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"lambda"</b> field.
    struct Lambda : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::LambdaCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deltaI"</b> field.
    struct DeltaI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::DeltaICommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"tLambda"</b> field.
    struct TLambda : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::TLambdaCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deltaT"</b> field.
    struct DeltaT : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 512>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::DeltaTCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"deltaDT"</b> field.
    struct DeltaDT : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16384>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::DeltaDTCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"H"</b> field.
    struct H : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::HCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaGloAlmFieldsCommon::OmegaCommon::name();
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
            return ublox::message::MgaGloAlmFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        Reserved1,
        N,
        M,
        C,
        Tau,
        Epsilon,
        Lambda,
        DeltaI,
        TLambda,
        DeltaT,
        DeltaDT,
        H,
        Omega,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GLO-ALM"</b> message class.
/// @details
///     See @ref MgaGloAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGloAlm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGloAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGloAlm,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
        comms::option::def::FieldsImpl<typename MgaGloAlmFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGloAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGloAlm,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
            comms::option::def::FieldsImpl<typename MgaGloAlmFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGloAlm<TMsgBase, TOpt> >,
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
    ///         for @ref MgaGloAlmFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaGloAlmFields::Version field.
    ///     @li @b Field_svid type and @b field_svid() fuction
    ///         for @ref MgaGloAlmFields::Svid field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaGloAlmFields::Reserved1 field.
    ///     @li @b Field_n type and @b field_n() fuction
    ///         for @ref MgaGloAlmFields::N field.
    ///     @li @b Field_m type and @b field_m() fuction
    ///         for @ref MgaGloAlmFields::M field.
    ///     @li @b Field_c type and @b field_c() fuction
    ///         for @ref MgaGloAlmFields::C field.
    ///     @li @b Field_tau type and @b field_tau() fuction
    ///         for @ref MgaGloAlmFields::Tau field.
    ///     @li @b Field_epsilon type and @b field_epsilon() fuction
    ///         for @ref MgaGloAlmFields::Epsilon field.
    ///     @li @b Field_lambda type and @b field_lambda() fuction
    ///         for @ref MgaGloAlmFields::Lambda field.
    ///     @li @b Field_deltaI type and @b field_deltaI() fuction
    ///         for @ref MgaGloAlmFields::DeltaI field.
    ///     @li @b Field_tLambda type and @b field_tLambda() fuction
    ///         for @ref MgaGloAlmFields::TLambda field.
    ///     @li @b Field_deltaT type and @b field_deltaT() fuction
    ///         for @ref MgaGloAlmFields::DeltaT field.
    ///     @li @b Field_deltaDT type and @b field_deltaDT() fuction
    ///         for @ref MgaGloAlmFields::DeltaDT field.
    ///     @li @b Field_h type and @b field_h() fuction
    ///         for @ref MgaGloAlmFields::H field.
    ///     @li @b Field_omega type and @b field_omega() fuction
    ///         for @ref MgaGloAlmFields::Omega field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref MgaGloAlmFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        svid,
        reserved1,
        n,
        m,
        c,
        tau,
        epsilon,
        lambda,
        deltaI,
        tLambda,
        deltaT,
        deltaDT,
        h,
        omega,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaGloAlmCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


