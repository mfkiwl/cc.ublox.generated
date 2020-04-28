// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains definition of <b>"CFG-NMEA (V0)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgMainTalkerId.h"
#include "ublox/field/CfgNmeaFilter.h"
#include "ublox/field/CfgNmeaFlags.h"
#include "ublox/field/CfgNmeaGnssToFilter.h"
#include "ublox/field/CfgNmeaGsvTalkerId.h"
#include "ublox/field/CfgNmeaNumSV.h"
#include "ublox/field/CfgNmeaSvNumbering.h"
#include "ublox/field/CfgNmeaVersion.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/CfgNmeaV0Common.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgNmeaV0.
/// @tparam TOpt Extra options
/// @see @ref CfgNmeaV0
/// @headerfile "ublox/message/CfgNmeaV0.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgNmeaV0Fields
{
    /// @brief Definition of <b>"filter"</b> field.
    struct Filter : public
        ublox::field::CfgNmeaFilter<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::FilterCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"nmeaVersion"</b> field.
    struct NmeaVersion : public
        ublox::field::CfgNmeaVersion<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::NmeaVersionCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"numSV"</b> field.
    struct NumSV : public
        ublox::field::CfgNmeaNumSV<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::NumSVCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    struct Flags : public
        ublox::field::CfgNmeaFlags<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"gnssToFilter"</b> field.
    struct GnssToFilter : public
        ublox::field::CfgNmeaGnssToFilter<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::GnssToFilterCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"svNumbering"</b> field.
    struct SvNumbering : public
        ublox::field::CfgNmeaSvNumbering<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::SvNumberingCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"mainTalkerId"</b> field.
    struct MainTalkerId : public
        ublox::field::CfgMainTalkerId<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::MainTalkerIdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"gsvTalkerId"</b> field.
    struct GsvTalkerId : public
        ublox::field::CfgNmeaGsvTalkerId<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::GsvTalkerIdCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgNmeaV0FieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Filter,
        NmeaVersion,
        NumSV,
        Flags,
        GnssToFilter,
        SvNumbering,
        MainTalkerId,
        GsvTalkerId,
        Version
    >;
};

/// @brief Definition of <b>"CFG-NMEA (V0)"</b> message class.
/// @details
///     See @ref CfgNmeaV0Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgNmeaV0.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgNmeaV0 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNmea>,
        comms::option::def::FieldsImpl<typename CfgNmeaV0Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgNmeaV0<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNmea>,
            comms::option::def::FieldsImpl<typename CfgNmeaV0Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgNmeaV0<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_filter type and @b field_filter() access fuction
    ///         for @ref CfgNmeaV0Fields::Filter field.
    ///     @li @b Field_nmeaVersion type and @b field_nmeaVersion() access fuction
    ///         for @ref CfgNmeaV0Fields::NmeaVersion field.
    ///     @li @b Field_numSV type and @b field_numSV() access fuction
    ///         for @ref CfgNmeaV0Fields::NumSV field.
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref CfgNmeaV0Fields::Flags field.
    ///     @li @b Field_gnssToFilter type and @b field_gnssToFilter() access fuction
    ///         for @ref CfgNmeaV0Fields::GnssToFilter field.
    ///     @li @b Field_svNumbering type and @b field_svNumbering() access fuction
    ///         for @ref CfgNmeaV0Fields::SvNumbering field.
    ///     @li @b Field_mainTalkerId type and @b field_mainTalkerId() access fuction
    ///         for @ref CfgNmeaV0Fields::MainTalkerId field.
    ///     @li @b Field_gsvTalkerId type and @b field_gsvTalkerId() access fuction
    ///         for @ref CfgNmeaV0Fields::GsvTalkerId field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref CfgNmeaV0Fields::Version field.
    COMMS_MSG_FIELDS_NAMES(
        filter,
        nmeaVersion,
        numSV,
        flags,
        gnssToFilter,
        svNumbering,
        mainTalkerId,
        gsvTalkerId,
        version
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::CfgNmeaV0Common::name();
    }
    
    
};

} // namespace message

} // namespace ublox


