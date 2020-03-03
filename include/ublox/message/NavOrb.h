// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"NAV-ORB"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/message/NavOrbCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavOrb.
/// @tparam TOpt Extra options
/// @see @ref NavOrb
/// @headerfile "ublox/message/NavOrb.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavOrbFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavOrbFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numSv"</b> field.
    struct NumSv : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavOrbFieldsCommon::NumSvCommon::name();
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
            return ublox::message::NavOrbFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"gnssId"</b> field.
            using GnssId =
                ublox::field::GnssId<
                    TOpt
                >;
            
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
                    return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref SvFlag bitfield.
            struct SvFlagMembers
            {
                /// @brief Definition of <b>"health"</b> field.
                /// @see @ref ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::HealthVal
                class Health : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::HealthVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    using Base = 
                        comms::field::EnumValue<
                            ublox::field::FieldBase<>,
                            ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::HealthVal,
                            comms::option::def::FixedBitLength<2U>,
                            comms::option::def::ValidNumValueRange<0, 2>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::HealthCommon::name();
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::HealthCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                };
                
                /// @brief Definition of <b>"visibility"</b> field.
                /// @see @ref ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::VisibilityVal
                class Visibility : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::VisibilityVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >
                {
                    using Base = 
                        comms::field::EnumValue<
                            ublox::field::FieldBase<>,
                            ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::VisibilityVal,
                            comms::option::def::FixedBitLength<2U>,
                            comms::option::def::ValidNumValueRange<0, 3>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::VisibilityCommon::name();
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::VisibilityCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                };
                
                /// @brief Definition of <b>"reserved"</b> field.
                /// @details
                ///     Reserved field with 1 byte length
                struct Reserved : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>,
                        comms::option::def::ValidNumValue<0>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::ReservedCommon::name();
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Health,
                       Visibility,
                       Reserved
                    >;
            };
            
            /// @brief Definition of <b>"svFlag"</b> field.
            class SvFlag : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename SvFlagMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename SvFlagMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated access functions are:
                ///     @li @b Field_health @b field_health() -
                ///         for SvFlagMembers::Health member field.
                ///     @li @b Field_visibility @b field_visibility() -
                ///         for SvFlagMembers::Visibility member field.
                ///     @li @b Field_reserved @b field_reserved() -
                ///         for SvFlagMembers::Reserved member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    health,
                    visibility,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Eph bitfield.
            struct EphMembers
            {
                /// @brief Definition of <b>"ephUsability"</b> field.
                struct EphUsability : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<5U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphUsabilityCommon::name();
                    }
                    
                };
                
                /// @brief Definition of <b>"ephSource"</b> field.
                /// @see @ref ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphSourceVal
                class EphSource : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphSourceVal,
                        comms::option::def::FixedBitLength<3U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    using Base = 
                        comms::field::EnumValue<
                            ublox::field::FieldBase<>,
                            ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphSourceVal,
                            comms::option::def::FixedBitLength<3U>,
                            comms::option::def::ValidNumValueRange<0, 2>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphSourceCommon::name();
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphSourceCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       EphUsability,
                       EphSource
                    >;
            };
            
            /// @brief Definition of <b>"eph"</b> field.
            class Eph : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename EphMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename EphMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated access functions are:
                ///     @li @b Field_ephUsability @b field_ephUsability() -
                ///         for EphMembers::EphUsability member field.
                ///     @li @b Field_ephSource @b field_ephSource() -
                ///         for EphMembers::EphSource member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    ephUsability,
                    ephSource
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Alm bitfield.
            struct AlmMembers
            {
                /// @brief Definition of <b>"almUsability"</b> field.
                struct AlmUsability : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<5U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmUsabilityCommon::name();
                    }
                    
                };
                
                /// @brief Definition of <b>"almSource"</b> field.
                /// @see @ref ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmSourceVal
                class AlmSource : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmSourceVal,
                        comms::option::def::FixedBitLength<3U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    using Base = 
                        comms::field::EnumValue<
                            ublox::field::FieldBase<>,
                            ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmSourceVal,
                            comms::option::def::FixedBitLength<3U>,
                            comms::option::def::ValidNumValueRange<0, 2>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmSourceCommon::name();
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmSourceCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       AlmUsability,
                       AlmSource
                    >;
            };
            
            /// @brief Definition of <b>"alm"</b> field.
            class Alm : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename AlmMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename AlmMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated access functions are:
                ///     @li @b Field_almUsability @b field_almUsability() -
                ///         for AlmMembers::AlmUsability member field.
                ///     @li @b Field_almSource @b field_almSource() -
                ///         for AlmMembers::AlmSource member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    almUsability,
                    almSource
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmCommon::name();
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref OtherOrb bitfield.
            struct OtherOrbMembers
            {
                /// @brief Definition of <b>"anoAopUsability"</b> field.
                struct AnoAopUsability : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<5U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::AnoAopUsabilityCommon::name();
                    }
                    
                };
                
                /// @brief Definition of <b>"type"</b> field.
                /// @see @ref ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::TypeVal
                class Type : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::TypeVal,
                        comms::option::def::FixedBitLength<3U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    using Base = 
                        comms::field::EnumValue<
                            ublox::field::FieldBase<>,
                            ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::TypeVal,
                            comms::option::def::FixedBitLength<3U>,
                            comms::option::def::ValidNumValueRange<0, 2>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;
                
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::TypeCommon::name();
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::TypeCommon::valueName(val);
                    }
                    
                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::value());
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       AnoAopUsability,
                       Type
                    >;
            };
            
            /// @brief Definition of <b>"otherOrb"</b> field.
            class OtherOrb : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename OtherOrbMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename OtherOrbMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated access functions are:
                ///     @li @b Field_anoAopUsability @b field_anoAopUsability() -
                ///         for OtherOrbMembers::AnoAopUsability member field.
                ///     @li @b Field_type @b field_type() -
                ///         for OtherOrbMembers::Type member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    anoAopUsability,
                    type
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   GnssId,
                   Svid,
                   SvFlag,
                   Eph,
                   Alm,
                   OtherOrb
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b Field_gnssId @b field_gnssId() -
            ///         for ElementMembers::GnssId member field.
            ///     @li @b Field_svid @b field_svid() -
            ///         for ElementMembers::Svid member field.
            ///     @li @b Field_svFlag @b field_svFlag() -
            ///         for ElementMembers::SvFlag member field.
            ///     @li @b Field_eph @b field_eph() -
            ///         for ElementMembers::Eph member field.
            ///     @li @b Field_alm @b field_alm() -
            ///         for ElementMembers::Alm member field.
            ///     @li @b Field_otherOrb @b field_otherOrb() -
            ///         for ElementMembers::OtherOrb member field.
            COMMS_FIELD_MEMBERS_NAMES(
                gnssId,
                svid,
                svFlag,
                eph,
                alm,
                otherOrb
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::NavOrbFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::NavOrbFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Version,
        NumSv,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-ORB"</b> message class.
/// @details
///     See @ref NavOrbFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavOrb.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavOrb : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavOrb,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOrb>,
        comms::option::def::FieldsImpl<typename NavOrbFields<TOpt>::All>,
        comms::option::def::MsgType<NavOrb<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavOrb,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOrb>,
            comms::option::def::FieldsImpl<typename NavOrbFields<TOpt>::All>,
            comms::option::def::MsgType<NavOrb<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_itow type and @b field_itow() fuction
    ///         for @ref NavOrbFields::Itow field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref NavOrbFields::Version field.
    ///     @li @b Field_numSv type and @b field_numSv() fuction
    ///         for @ref NavOrbFields::NumSv field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref NavOrbFields::Reserved1 field.
    ///     @li @b Field_list type and @b field_list() fuction
    ///         for @ref NavOrbFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        version,
        numSv,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::NavOrbCommon::name();
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_list().forceReadElemCount(
            static_cast<std::size_t>(field_numSv().value()));
        
        es = Base::template doReadFrom<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_list() || updated;
        return updated;
    }
    
    
private:
    bool refresh_list()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_numSv().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numSv().value())>::type;
                field_numSv().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


