// Generated by commsdsl2comms v3.3.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgPrtUart message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/CfgPrtFlagsCommon.h"
#include "ublox/field/CfgPrtInProtoMaskCommon.h"
#include "ublox/field/CfgPrtOutProtoMaskCommon.h"
#include "ublox/field/CfgPrtTxReadyCommon.h"
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgPrtUart message.
/// @see ublox::message::CfgPrtUartFields
struct CfgPrtUartFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::PortId field.
    struct PortIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPrtUartFields::PortId field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::PortId field.
        static const char* name()
        {
            return "portId";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::Reserved1 field.
    struct Reserved1Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Common types and functions for members of
    ///     @ref ublox::message::CfgPrtUartFields::TxReady field.
    using TxReadyMembersCommon = ublox::field::CfgPrtTxReadyMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::TxReady field.
    struct TxReadyCommon : public ublox::field::CfgPrtTxReadyCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::TxReady field.
        static const char* name()
        {
            return "txReady";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgPrtUartFields::Mode field.
    struct ModeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::ReservedLow field.
        struct ReservedLowCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtUartFields::ModeMembers::ReservedLow field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtUartFields::ModeMembers::ReservedLow field.
            static const char* name()
            {
                return "reservedLow";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLen field.
        struct CharLenCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLen field.
            enum class ValueType : std::uint8_t
            {
                Bits5 = 0, ///< value <b>5 bits</b>.
                Bits6 = 1, ///< value <b>6 bits</b>.
                Bits7 = 2, ///< value <b>7 bits</b>.
                Bits8 = 3, ///< value <b>8 bits</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLen field.
            static const char* name()
            {
                return "charLen";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "5 bits",
                    "6 bits",
                    "7 bits",
                    "8 bits"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLen field.
        using CharLenVal = CharLenCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::ReservedMid field.
        struct ReservedMidCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtUartFields::ModeMembers::ReservedMid field.
            using ValueType = std::uint8_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtUartFields::ModeMembers::ReservedMid field.
            static const char* name()
            {
                return "reservedMid";
            }
            
        };
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::Parity field.
        struct ParityCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::Parity field.
            enum class ValueType : std::uint8_t
            {
                Even = 0, ///< value @b Even
                Odd = 1, ///< value @b Odd
                None = 4, ///< value @b None
                None2 = 5, ///< value <b>None (2)</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 5, ///< Last defined value.
                ValuesLimit = 6, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgPrtUartFields::ModeMembers::Parity field.
            static const char* name()
            {
                return "parity";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Even",
                    "Odd",
                    nullptr,
                    nullptr,
                    "None",
                    "None (2)"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::Parity field.
        using ParityVal = ParityCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBits field.
        struct NStopBitsCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBits field.
            enum class ValueType : std::uint8_t
            {
                Bits_1 = 0, ///< value <b>1 bit</b>.
                Bits_1_5 = 1, ///< value <b>1.5 bits</b>.
                Bits_2 = 2, ///< value <b>2 bits</b>.
                Bits_0_5 = 3, ///< value <b>0.5 bit</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBits field.
            static const char* name()
            {
                return "nStopBits";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "1 bit",
                    "1.5 bits",
                    "2 bits",
                    "0.5 bit"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBits field.
        using NStopBitsVal = NStopBitsCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::ReservedHigh field.
        struct ReservedHighCommon
        {
            /// @brief Re-definition of the value type used by
            ///     ublox::message::CfgPrtUartFields::ModeMembers::ReservedHigh field.
            using ValueType = std::uint32_t;
        
            /// @brief Name of the @ref ublox::message::CfgPrtUartFields::ModeMembers::ReservedHigh field.
            static const char* name()
            {
                return "reservedHigh";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgPrtUartFields::Mode field.
    struct ModeCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::Mode field.
        static const char* name()
        {
            return "mode";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::BaudRate field.
    struct BaudRateCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgPrtUartFields::BaudRate field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::BaudRate field.
        static const char* name()
        {
            return "baudRate";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::InProtoMask field.
    struct InProtoMaskCommon : public ublox::field::CfgPrtInProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::InProtoMask field.
        static const char* name()
        {
            return "inProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::OutProtoMask field.
    struct OutProtoMaskCommon : public ublox::field::CfgPrtOutProtoMaskCommon
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::OutProtoMask field.
        static const char* name()
        {
            return "outProtoMask";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::CfgPrtFlags field.
    using CfgPrtFlagsCommon = ublox::field::CfgPrtFlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgPrtUartFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgPrtUartFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgPrtUart message.
/// @see ublox::message::CfgPrtUart
struct CfgPrtUartCommon
{
    /// @brief Name of the @ref ublox::message::CfgPrtUart message.
    static const char* name()
    {
        return "CFG-PRT (UART)";
    }
    
};

} // namespace message

} // namespace ublox


