// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"CFG-RST"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/message/CfgRstCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgRst.
/// @tparam TOpt Extra options
/// @see @ref CfgRst
/// @headerfile "ublox/message/CfgRst.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgRstFields
{
    /// @brief Definition of <b>"navBbrMask"</b> field.
    class NavBbrMask : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0x7E00U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<2U>,
                comms::option::def::BitmaskReservedBits<0x7E00U, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_eph.
        ///      @li @b BitIdx_alm.
        ///      @li @b BitIdx_health.
        ///      @li @b BitIdx_klob.
        ///      @li @b BitIdx_pos.
        ///      @li @b BitIdx_clkd.
        ///      @li @b BitIdx_osc.
        ///      @li @b BitIdx_utc.
        ///      @li @b BitIdx_rtc.
        ///      @li @b BitIdx_aop.
        COMMS_BITMASK_BITS(
            eph=0,
            alm=1,
            health=2,
            klob=3,
            pos=4,
            clkd=5,
            osc=6,
            utc=7,
            rtc=8,
            aop=15
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_eph() and @b setBitValue_eph().
        ///      @li @b getBitValue_alm() and @b setBitValue_alm().
        ///      @li @b getBitValue_health() and @b setBitValue_health().
        ///      @li @b getBitValue_klob() and @b setBitValue_klob().
        ///      @li @b getBitValue_pos() and @b setBitValue_pos().
        ///      @li @b getBitValue_clkd() and @b setBitValue_clkd().
        ///      @li @b getBitValue_osc() and @b setBitValue_osc().
        ///      @li @b getBitValue_utc() and @b setBitValue_utc().
        ///      @li @b getBitValue_rtc() and @b setBitValue_rtc().
        ///      @li @b getBitValue_aop() and @b setBitValue_aop().
        COMMS_BITMASK_BITS_ACCESS(
            eph,
            alm,
            health,
            klob,
            pos,
            clkd,
            osc,
            utc,
            rtc,
            aop
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgRstFieldsCommon::NavBbrMaskCommon::name();
        }
        
        /// @brief Retrieve name of the bit.
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgRstFieldsCommon::NavBbrMaskCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"resetMode"</b> field.
    /// @see @ref ublox::message::CfgRstFieldsCommon::ResetModeVal
    class ResetMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ublox::message::CfgRstFieldsCommon::ResetModeVal,
            comms::option::def::ValidNumValueRange<0, 2>,
            comms::option::def::ValidNumValue<4>,
            comms::option::def::ValidNumValueRange<8, 9>
        >
    {
        using Base = 
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::CfgRstFieldsCommon::ResetModeVal,
                comms::option::def::ValidNumValueRange<0, 2>,
                comms::option::def::ValidNumValue<4>,
                comms::option::def::ValidNumValueRange<8, 9>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgRstFieldsCommon::ResetModeCommon::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return ublox::message::CfgRstFieldsCommon::ResetModeCommon::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
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
            return ublox::message::CfgRstFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        NavBbrMask,
        ResetMode,
        Reserved1
    >;
};

/// @brief Definition of <b>"CFG-RST"</b> message class.
/// @details
///     See @ref CfgRstFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgRst.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgRst : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgRst,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRst>,
        comms::option::def::FieldsImpl<typename CfgRstFields<TOpt>::All>,
        comms::option::def::MsgType<CfgRst<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgRst,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRst>,
            comms::option::def::FieldsImpl<typename CfgRstFields<TOpt>::All>,
            comms::option::def::MsgType<CfgRst<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_navBbrMask type and @b field_navBbrMask() fuction
    ///         for @ref CfgRstFields::NavBbrMask field.
    ///     @li @b Field_resetMode type and @b field_resetMode() fuction
    ///         for @ref CfgRstFields::ResetMode field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref CfgRstFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        navBbrMask,
        resetMode,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 4U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgRstCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


