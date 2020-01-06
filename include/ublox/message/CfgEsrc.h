// Generated by commsdsl2comms v3.3.0

/// @file
/// @brief Contains definition of <b>"CFG-ESRC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/message/CfgEsrcCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgEsrc.
/// @tparam TOpt Extra options
/// @see @ref CfgEsrc
/// @headerfile "ublox/message/CfgEsrc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgEsrcFields
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
            return ublox::message::CfgEsrcFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numSources"</b> field.
    struct NumSources : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgEsrcFieldsCommon::NumSourcesCommon::name();
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
            return ublox::message::CfgEsrcFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"extInt"</b> field.
            /// @see @ref ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::ExtIntVal
            class ExtInt : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::ExtIntVal,
                    comms::option::def::ValidNumValueRange<0, 1>
                >
            {
                using Base = 
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::ExtIntVal,
                        comms::option::def::ValidNumValueRange<0, 1>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;
            
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::ExtIntCommon::name();
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ValueType val)
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::ExtIntCommon::valueName(val);
                }
                
                /// @brief Retrieve name of the @b current value
                const char* valueName() const
                {
                    return valueName(Base::value());
                }
                
            };
            
            /// @brief Definition of <b>"sourceType"</b> field.
            /// @see @ref ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceTypeVal
            class SourceType : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceTypeVal,
                    comms::option::def::ValidNumValueRange<0, 3>
                >
            {
                using Base = 
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceTypeVal,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;
            
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceTypeCommon::name();
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ValueType val)
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceTypeCommon::valueName(val);
                }
                
                /// @brief Retrieve name of the @b current value
                const char* valueName() const
                {
                    return valueName(Base::value());
                }
                
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            class Flags : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<2U>,
                    comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<2U>,
                        comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_polarity, @b getBitValue_polarity() and @b setBitValue_polarity().
                ///      @li @b BitIdx_gnssUtc, @b getBitValue_gnssUtc() and @b setBitValue_gnssUtc().
                COMMS_BITMASK_BITS_SEQ(
                    polarity,
                    gnssUtc
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::name();
                }
                
                /// @brief Retrieve name of the bit.
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Definition of <b>"freq"</b> field.
            struct Freq : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 4>,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::FreqCommon::name();
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
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved2Common::name();
                }
                
            };
            
            /// @brief Definition of <b>"withTemp"</b> field.
            struct WithTemp : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::WithTempCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"withAge"</b> field.
            struct WithAge : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::WithAgeCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"timeToTemp"</b> field.
            struct TimeToTemp : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::UnitsSeconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::TimeToTempCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"maxDevLifeTime"</b> field.
            struct MaxDevLifeTime : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::MaxDevLifeTimeCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"offset"</b> field.
            struct Offset : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::OffsetCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"offsetUncertainty"</b> field.
            struct OffsetUncertainty : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::OffsetUncertaintyCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"jitter"</b> field.
            struct Jitter : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::JitterCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   ExtInt,
                   SourceType,
                   Flags,
                   Freq,
                   Reserved2,
                   WithTemp,
                   WithAge,
                   TimeToTemp,
                   MaxDevLifeTime,
                   Offset,
                   OffsetUncertainty,
                   Jitter
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
            ///     @li @b Field_extInt @b field_extInt() -
            ///         for ElementMembers::ExtInt member field.
            ///     @li @b Field_sourceType @b field_sourceType() -
            ///         for ElementMembers::SourceType member field.
            ///     @li @b Field_flags @b field_flags() -
            ///         for ElementMembers::Flags member field.
            ///     @li @b Field_freq @b field_freq() -
            ///         for ElementMembers::Freq member field.
            ///     @li @b Field_reserved2 @b field_reserved2() -
            ///         for ElementMembers::Reserved2 member field.
            ///     @li @b Field_withTemp @b field_withTemp() -
            ///         for ElementMembers::WithTemp member field.
            ///     @li @b Field_withAge @b field_withAge() -
            ///         for ElementMembers::WithAge member field.
            ///     @li @b Field_timeToTemp @b field_timeToTemp() -
            ///         for ElementMembers::TimeToTemp member field.
            ///     @li @b Field_maxDevLifeTime @b field_maxDevLifeTime() -
            ///         for ElementMembers::MaxDevLifeTime member field.
            ///     @li @b Field_offset @b field_offset() -
            ///         for ElementMembers::Offset member field.
            ///     @li @b Field_offsetUncertainty @b field_offsetUncertainty() -
            ///         for ElementMembers::OffsetUncertainty member field.
            ///     @li @b Field_jitter @b field_jitter() -
            ///         for ElementMembers::Jitter member field.
            COMMS_FIELD_MEMBERS_NAMES(
                extInt,
                sourceType,
                flags,
                freq,
                reserved2,
                withTemp,
                withAge,
                timeToTemp,
                maxDevLifeTime,
                offset,
                offsetUncertainty,
                jitter
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::CfgEsrcFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgEsrcFieldsCommon::ListCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        NumSources,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"CFG-ESRC"</b> message class.
/// @details
///     See @ref CfgEsrcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgEsrc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgEsrc : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgEsrc>,
        comms::option::def::FieldsImpl<typename CfgEsrcFields<TOpt>::All>,
        comms::option::def::MsgType<CfgEsrc<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgEsrc>,
            comms::option::def::FieldsImpl<typename CfgEsrcFields<TOpt>::All>,
            comms::option::def::MsgType<CfgEsrc<TMsgBase, TOpt> >,
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
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref CfgEsrcFields::Version field.
    ///     @li @b Field_numSources type and @b field_numSources() fuction
    ///         for @ref CfgEsrcFields::NumSources field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref CfgEsrcFields::Reserved1 field.
    ///     @li @b Field_list type and @b field_list() fuction
    ///         for @ref CfgEsrcFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        numSources,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgEsrcCommon::name();
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
            static_cast<std::size_t>(field_numSources().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numSources().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numSources().value())>::type;
                field_numSources().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


