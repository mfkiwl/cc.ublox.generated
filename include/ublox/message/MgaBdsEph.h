// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains definition of <b>"MGA-BDS-EPH"</b> message and its fields.

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
#include "ublox/message/MgaBdsEphCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaBdsEph.
/// @tparam TOpt Extra options
/// @see @ref MgaBdsEph
/// @headerfile "ublox/message/MgaBdsEph.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaBdsEphFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaBdsEphFieldsCommon::VersionCommon::name();
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
            return ublox::message::MgaBdsEphFieldsCommon::SvidCommon::name();
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
            return ublox::message::MgaBdsEphFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"SatH1"</b> field.
    struct SatH1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::SatH1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"IODC"</b> field.
    struct IODC : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::IODCCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"a2"</b> field.
    struct A2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::A2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"a1"</b> field.
    struct A1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x4000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::A1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"a0"</b> field.
    struct A0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x200000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::A0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"toc"</b> field.
    struct Toc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<8, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::TocCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"TGD1"</b> field.
    struct TGD1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::TGD1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"URAI"</b> field.
    struct URAI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::URAICommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"IODE"</b> field.
    struct IODE : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::IODECommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"toe"</b> field.
    struct Toe : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<8, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::ToeCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"sqrtA"</b> field.
    struct SqrtA : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 524288L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::SqrtACommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"e"</b> field.
    struct E : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 0x200000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::ECommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::OmegaCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"Deltan"</b> field.
    struct Deltan : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::DeltanCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"IDOT"</b> field.
    struct IDOT : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::IDOTCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"M0"</b> field.
    struct M0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::M0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"Omega0"</b> field.
    struct Omega0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::Omega0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"OmegaDot"</b> field.
    struct OmegaDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::OmegaDotCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"i0"</b> field.
    struct I0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::I0Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"Cuc"</b> field.
    struct Cuc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::CucCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"Cus"</b> field.
    struct Cus : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::CusCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"Crc"</b> field.
    struct Crc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 64>,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::CrcCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"Crs"</b> field.
    struct Crs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 64>,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::CrsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"Cic"</b> field.
    struct Cic : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::CicCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"Cis"</b> field.
    struct Cis : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaBdsEphFieldsCommon::CisCommon::name();
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
            return ublox::message::MgaBdsEphFieldsCommon::Reserved2Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        Reserved1,
        SatH1,
        IODC,
        A2,
        A1,
        A0,
        Toc,
        TGD1,
        URAI,
        IODE,
        Toe,
        SqrtA,
        E,
        Omega,
        Deltan,
        IDOT,
        M0,
        Omega0,
        OmegaDot,
        I0,
        Cuc,
        Cus,
        Crc,
        Crs,
        Cic,
        Cis,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-BDS-EPH"</b> message class.
/// @details
///     See @ref MgaBdsEphFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaBdsEph.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaBdsEph : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaBdsEph,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
        comms::option::def::FieldsImpl<typename MgaBdsEphFields<TOpt>::All>,
        comms::option::def::MsgType<MgaBdsEph<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaBdsEph,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
            comms::option::def::FieldsImpl<typename MgaBdsEphFields<TOpt>::All>,
            comms::option::def::MsgType<MgaBdsEph<TMsgBase, TOpt> >,
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
    ///         for @ref MgaBdsEphFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaBdsEphFields::Version field.
    ///     @li @b Field_svid type and @b field_svid() fuction
    ///         for @ref MgaBdsEphFields::Svid field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaBdsEphFields::Reserved1 field.
    ///     @li @b Field_satH1 type and @b field_satH1() fuction
    ///         for @ref MgaBdsEphFields::SatH1 field.
    ///     @li @b Field_iODC type and @b field_iODC() fuction
    ///         for @ref MgaBdsEphFields::IODC field.
    ///     @li @b Field_a2 type and @b field_a2() fuction
    ///         for @ref MgaBdsEphFields::A2 field.
    ///     @li @b Field_a1 type and @b field_a1() fuction
    ///         for @ref MgaBdsEphFields::A1 field.
    ///     @li @b Field_a0 type and @b field_a0() fuction
    ///         for @ref MgaBdsEphFields::A0 field.
    ///     @li @b Field_toc type and @b field_toc() fuction
    ///         for @ref MgaBdsEphFields::Toc field.
    ///     @li @b Field_tGD1 type and @b field_tGD1() fuction
    ///         for @ref MgaBdsEphFields::TGD1 field.
    ///     @li @b Field_uRAI type and @b field_uRAI() fuction
    ///         for @ref MgaBdsEphFields::URAI field.
    ///     @li @b Field_iODE type and @b field_iODE() fuction
    ///         for @ref MgaBdsEphFields::IODE field.
    ///     @li @b Field_toe type and @b field_toe() fuction
    ///         for @ref MgaBdsEphFields::Toe field.
    ///     @li @b Field_sqrtA type and @b field_sqrtA() fuction
    ///         for @ref MgaBdsEphFields::SqrtA field.
    ///     @li @b Field_e type and @b field_e() fuction
    ///         for @ref MgaBdsEphFields::E field.
    ///     @li @b Field_omega type and @b field_omega() fuction
    ///         for @ref MgaBdsEphFields::Omega field.
    ///     @li @b Field_deltan type and @b field_deltan() fuction
    ///         for @ref MgaBdsEphFields::Deltan field.
    ///     @li @b Field_iDOT type and @b field_iDOT() fuction
    ///         for @ref MgaBdsEphFields::IDOT field.
    ///     @li @b Field_m0 type and @b field_m0() fuction
    ///         for @ref MgaBdsEphFields::M0 field.
    ///     @li @b Field_omega0 type and @b field_omega0() fuction
    ///         for @ref MgaBdsEphFields::Omega0 field.
    ///     @li @b Field_omegaDot type and @b field_omegaDot() fuction
    ///         for @ref MgaBdsEphFields::OmegaDot field.
    ///     @li @b Field_i0 type and @b field_i0() fuction
    ///         for @ref MgaBdsEphFields::I0 field.
    ///     @li @b Field_cuc type and @b field_cuc() fuction
    ///         for @ref MgaBdsEphFields::Cuc field.
    ///     @li @b Field_cus type and @b field_cus() fuction
    ///         for @ref MgaBdsEphFields::Cus field.
    ///     @li @b Field_crc type and @b field_crc() fuction
    ///         for @ref MgaBdsEphFields::Crc field.
    ///     @li @b Field_crs type and @b field_crs() fuction
    ///         for @ref MgaBdsEphFields::Crs field.
    ///     @li @b Field_cic type and @b field_cic() fuction
    ///         for @ref MgaBdsEphFields::Cic field.
    ///     @li @b Field_cis type and @b field_cis() fuction
    ///         for @ref MgaBdsEphFields::Cis field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref MgaBdsEphFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        svid,
        reserved1,
        satH1,
        iODC,
        a2,
        a1,
        a0,
        toc,
        tGD1,
        uRAI,
        iODE,
        toe,
        sqrtA,
        e,
        omega,
        deltan,
        iDOT,
        m0,
        omega0,
        omegaDot,
        i0,
        cuc,
        cus,
        crc,
        crs,
        cic,
        cis,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 88U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 88U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::MgaBdsEphCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


