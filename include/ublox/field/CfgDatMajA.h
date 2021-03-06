// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"cfgDatMajA"</b> field.

#pragma once

#include "comms/field/FloatValue.h"
#include "comms/options.h"
#include "ublox/field/CfgDatMajACommon.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"cfgDatMajA"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgDatMajA : public
    comms::field::FloatValue<
        ublox::field::FieldBase<>,
        double,
        TExtraOpts...,
        comms::option::def::UnitsMeters,
        comms::option::def::InvalidByDefault
    >
{
    using Base = 
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            double,
            TExtraOpts...,
            comms::option::def::UnitsMeters,
            comms::option::def::InvalidByDefault
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Name of the field.
    static const char* name()
    {
        return ublox::field::CfgDatMajACommon::name();
    }
    
    /// @brief Custom validity check
    bool valid() const
    {
        if (Base::valid()) {
            return true;
        }
    
        if ((static_cast<ValueType>(6300000.000000) <= Base::value()) &&
            (Base::value() <= static_cast<ValueType>(6500000.000000))) {
            return true;
        }
        
        return false;
    }
    
};

} // namespace field

} // namespace ublox


