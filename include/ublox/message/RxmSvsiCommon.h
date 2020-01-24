// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::RxmSvsi message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/ItowCommon.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::RxmSvsi message.
/// @see ublox::message::RxmSvsiFields
struct RxmSvsiFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSvsiFields::Itow field.
    using ItowCommon = ublox::field::ItowCommon;
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSvsiFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSvsiFields::Week field.
        using ValueType = std::int16_t;
    
        /// @brief Name of the @ref ublox::message::RxmSvsiFields::Week field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSvsiFields::NumVis field.
    struct NumVisCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSvsiFields::NumVis field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSvsiFields::NumVis field.
        static const char* name()
        {
            return "numVis";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::RxmSvsiFields::NumSV field.
    struct NumSVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::RxmSvsiFields::NumSV field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::RxmSvsiFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmSvsiFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmSvsiFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlag field.
            struct SvFlagMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Ura field.
                struct UraCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Ura field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Ura field.
                    static const char* name()
                    {
                        return "ura";
                    }
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Bits field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "healthy",
                            "ephVal",
                            "almVal",
                            "notAvail"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlag field.
            struct SvFlagCommon
            {
                /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlag field.
                static const char* name()
                {
                    return "svFlag";
                }
                
            };
            
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Azim field.
            struct AzimCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Azim field.
                using ValueType = std::int16_t;
            
                /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Azim field.
                static const char* name()
                {
                    return "azim";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Elev field.
            struct ElevCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Elev field.
                using ValueType = std::int8_t;
            
                /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Elev field.
                static const char* name()
                {
                    return "elev";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Age field.
            struct AgeMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::AlmAge field.
                struct AlmAgeCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::AlmAge field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::AlmAge field.
                    static const char* name()
                    {
                        return "almAge";
                    }
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::EphAge field.
                struct EphAgeCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::EphAge field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::EphAge field.
                    static const char* name()
                    {
                        return "ephAge";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Age field.
            struct AgeCommon
            {
                /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Age field.
                static const char* name()
                {
                    return "age";
                }
                
            };
            
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::RxmSvsiFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::RxmSvsiFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::RxmSvsiFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::RxmSvsiFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::RxmSvsi message.
/// @see ublox::message::RxmSvsi
struct RxmSvsiCommon
{
    /// @brief Name of the @ref ublox::message::RxmSvsi message.
    static const char* name()
    {
        return "RXM-SVSI";
    }
    
};

} // namespace message

} // namespace ublox


