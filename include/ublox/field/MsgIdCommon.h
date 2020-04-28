// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::MsgId field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "ublox/MsgId.h"

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::MsgId field.
struct MsgIdCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::MsgId field.
    using ValueType = ublox::MsgId;
    
    /// @brief Name of the @ref ublox::field::MsgId field.
    static const char* name()
    {
        return "MsgId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ublox::MsgId val)
    {
        using NameInfo = std::pair<ublox::MsgId, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(ublox::MsgId_NavPosecef, "NAV-POSECEF"),
            std::make_pair(ublox::MsgId_NavPosllh, "NAV-POSLLH"),
            std::make_pair(ublox::MsgId_NavStatus, "NAV-STATUS"),
            std::make_pair(ublox::MsgId_NavDop, "NAV-DOP"),
            std::make_pair(ublox::MsgId_NavAtt, "NAV-ATT"),
            std::make_pair(ublox::MsgId_NavSol, "NAV-SOL"),
            std::make_pair(ublox::MsgId_NavPvt, "NAV-PVT"),
            std::make_pair(ublox::MsgId_NavOdo, "NAV-ODO"),
            std::make_pair(ublox::MsgId_NavResetodo, "NAV-RESETODO"),
            std::make_pair(ublox::MsgId_NavVelecef, "NAV-VELECEF"),
            std::make_pair(ublox::MsgId_NavVelned, "NAV-VELNED"),
            std::make_pair(ublox::MsgId_NavHpposecef, "NAV-HPPOSECEF"),
            std::make_pair(ublox::MsgId_NavHpposllh, "NAV-HPPOSLLH"),
            std::make_pair(ublox::MsgId_NavTimegps, "NAV-TIMEGPS"),
            std::make_pair(ublox::MsgId_NavTimeutc, "NAV-TIMEUTC"),
            std::make_pair(ublox::MsgId_NavClock, "NAV-CLOCK"),
            std::make_pair(ublox::MsgId_NavTimeglo, "NAV-TIMEGLO"),
            std::make_pair(ublox::MsgId_NavTimebds, "NAV-TIMEBDS"),
            std::make_pair(ublox::MsgId_NavTimegal, "NAV-TIMEGAL"),
            std::make_pair(ublox::MsgId_NavTimels, "NAV-MsgId_NAV_TIMELS"),
            std::make_pair(ublox::MsgId_NavSvinfo, "NAV-SVINFO"),
            std::make_pair(ublox::MsgId_NavDgps, "NAV-DGPS"),
            std::make_pair(ublox::MsgId_NavSbas, "NAV-SBAS"),
            std::make_pair(ublox::MsgId_NavOrb, "NAV-ORB"),
            std::make_pair(ublox::MsgId_NavSat, "NAV-SAT"),
            std::make_pair(ublox::MsgId_NavGeofence, "NAV-GEOFENCE"),
            std::make_pair(ublox::MsgId_NavSvin, "NAV-SVIN"),
            std::make_pair(ublox::MsgId_NavRelposned, "NAV-RELPOSNED"),
            std::make_pair(ublox::MsgId_NavEkfstatus, "NAV-EKFSTATUS"),
            std::make_pair(ublox::MsgId_NavAopstatus, "NAV-AOPSTATUS"),
            std::make_pair(ublox::MsgId_NavEoe, "NAV-EOE"),
            std::make_pair(ublox::MsgId_RxmRaw, "RXM-RAW"),
            std::make_pair(ublox::MsgId_RxmSfrb, "RXM-SFRB"),
            std::make_pair(ublox::MsgId_RxmSfrbx, "RXM-SFRBX"),
            std::make_pair(ublox::MsgId_RxmMeasx, "RXM-MEASX"),
            std::make_pair(ublox::MsgId_RxmRawx, "RXM-RAWX"),
            std::make_pair(ublox::MsgId_RxmSvsi, "RXM-SVSI"),
            std::make_pair(ublox::MsgId_RxmAlm, "RXM-ALM"),
            std::make_pair(ublox::MsgId_RxmEph, "RXM-EPH"),
            std::make_pair(ublox::MsgId_RxmRtcm, "RXM-RTCM"),
            std::make_pair(ublox::MsgId_RxmPmreq, "RXM-PMREQ"),
            std::make_pair(ublox::MsgId_RxmRlm, "RXM-RLM"),
            std::make_pair(ublox::MsgId_RxmImes, "RXM-IMES"),
            std::make_pair(ublox::MsgId_InfError, "INF-ERROR"),
            std::make_pair(ublox::MsgId_InfWarning, "INF-WARNING"),
            std::make_pair(ublox::MsgId_InfNotice, "INF-NOTICE"),
            std::make_pair(ublox::MsgId_InfTest, "INF-TEST"),
            std::make_pair(ublox::MsgId_InfDebug, "INF-DEBUG"),
            std::make_pair(ublox::MsgId_AckNak, "ACK-NAK"),
            std::make_pair(ublox::MsgId_AckAck, "ACK-ACK"),
            std::make_pair(ublox::MsgId_CfgPrt, "CFG-PRT"),
            std::make_pair(ublox::MsgId_CfgMsg, "CFG-MSG"),
            std::make_pair(ublox::MsgId_CfgInf, "CFG-INF"),
            std::make_pair(ublox::MsgId_CfgRst, "CFG-RST"),
            std::make_pair(ublox::MsgId_CfgDat, "CFG-DAT"),
            std::make_pair(ublox::MsgId_CfgTp, "CFG-TP"),
            std::make_pair(ublox::MsgId_CfgRate, "CFG-RATE"),
            std::make_pair(ublox::MsgId_CfgCfg, "CFG-CFG"),
            std::make_pair(ublox::MsgId_CfgFxn, "CFG-FXN"),
            std::make_pair(ublox::MsgId_CfgRxm, "CFG-RXM"),
            std::make_pair(ublox::MsgId_CfgEkf, "CFG-EKF"),
            std::make_pair(ublox::MsgId_CfgAnt, "CFG-ANT"),
            std::make_pair(ublox::MsgId_CfgSbas, "CFG-SBAS"),
            std::make_pair(ublox::MsgId_CfgNmea, "CFG-NMEA"),
            std::make_pair(ublox::MsgId_CfgUsb, "CFG-USB"),
            std::make_pair(ublox::MsgId_CfgTmode, "CFG-TMODE"),
            std::make_pair(ublox::MsgId_CfgOdo, "CFG-ODO"),
            std::make_pair(ublox::MsgId_CfgNvs, "CFG-NVS"),
            std::make_pair(ublox::MsgId_CfgNavx5, "CFG-NAVX5"),
            std::make_pair(ublox::MsgId_CfgNav5, "CFG-NAV5"),
            std::make_pair(ublox::MsgId_CfgEsfgwt, "CFG-ESFGWT"),
            std::make_pair(ublox::MsgId_CfgTp5, "CFG-TP5"),
            std::make_pair(ublox::MsgId_CfgPm, "CFG-PM"),
            std::make_pair(ublox::MsgId_CfgRinv, "CFG-RINV"),
            std::make_pair(ublox::MsgId_CfgItfm, "CFG-ITFM"),
            std::make_pair(ublox::MsgId_CfgPm2, "CFG-PM2"),
            std::make_pair(ublox::MsgId_CfgTmode2, "CFG-TMODE2"),
            std::make_pair(ublox::MsgId_CfgGnss, "CFG-GNSS"),
            std::make_pair(ublox::MsgId_CfgLogfilter, "CFG-LOGFILTER"),
            std::make_pair(ublox::MsgId_CfgTxslot, "CFG-TXSLOT"),
            std::make_pair(ublox::MsgId_CfgPwr, "CFG-PWR"),
            std::make_pair(ublox::MsgId_CfgHnr, "CFG-HNR"),
            std::make_pair(ublox::MsgId_CfgEsrc, "CFG-ESRC"),
            std::make_pair(ublox::MsgId_CfgDosc, "CFG-DOSC"),
            std::make_pair(ublox::MsgId_CfgSmgr, "CFG-SMGR"),
            std::make_pair(ublox::MsgId_CfgGeofence, "CFG-GEOFENCE"),
            std::make_pair(ublox::MsgId_CfgDgnss, "CFG-DGNSS"),
            std::make_pair(ublox::MsgId_CfgTmode3, "CFG-TMODE3"),
            std::make_pair(ublox::MsgId_CfgFixseed, "CFG-FIXSEED"),
            std::make_pair(ublox::MsgId_CfgDynseed, "CFG-DYNSEED"),
            std::make_pair(ublox::MsgId_CfgPms, "CFG-PMS"),
            std::make_pair(ublox::MsgId_UpdSos, "UPD-SOS"),
            std::make_pair(ublox::MsgId_MonIo, "MON-IO"),
            std::make_pair(ublox::MsgId_MonVer, "MON-VER"),
            std::make_pair(ublox::MsgId_MonMsgpp, "MON-MSGPP"),
            std::make_pair(ublox::MsgId_MonRxbuf, "MON-RXBUF"),
            std::make_pair(ublox::MsgId_MonTxbuf, "MON-TXBUF"),
            std::make_pair(ublox::MsgId_MonHw, "MON-HW"),
            std::make_pair(ublox::MsgId_MonHw2, "MON-HW2"),
            std::make_pair(ublox::MsgId_MonRxr, "MON-RXR"),
            std::make_pair(ublox::MsgId_MonPatch, "MON-PATCH"),
            std::make_pair(ublox::MsgId_MonGnss, "MON-GNSS"),
            std::make_pair(ublox::MsgId_MonSmgr, "MON-SMGR"),
            std::make_pair(ublox::MsgId_AidReq, "AID-REQ"),
            std::make_pair(ublox::MsgId_AidIni, "AID-INI"),
            std::make_pair(ublox::MsgId_AidHui, "AID-HUI"),
            std::make_pair(ublox::MsgId_AidData, "AID-DATA"),
            std::make_pair(ublox::MsgId_AidAlm, "AID-ALM"),
            std::make_pair(ublox::MsgId_AidEph, "AID-EPH"),
            std::make_pair(ublox::MsgId_AidAlpsrv, "AID-ALPSRV"),
            std::make_pair(ublox::MsgId_AidAop, "AID-AOP"),
            std::make_pair(ublox::MsgId_AidAlp, "AID-ALP"),
            std::make_pair(ublox::MsgId_TimTp, "TIM-TP"),
            std::make_pair(ublox::MsgId_TimTm2, "TIM-TM2"),
            std::make_pair(ublox::MsgId_TimVrfy, "TIM-VRFY"),
            std::make_pair(ublox::MsgId_TimSvin, "TIM-SVIN"),
            std::make_pair(ublox::MsgId_TimDosc, "TIM-DOSC"),
            std::make_pair(ublox::MsgId_TimTos, "TIM-TOS"),
            std::make_pair(ublox::MsgId_TimSmeas, "TIM-SMEAS"),
            std::make_pair(ublox::MsgId_TimVcocal, "TIM-VCOCAL"),
            std::make_pair(ublox::MsgId_TimFchg, "TIM-FCHG"),
            std::make_pair(ublox::MsgId_TimHoc, "TIM-HOC"),
            std::make_pair(ublox::MsgId_EsfMeas, "ESF-MEAS"),
            std::make_pair(ublox::MsgId_EsfRaw, "ESF-RAW"),
            std::make_pair(ublox::MsgId_EsfStatus, "ESF-STATUS"),
            std::make_pair(ublox::MsgId_EsfIns, "ESF-INS"),
            std::make_pair(ublox::MsgId_MgaGps, "MGA-GPS"),
            std::make_pair(ublox::MsgId_MgaGal, "MGA-GAL"),
            std::make_pair(ublox::MsgId_MgaBds, "MGA-BDS"),
            std::make_pair(ublox::MsgId_MgaQzss, "MGA-QZSS"),
            std::make_pair(ublox::MsgId_MgaGlo, "MGA-GLO"),
            std::make_pair(ublox::MsgId_MgaAno, "MGA-ANO"),
            std::make_pair(ublox::MsgId_MgaFlash, "MGA-FLASH"),
            std::make_pair(ublox::MsgId_MgaIni, "MGA-INI"),
            std::make_pair(ublox::MsgId_MgaAck, "MGA-ACK"),
            std::make_pair(ublox::MsgId_MgaDbd, "MGA-DBD"),
            std::make_pair(ublox::MsgId_LogErase, "LOG-ERASE"),
            std::make_pair(ublox::MsgId_LogString, "LOG-STRING"),
            std::make_pair(ublox::MsgId_LogCreate, "LOG-CREATE"),
            std::make_pair(ublox::MsgId_LogInfo, "LOG-INFO"),
            std::make_pair(ublox::MsgId_LogRetrieve, "LOG-RETRIEVE"),
            std::make_pair(ublox::MsgId_LogRetrievepos, "LOG-RETRIEVEPOS"),
            std::make_pair(ublox::MsgId_LogRetrievestring, "LOG-RETRIEVESTRING"),
            std::make_pair(ublox::MsgId_LogFindtime, "LOG-FINDTIME"),
            std::make_pair(ublox::MsgId_LogRetrieveposextra, "LOG-RETRIEVEPOSEXTRA"),
            std::make_pair(ublox::MsgId_SecSign, "SEC-SIGN"),
            std::make_pair(ublox::MsgId_SecUniqid, "SEC-UNIQID"),
            std::make_pair(ublox::MsgId_HnrPvt, "HNR-PVT")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, ublox::MsgId v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::MsgId field.
using MsgIdVal = MsgIdCommon::ValueType;

} // namespace field

} // namespace ublox


