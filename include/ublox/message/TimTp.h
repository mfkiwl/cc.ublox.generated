// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"TIM-TP"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <type_traits>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/TimTpCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimTp.
/// @tparam TOpt Extra options
/// @see @ref TimTp
/// @headerfile "ublox/message/TimTp.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimTpFields
{
    /// @brief Definition of <b>"towMS"</b> field.
    struct TowMS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimTpFieldsCommon::TowMSCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"towSubMS"</b> field.
    struct TowSubMS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 0x100000000LL>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimTpFieldsCommon::TowSubMSCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"qErr"</b> field.
    struct QErr : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimTpFieldsCommon::QErrCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimTpFieldsCommon::WeekCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<2U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_timeBase, @b getBitValue_timeBase() and @b setBitValue_timeBase().
            ///      @li @b BitIdx_utc, @b getBitValue_utc() and @b setBitValue_utc().
            COMMS_BITMASK_BITS_SEQ(
                timeBase,
                utc
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Definition of <b>"raim"</b> field.
        /// @see @ref ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimVal
        class Raim : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimVal,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 2>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueName(val);
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
                return ublox::message::TimTpFieldsCommon::FlagsMembersCommon::ReservedCommon::name();
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Bits,
               Raim,
               Reserved
            >;
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename FlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename FlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b Field_bits @b field_bits() -
        ///         for FlagsMembers::Bits member field.
        ///     @li @b Field_raim @b field_raim() -
        ///         for FlagsMembers::Raim member field.
        ///     @li @b Field_reserved @b field_reserved() -
        ///         for FlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_NAMES(
            bits,
            raim,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimTpFieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref RefInfo bitfield.
    struct RefInfoMembers
    {
        /// @brief Definition of <b>"timeRefGnss"</b> field.
        /// @see @ref ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssVal
        class TimeRefGnss : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>,
                comms::option::def::ValidNumValue<15>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssVal,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::ValidNumValueRange<0, 2>,
                    comms::option::def::ValidNumValue<15>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
            }
            
        };
        
        /// @brief Definition of <b>"utcStandard"</b> field.
        /// @see @ref ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardVal
        class UtcStandard : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 6>,
                comms::option::def::ValidNumValue<15>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardVal,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::ValidNumValueRange<0, 6>,
                    comms::option::def::ValidNumValue<15>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueName(val);
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
               TimeRefGnss,
               UtcStandard
            >;
    };
    
    /// @brief Definition of <b>"refInfo"</b> field.
    class RefInfo : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename RefInfoMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename RefInfoMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b Field_timeRefGnss @b field_timeRefGnss() -
        ///         for RefInfoMembers::TimeRefGnss member field.
        ///     @li @b Field_utcStandard @b field_utcStandard() -
        ///         for RefInfoMembers::UtcStandard member field.
        COMMS_FIELD_MEMBERS_NAMES(
            timeRefGnss,
            utcStandard
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::TimTpFieldsCommon::RefInfoCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TowMS,
        TowSubMS,
        QErr,
        Week,
        Flags,
        RefInfo
    >;
};

/// @brief Definition of <b>"TIM-TP"</b> message class.
/// @details
///     See @ref TimTpFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimTp.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimTp : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimTp,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTp>,
        comms::option::def::FieldsImpl<typename TimTpFields<TOpt>::All>,
        comms::option::def::MsgType<TimTp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimTp,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTp>,
            comms::option::def::FieldsImpl<typename TimTpFields<TOpt>::All>,
            comms::option::def::MsgType<TimTp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_towMS type and @b field_towMS() fuction
    ///         for @ref TimTpFields::TowMS field.
    ///     @li @b Field_towSubMS type and @b field_towSubMS() fuction
    ///         for @ref TimTpFields::TowSubMS field.
    ///     @li @b Field_qErr type and @b field_qErr() fuction
    ///         for @ref TimTpFields::QErr field.
    ///     @li @b Field_week type and @b field_week() fuction
    ///         for @ref TimTpFields::Week field.
    ///     @li @b Field_flags type and @b field_flags() fuction
    ///         for @ref TimTpFields::Flags field.
    ///     @li @b Field_refInfo type and @b field_refInfo() fuction
    ///         for @ref TimTpFields::RefInfo field.
    COMMS_MSG_FIELDS_NAMES(
        towMS,
        towSubMS,
        qErr,
        week,
        flags,
        refInfo
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::TimTpCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


