// Generated by commsdsl2comms v3.5.0

#pragma once

#include <tuple>
#include "cc_plugin/message/AckAck.h"
#include "cc_plugin/message/AckNak.h"
#include "cc_plugin/message/AidAlm.h"
#include "cc_plugin/message/AidAlmPoll.h"
#include "cc_plugin/message/AidAlmPollSv.h"
#include "cc_plugin/message/AidAlp.h"
#include "cc_plugin/message/AidAlpData.h"
#include "cc_plugin/message/AidAlpStatus.h"
#include "cc_plugin/message/AidAlpsrv.h"
#include "cc_plugin/message/AidAlpsrvToServer.h"
#include "cc_plugin/message/AidAop.h"
#include "cc_plugin/message/AidAopPoll.h"
#include "cc_plugin/message/AidAopPollSv.h"
#include "cc_plugin/message/AidAopU8.h"
#include "cc_plugin/message/AidData.h"
#include "cc_plugin/message/AidEph.h"
#include "cc_plugin/message/AidEphPoll.h"
#include "cc_plugin/message/AidEphPollSv.h"
#include "cc_plugin/message/AidHui.h"
#include "cc_plugin/message/AidHuiPoll.h"
#include "cc_plugin/message/AidIni.h"
#include "cc_plugin/message/AidIniPoll.h"
#include "cc_plugin/message/AidReq.h"
#include "cc_plugin/message/CfgAnt.h"
#include "cc_plugin/message/CfgAntPoll.h"
#include "cc_plugin/message/CfgCfg.h"
#include "cc_plugin/message/CfgDat.h"
#include "cc_plugin/message/CfgDatPoll.h"
#include "cc_plugin/message/CfgDatStandard.h"
#include "cc_plugin/message/CfgDatUser.h"
#include "cc_plugin/message/CfgDgnss.h"
#include "cc_plugin/message/CfgDgnssPoll.h"
#include "cc_plugin/message/CfgDosc.h"
#include "cc_plugin/message/CfgDoscPoll.h"
#include "cc_plugin/message/CfgEkf.h"
#include "cc_plugin/message/CfgEkfPoll.h"
#include "cc_plugin/message/CfgEsrc.h"
#include "cc_plugin/message/CfgEsrcPoll.h"
#include "cc_plugin/message/CfgFixseed.h"
#include "cc_plugin/message/CfgFxn.h"
#include "cc_plugin/message/CfgFxnPoll.h"
#include "cc_plugin/message/CfgGeofence.h"
#include "cc_plugin/message/CfgGeofencePoll.h"
#include "cc_plugin/message/CfgGnss.h"
#include "cc_plugin/message/CfgGnssPoll.h"
#include "cc_plugin/message/CfgHnr.h"
#include "cc_plugin/message/CfgHnrPoll.h"
#include "cc_plugin/message/CfgInf.h"
#include "cc_plugin/message/CfgInfPoll.h"
#include "cc_plugin/message/CfgItfm.h"
#include "cc_plugin/message/CfgItfmPoll.h"
#include "cc_plugin/message/CfgLogfilter.h"
#include "cc_plugin/message/CfgLogfilterPoll.h"
#include "cc_plugin/message/CfgMsg.h"
#include "cc_plugin/message/CfgMsgCurrent.h"
#include "cc_plugin/message/CfgMsgPoll.h"
#include "cc_plugin/message/CfgNav5.h"
#include "cc_plugin/message/CfgNav5Poll.h"
#include "cc_plugin/message/CfgNavx5.h"
#include "cc_plugin/message/CfgNavx5Poll.h"
#include "cc_plugin/message/CfgNavx5V2.h"
#include "cc_plugin/message/CfgNavx5V3.h"
#include "cc_plugin/message/CfgNmea.h"
#include "cc_plugin/message/CfgNmeaPoll.h"
#include "cc_plugin/message/CfgNmeaV0.h"
#include "cc_plugin/message/CfgNmeaV1.h"
#include "cc_plugin/message/CfgNvs.h"
#include "cc_plugin/message/CfgOdo.h"
#include "cc_plugin/message/CfgOdoPoll.h"
#include "cc_plugin/message/CfgPm.h"
#include "cc_plugin/message/CfgPm2.h"
#include "cc_plugin/message/CfgPm2Poll.h"
#include "cc_plugin/message/CfgPm2V2.h"
#include "cc_plugin/message/CfgPmPoll.h"
#include "cc_plugin/message/CfgPms.h"
#include "cc_plugin/message/CfgPmsPoll.h"
#include "cc_plugin/message/CfgPrtDdc.h"
#include "cc_plugin/message/CfgPrtPoll.h"
#include "cc_plugin/message/CfgPrtPortPoll.h"
#include "cc_plugin/message/CfgPrtSpi.h"
#include "cc_plugin/message/CfgPrtUart.h"
#include "cc_plugin/message/CfgPrtUsb.h"
#include "cc_plugin/message/CfgPwr.h"
#include "cc_plugin/message/CfgRate.h"
#include "cc_plugin/message/CfgRatePoll.h"
#include "cc_plugin/message/CfgRinv.h"
#include "cc_plugin/message/CfgRinvPoll.h"
#include "cc_plugin/message/CfgRst.h"
#include "cc_plugin/message/CfgRxm.h"
#include "cc_plugin/message/CfgRxmPoll.h"
#include "cc_plugin/message/CfgSbas.h"
#include "cc_plugin/message/CfgSbasPoll.h"
#include "cc_plugin/message/CfgSmgr.h"
#include "cc_plugin/message/CfgSmgrPoll.h"
#include "cc_plugin/message/CfgTmode.h"
#include "cc_plugin/message/CfgTmode2.h"
#include "cc_plugin/message/CfgTmode2Poll.h"
#include "cc_plugin/message/CfgTmode3.h"
#include "cc_plugin/message/CfgTmode3Poll.h"
#include "cc_plugin/message/CfgTmodePoll.h"
#include "cc_plugin/message/CfgTp.h"
#include "cc_plugin/message/CfgTp5.h"
#include "cc_plugin/message/CfgTp5Poll.h"
#include "cc_plugin/message/CfgTp5PollSelect.h"
#include "cc_plugin/message/CfgTpPoll.h"
#include "cc_plugin/message/CfgTxslot.h"
#include "cc_plugin/message/CfgUsb.h"
#include "cc_plugin/message/CfgUsbPoll.h"
#include "cc_plugin/message/EsfIns.h"
#include "cc_plugin/message/EsfInsPoll.h"
#include "cc_plugin/message/EsfMeas.h"
#include "cc_plugin/message/EsfMeasPoll.h"
#include "cc_plugin/message/EsfRaw.h"
#include "cc_plugin/message/EsfStatus.h"
#include "cc_plugin/message/EsfStatusPoll.h"
#include "cc_plugin/message/HnrPvt.h"
#include "cc_plugin/message/HnrPvtPoll.h"
#include "cc_plugin/message/InfDebug.h"
#include "cc_plugin/message/InfError.h"
#include "cc_plugin/message/InfNotice.h"
#include "cc_plugin/message/InfTest.h"
#include "cc_plugin/message/InfWarning.h"
#include "cc_plugin/message/LogCreate.h"
#include "cc_plugin/message/LogErase.h"
#include "cc_plugin/message/LogFindtime.h"
#include "cc_plugin/message/LogFindtimeResp.h"
#include "cc_plugin/message/LogInfo.h"
#include "cc_plugin/message/LogInfoPoll.h"
#include "cc_plugin/message/LogRetrieve.h"
#include "cc_plugin/message/LogRetrievepos.h"
#include "cc_plugin/message/LogRetrieveposextra.h"
#include "cc_plugin/message/LogRetrievestring.h"
#include "cc_plugin/message/LogString.h"
#include "cc_plugin/message/MgaAck.h"
#include "cc_plugin/message/MgaAno.h"
#include "cc_plugin/message/MgaBdsAlm.h"
#include "cc_plugin/message/MgaBdsEph.h"
#include "cc_plugin/message/MgaBdsHealth.h"
#include "cc_plugin/message/MgaBdsIono.h"
#include "cc_plugin/message/MgaBdsUtc.h"
#include "cc_plugin/message/MgaDbd.h"
#include "cc_plugin/message/MgaDbdPoll.h"
#include "cc_plugin/message/MgaFlashAck.h"
#include "cc_plugin/message/MgaFlashEph.h"
#include "cc_plugin/message/MgaFlashStop.h"
#include "cc_plugin/message/MgaGalAlm.h"
#include "cc_plugin/message/MgaGalEph.h"
#include "cc_plugin/message/MgaGalTimeoffset.h"
#include "cc_plugin/message/MgaGalUtc.h"
#include "cc_plugin/message/MgaGloAlm.h"
#include "cc_plugin/message/MgaGloEph.h"
#include "cc_plugin/message/MgaGloTimeoffset.h"
#include "cc_plugin/message/MgaGpsAlm.h"
#include "cc_plugin/message/MgaGpsEph.h"
#include "cc_plugin/message/MgaGpsHealth.h"
#include "cc_plugin/message/MgaGpsIono.h"
#include "cc_plugin/message/MgaGpsUtc.h"
#include "cc_plugin/message/MgaIniClkd.h"
#include "cc_plugin/message/MgaIniEop.h"
#include "cc_plugin/message/MgaIniFreq.h"
#include "cc_plugin/message/MgaIniPosLlh.h"
#include "cc_plugin/message/MgaIniPosXyz.h"
#include "cc_plugin/message/MgaIniTimeGnss.h"
#include "cc_plugin/message/MgaIniTimeUtc.h"
#include "cc_plugin/message/MgaQzssAlm.h"
#include "cc_plugin/message/MgaQzssEph.h"
#include "cc_plugin/message/MgaQzssHealth.h"
#include "cc_plugin/message/MonGnss.h"
#include "cc_plugin/message/MonGnssPoll.h"
#include "cc_plugin/message/MonHw.h"
#include "cc_plugin/message/MonHw2.h"
#include "cc_plugin/message/MonHw2Poll.h"
#include "cc_plugin/message/MonHwPoll.h"
#include "cc_plugin/message/MonIo.h"
#include "cc_plugin/message/MonIoPoll.h"
#include "cc_plugin/message/MonMsgpp.h"
#include "cc_plugin/message/MonMsgppPoll.h"
#include "cc_plugin/message/MonPatch.h"
#include "cc_plugin/message/MonPatchPoll.h"
#include "cc_plugin/message/MonRxbuf.h"
#include "cc_plugin/message/MonRxbufPoll.h"
#include "cc_plugin/message/MonRxr.h"
#include "cc_plugin/message/MonSmgr.h"
#include "cc_plugin/message/MonSmgrPoll.h"
#include "cc_plugin/message/MonTxbuf.h"
#include "cc_plugin/message/MonTxbufPoll.h"
#include "cc_plugin/message/MonVer.h"
#include "cc_plugin/message/MonVerPoll.h"
#include "cc_plugin/message/NavAopstatus.h"
#include "cc_plugin/message/NavAopstatusPoll.h"
#include "cc_plugin/message/NavAopstatusUblox8.h"
#include "cc_plugin/message/NavAtt.h"
#include "cc_plugin/message/NavAttPoll.h"
#include "cc_plugin/message/NavClock.h"
#include "cc_plugin/message/NavClockPoll.h"
#include "cc_plugin/message/NavDgps.h"
#include "cc_plugin/message/NavDgpsPoll.h"
#include "cc_plugin/message/NavDop.h"
#include "cc_plugin/message/NavDopPoll.h"
#include "cc_plugin/message/NavEoe.h"
#include "cc_plugin/message/NavGeofence.h"
#include "cc_plugin/message/NavGeofencePoll.h"
#include "cc_plugin/message/NavHpposecef.h"
#include "cc_plugin/message/NavHpposecefPoll.h"
#include "cc_plugin/message/NavHpposllh.h"
#include "cc_plugin/message/NavHpposllhPoll.h"
#include "cc_plugin/message/NavOdo.h"
#include "cc_plugin/message/NavOdoPoll.h"
#include "cc_plugin/message/NavOrb.h"
#include "cc_plugin/message/NavOrbPoll.h"
#include "cc_plugin/message/NavPosecef.h"
#include "cc_plugin/message/NavPosecefPoll.h"
#include "cc_plugin/message/NavPosllh.h"
#include "cc_plugin/message/NavPosllhPoll.h"
#include "cc_plugin/message/NavPvt.h"
#include "cc_plugin/message/NavPvtPoll.h"
#include "cc_plugin/message/NavPvt_u8.h"
#include "cc_plugin/message/NavRelposned.h"
#include "cc_plugin/message/NavRelposnedPoll.h"
#include "cc_plugin/message/NavResetodo.h"
#include "cc_plugin/message/NavSat.h"
#include "cc_plugin/message/NavSatPoll.h"
#include "cc_plugin/message/NavSbas.h"
#include "cc_plugin/message/NavSbasPoll.h"
#include "cc_plugin/message/NavSol.h"
#include "cc_plugin/message/NavSolPoll.h"
#include "cc_plugin/message/NavStatus.h"
#include "cc_plugin/message/NavStatusPoll.h"
#include "cc_plugin/message/NavSvin.h"
#include "cc_plugin/message/NavSvinPoll.h"
#include "cc_plugin/message/NavSvinfo.h"
#include "cc_plugin/message/NavSvinfoPoll.h"
#include "cc_plugin/message/NavTimebds.h"
#include "cc_plugin/message/NavTimebdsPoll.h"
#include "cc_plugin/message/NavTimegal.h"
#include "cc_plugin/message/NavTimegalPoll.h"
#include "cc_plugin/message/NavTimeglo.h"
#include "cc_plugin/message/NavTimegloPoll.h"
#include "cc_plugin/message/NavTimegps.h"
#include "cc_plugin/message/NavTimegpsPoll.h"
#include "cc_plugin/message/NavTimels.h"
#include "cc_plugin/message/NavTimelsPoll.h"
#include "cc_plugin/message/NavTimeutc.h"
#include "cc_plugin/message/NavTimeutcPoll.h"
#include "cc_plugin/message/NavVelecef.h"
#include "cc_plugin/message/NavVelecefPoll.h"
#include "cc_plugin/message/NavVelned.h"
#include "cc_plugin/message/NavVelnedPoll.h"
#include "cc_plugin/message/RxmAlm.h"
#include "cc_plugin/message/RxmAlmPoll.h"
#include "cc_plugin/message/RxmAlmPollSv.h"
#include "cc_plugin/message/RxmEph.h"
#include "cc_plugin/message/RxmEphPoll.h"
#include "cc_plugin/message/RxmEphPollSv.h"
#include "cc_plugin/message/RxmImes.h"
#include "cc_plugin/message/RxmImesPoll.h"
#include "cc_plugin/message/RxmMeasx.h"
#include "cc_plugin/message/RxmPmreq.h"
#include "cc_plugin/message/RxmPmreqV0.h"
#include "cc_plugin/message/RxmRaw.h"
#include "cc_plugin/message/RxmRawPoll.h"
#include "cc_plugin/message/RxmRawx.h"
#include "cc_plugin/message/RxmRawxPoll.h"
#include "cc_plugin/message/RxmRlmLong.h"
#include "cc_plugin/message/RxmRlmShort.h"
#include "cc_plugin/message/RxmRtcm.h"
#include "cc_plugin/message/RxmSfrb.h"
#include "cc_plugin/message/RxmSfrbx.h"
#include "cc_plugin/message/RxmSvsi.h"
#include "cc_plugin/message/RxmSvsiPoll.h"
#include "cc_plugin/message/SecSign.h"
#include "cc_plugin/message/SecUniqid.h"
#include "cc_plugin/message/SecUniqidPoll.h"
#include "cc_plugin/message/TimDosc.h"
#include "cc_plugin/message/TimFchg.h"
#include "cc_plugin/message/TimFchgPoll.h"
#include "cc_plugin/message/TimSmeas.h"
#include "cc_plugin/message/TimSvin.h"
#include "cc_plugin/message/TimSvinPoll.h"
#include "cc_plugin/message/TimTm2.h"
#include "cc_plugin/message/TimTm2Poll.h"
#include "cc_plugin/message/TimTos.h"
#include "cc_plugin/message/TimTp.h"
#include "cc_plugin/message/TimTpPoll.h"
#include "cc_plugin/message/TimVcocal.h"
#include "cc_plugin/message/TimVcocalExt.h"
#include "cc_plugin/message/TimVcocalPoll.h"
#include "cc_plugin/message/TimVcocalStop.h"
#include "cc_plugin/message/TimVrfy.h"
#include "cc_plugin/message/TimVrfyPoll.h"
#include "cc_plugin/message/UpdSosAck.h"
#include "cc_plugin/message/UpdSosClear.h"
#include "cc_plugin/message/UpdSosCreate.h"
#include "cc_plugin/message/UpdSosPoll.h"
#include "cc_plugin/message/UpdSosRestored.h"

namespace ublox
{

namespace cc_plugin
{

namespace input
{

using AllMessages =
    std::tuple<
        ublox::cc_plugin::message::NavPosecef,
        ublox::cc_plugin::message::NavPosecefPoll,
        ublox::cc_plugin::message::NavPosllh,
        ublox::cc_plugin::message::NavPosllhPoll,
        ublox::cc_plugin::message::NavStatus,
        ublox::cc_plugin::message::NavStatusPoll,
        ublox::cc_plugin::message::NavDop,
        ublox::cc_plugin::message::NavDopPoll,
        ublox::cc_plugin::message::NavAtt,
        ublox::cc_plugin::message::NavAttPoll,
        ublox::cc_plugin::message::NavSol,
        ublox::cc_plugin::message::NavSolPoll,
        ublox::cc_plugin::message::NavPvt_u8,
        ublox::cc_plugin::message::NavPvt,
        ublox::cc_plugin::message::NavPvtPoll,
        ublox::cc_plugin::message::NavOdo,
        ublox::cc_plugin::message::NavOdoPoll,
        ublox::cc_plugin::message::NavResetodo,
        ublox::cc_plugin::message::NavVelecef,
        ublox::cc_plugin::message::NavVelecefPoll,
        ublox::cc_plugin::message::NavVelned,
        ublox::cc_plugin::message::NavVelnedPoll,
        ublox::cc_plugin::message::NavHpposecef,
        ublox::cc_plugin::message::NavHpposecefPoll,
        ublox::cc_plugin::message::NavHpposllh,
        ublox::cc_plugin::message::NavHpposllhPoll,
        ublox::cc_plugin::message::NavTimegps,
        ublox::cc_plugin::message::NavTimegpsPoll,
        ublox::cc_plugin::message::NavTimeutc,
        ublox::cc_plugin::message::NavTimeutcPoll,
        ublox::cc_plugin::message::NavClock,
        ublox::cc_plugin::message::NavClockPoll,
        ublox::cc_plugin::message::NavTimeglo,
        ublox::cc_plugin::message::NavTimegloPoll,
        ublox::cc_plugin::message::NavTimebds,
        ublox::cc_plugin::message::NavTimebdsPoll,
        ublox::cc_plugin::message::NavTimegal,
        ublox::cc_plugin::message::NavTimegalPoll,
        ublox::cc_plugin::message::NavTimels,
        ublox::cc_plugin::message::NavTimelsPoll,
        ublox::cc_plugin::message::NavSvinfo,
        ublox::cc_plugin::message::NavSvinfoPoll,
        ublox::cc_plugin::message::NavDgps,
        ublox::cc_plugin::message::NavDgpsPoll,
        ublox::cc_plugin::message::NavSbas,
        ublox::cc_plugin::message::NavSbasPoll,
        ublox::cc_plugin::message::NavOrb,
        ublox::cc_plugin::message::NavOrbPoll,
        ublox::cc_plugin::message::NavSat,
        ublox::cc_plugin::message::NavSatPoll,
        ublox::cc_plugin::message::NavGeofence,
        ublox::cc_plugin::message::NavGeofencePoll,
        ublox::cc_plugin::message::NavSvin,
        ublox::cc_plugin::message::NavSvinPoll,
        ublox::cc_plugin::message::NavRelposned,
        ublox::cc_plugin::message::NavRelposnedPoll,
        ublox::cc_plugin::message::NavAopstatus,
        ublox::cc_plugin::message::NavAopstatusUblox8,
        ublox::cc_plugin::message::NavAopstatusPoll,
        ublox::cc_plugin::message::NavEoe,
        ublox::cc_plugin::message::RxmRaw,
        ublox::cc_plugin::message::RxmRawPoll,
        ublox::cc_plugin::message::RxmSfrb,
        ublox::cc_plugin::message::RxmSfrbx,
        ublox::cc_plugin::message::RxmMeasx,
        ublox::cc_plugin::message::RxmRawx,
        ublox::cc_plugin::message::RxmRawxPoll,
        ublox::cc_plugin::message::RxmSvsi,
        ublox::cc_plugin::message::RxmSvsiPoll,
        ublox::cc_plugin::message::RxmAlm,
        ublox::cc_plugin::message::RxmAlmPollSv,
        ublox::cc_plugin::message::RxmAlmPoll,
        ublox::cc_plugin::message::RxmEph,
        ublox::cc_plugin::message::RxmEphPollSv,
        ublox::cc_plugin::message::RxmEphPoll,
        ublox::cc_plugin::message::RxmRtcm,
        ublox::cc_plugin::message::RxmPmreqV0,
        ublox::cc_plugin::message::RxmPmreq,
        ublox::cc_plugin::message::RxmRlmLong,
        ublox::cc_plugin::message::RxmRlmShort,
        ublox::cc_plugin::message::RxmImes,
        ublox::cc_plugin::message::RxmImesPoll,
        ublox::cc_plugin::message::InfError,
        ublox::cc_plugin::message::InfWarning,
        ublox::cc_plugin::message::InfNotice,
        ublox::cc_plugin::message::InfTest,
        ublox::cc_plugin::message::InfDebug,
        ublox::cc_plugin::message::AckNak,
        ublox::cc_plugin::message::AckAck,
        ublox::cc_plugin::message::CfgPrtDdc,
        ublox::cc_plugin::message::CfgPrtUart,
        ublox::cc_plugin::message::CfgPrtUsb,
        ublox::cc_plugin::message::CfgPrtSpi,
        ublox::cc_plugin::message::CfgPrtPortPoll,
        ublox::cc_plugin::message::CfgPrtPoll,
        ublox::cc_plugin::message::CfgMsg,
        ublox::cc_plugin::message::CfgMsgCurrent,
        ublox::cc_plugin::message::CfgMsgPoll,
        ublox::cc_plugin::message::CfgInf,
        ublox::cc_plugin::message::CfgInfPoll,
        ublox::cc_plugin::message::CfgRst,
        ublox::cc_plugin::message::CfgDat,
        ublox::cc_plugin::message::CfgDatUser,
        ublox::cc_plugin::message::CfgDatStandard,
        ublox::cc_plugin::message::CfgDatPoll,
        ublox::cc_plugin::message::CfgTp,
        ublox::cc_plugin::message::CfgTpPoll,
        ublox::cc_plugin::message::CfgRate,
        ublox::cc_plugin::message::CfgRatePoll,
        ublox::cc_plugin::message::CfgCfg,
        ublox::cc_plugin::message::CfgFxn,
        ublox::cc_plugin::message::CfgFxnPoll,
        ublox::cc_plugin::message::CfgRxm,
        ublox::cc_plugin::message::CfgRxmPoll,
        ublox::cc_plugin::message::CfgEkf,
        ublox::cc_plugin::message::CfgEkfPoll,
        ublox::cc_plugin::message::CfgAnt,
        ublox::cc_plugin::message::CfgAntPoll,
        ublox::cc_plugin::message::CfgSbas,
        ublox::cc_plugin::message::CfgSbasPoll,
        ublox::cc_plugin::message::CfgNmeaV1,
        ublox::cc_plugin::message::CfgNmeaV0,
        ublox::cc_plugin::message::CfgNmea,
        ublox::cc_plugin::message::CfgNmeaPoll,
        ublox::cc_plugin::message::CfgUsb,
        ublox::cc_plugin::message::CfgUsbPoll,
        ublox::cc_plugin::message::CfgTmode,
        ublox::cc_plugin::message::CfgTmodePoll,
        ublox::cc_plugin::message::CfgOdo,
        ublox::cc_plugin::message::CfgOdoPoll,
        ublox::cc_plugin::message::CfgNvs,
        ublox::cc_plugin::message::CfgNavx5V3,
        ublox::cc_plugin::message::CfgNavx5V2,
        ublox::cc_plugin::message::CfgNavx5,
        ublox::cc_plugin::message::CfgNavx5Poll,
        ublox::cc_plugin::message::CfgNav5,
        ublox::cc_plugin::message::CfgNav5Poll,
        ublox::cc_plugin::message::CfgTp5,
        ublox::cc_plugin::message::CfgTp5PollSelect,
        ublox::cc_plugin::message::CfgTp5Poll,
        ublox::cc_plugin::message::CfgPm,
        ublox::cc_plugin::message::CfgPmPoll,
        ublox::cc_plugin::message::CfgRinv,
        ublox::cc_plugin::message::CfgRinvPoll,
        ublox::cc_plugin::message::CfgItfm,
        ublox::cc_plugin::message::CfgItfmPoll,
        ublox::cc_plugin::message::CfgPm2V2,
        ublox::cc_plugin::message::CfgPm2,
        ublox::cc_plugin::message::CfgPm2Poll,
        ublox::cc_plugin::message::CfgTmode2,
        ublox::cc_plugin::message::CfgTmode2Poll,
        ublox::cc_plugin::message::CfgGnss,
        ublox::cc_plugin::message::CfgGnssPoll,
        ublox::cc_plugin::message::CfgLogfilter,
        ublox::cc_plugin::message::CfgLogfilterPoll,
        ublox::cc_plugin::message::CfgTxslot,
        ublox::cc_plugin::message::CfgPwr,
        ublox::cc_plugin::message::CfgHnr,
        ublox::cc_plugin::message::CfgHnrPoll,
        ublox::cc_plugin::message::CfgEsrc,
        ublox::cc_plugin::message::CfgEsrcPoll,
        ublox::cc_plugin::message::CfgDosc,
        ublox::cc_plugin::message::CfgDoscPoll,
        ublox::cc_plugin::message::CfgSmgr,
        ublox::cc_plugin::message::CfgSmgrPoll,
        ublox::cc_plugin::message::CfgGeofence,
        ublox::cc_plugin::message::CfgGeofencePoll,
        ublox::cc_plugin::message::CfgDgnss,
        ublox::cc_plugin::message::CfgDgnssPoll,
        ublox::cc_plugin::message::CfgTmode3,
        ublox::cc_plugin::message::CfgTmode3Poll,
        ublox::cc_plugin::message::CfgFixseed,
        ublox::cc_plugin::message::CfgPms,
        ublox::cc_plugin::message::CfgPmsPoll,
        ublox::cc_plugin::message::UpdSosRestored,
        ublox::cc_plugin::message::UpdSosAck,
        ublox::cc_plugin::message::UpdSosClear,
        ublox::cc_plugin::message::UpdSosCreate,
        ublox::cc_plugin::message::UpdSosPoll,
        ublox::cc_plugin::message::MonIo,
        ublox::cc_plugin::message::MonIoPoll,
        ublox::cc_plugin::message::MonVer,
        ublox::cc_plugin::message::MonVerPoll,
        ublox::cc_plugin::message::MonMsgpp,
        ublox::cc_plugin::message::MonMsgppPoll,
        ublox::cc_plugin::message::MonRxbuf,
        ublox::cc_plugin::message::MonRxbufPoll,
        ublox::cc_plugin::message::MonTxbuf,
        ublox::cc_plugin::message::MonTxbufPoll,
        ublox::cc_plugin::message::MonHw,
        ublox::cc_plugin::message::MonHwPoll,
        ublox::cc_plugin::message::MonHw2,
        ublox::cc_plugin::message::MonHw2Poll,
        ublox::cc_plugin::message::MonRxr,
        ublox::cc_plugin::message::MonPatch,
        ublox::cc_plugin::message::MonPatchPoll,
        ublox::cc_plugin::message::MonGnss,
        ublox::cc_plugin::message::MonGnssPoll,
        ublox::cc_plugin::message::MonSmgr,
        ublox::cc_plugin::message::MonSmgrPoll,
        ublox::cc_plugin::message::AidReq,
        ublox::cc_plugin::message::AidIni,
        ublox::cc_plugin::message::AidIniPoll,
        ublox::cc_plugin::message::AidHui,
        ublox::cc_plugin::message::AidHuiPoll,
        ublox::cc_plugin::message::AidData,
        ublox::cc_plugin::message::AidAlm,
        ublox::cc_plugin::message::AidAlmPollSv,
        ublox::cc_plugin::message::AidAlmPoll,
        ublox::cc_plugin::message::AidEph,
        ublox::cc_plugin::message::AidEphPollSv,
        ublox::cc_plugin::message::AidEphPoll,
        ublox::cc_plugin::message::AidAlpsrv,
        ublox::cc_plugin::message::AidAlpsrvToServer,
        ublox::cc_plugin::message::AidAopU8,
        ublox::cc_plugin::message::AidAop,
        ublox::cc_plugin::message::AidAopPollSv,
        ublox::cc_plugin::message::AidAopPoll,
        ublox::cc_plugin::message::AidAlp,
        ublox::cc_plugin::message::AidAlpStatus,
        ublox::cc_plugin::message::AidAlpData,
        ublox::cc_plugin::message::TimTp,
        ublox::cc_plugin::message::TimTpPoll,
        ublox::cc_plugin::message::TimTm2,
        ublox::cc_plugin::message::TimTm2Poll,
        ublox::cc_plugin::message::TimVrfy,
        ublox::cc_plugin::message::TimVrfyPoll,
        ublox::cc_plugin::message::TimSvin,
        ublox::cc_plugin::message::TimSvinPoll,
        ublox::cc_plugin::message::TimDosc,
        ublox::cc_plugin::message::TimTos,
        ublox::cc_plugin::message::TimSmeas,
        ublox::cc_plugin::message::TimVcocal,
        ublox::cc_plugin::message::TimVcocalExt,
        ublox::cc_plugin::message::TimVcocalStop,
        ublox::cc_plugin::message::TimVcocalPoll,
        ublox::cc_plugin::message::TimFchg,
        ublox::cc_plugin::message::TimFchgPoll,
        ublox::cc_plugin::message::EsfMeas,
        ublox::cc_plugin::message::EsfMeasPoll,
        ublox::cc_plugin::message::EsfRaw,
        ublox::cc_plugin::message::EsfStatus,
        ublox::cc_plugin::message::EsfStatusPoll,
        ublox::cc_plugin::message::EsfIns,
        ublox::cc_plugin::message::EsfInsPoll,
        ublox::cc_plugin::message::MgaGpsEph,
        ublox::cc_plugin::message::MgaGpsAlm,
        ublox::cc_plugin::message::MgaGpsHealth,
        ublox::cc_plugin::message::MgaGpsUtc,
        ublox::cc_plugin::message::MgaGpsIono,
        ublox::cc_plugin::message::MgaGalEph,
        ublox::cc_plugin::message::MgaGalAlm,
        ublox::cc_plugin::message::MgaGalTimeoffset,
        ublox::cc_plugin::message::MgaGalUtc,
        ublox::cc_plugin::message::MgaBdsEph,
        ublox::cc_plugin::message::MgaBdsAlm,
        ublox::cc_plugin::message::MgaBdsHealth,
        ublox::cc_plugin::message::MgaBdsUtc,
        ublox::cc_plugin::message::MgaBdsIono,
        ublox::cc_plugin::message::MgaQzssEph,
        ublox::cc_plugin::message::MgaQzssAlm,
        ublox::cc_plugin::message::MgaQzssHealth,
        ublox::cc_plugin::message::MgaGloEph,
        ublox::cc_plugin::message::MgaGloAlm,
        ublox::cc_plugin::message::MgaGloTimeoffset,
        ublox::cc_plugin::message::MgaAno,
        ublox::cc_plugin::message::MgaFlashEph,
        ublox::cc_plugin::message::MgaFlashAck,
        ublox::cc_plugin::message::MgaFlashStop,
        ublox::cc_plugin::message::MgaIniPosXyz,
        ublox::cc_plugin::message::MgaIniPosLlh,
        ublox::cc_plugin::message::MgaIniTimeUtc,
        ublox::cc_plugin::message::MgaIniTimeGnss,
        ublox::cc_plugin::message::MgaIniClkd,
        ublox::cc_plugin::message::MgaIniFreq,
        ublox::cc_plugin::message::MgaIniEop,
        ublox::cc_plugin::message::MgaAck,
        ublox::cc_plugin::message::MgaDbd,
        ublox::cc_plugin::message::MgaDbdPoll,
        ublox::cc_plugin::message::LogErase,
        ublox::cc_plugin::message::LogString,
        ublox::cc_plugin::message::LogCreate,
        ublox::cc_plugin::message::LogInfo,
        ublox::cc_plugin::message::LogInfoPoll,
        ublox::cc_plugin::message::LogRetrieve,
        ublox::cc_plugin::message::LogRetrievepos,
        ublox::cc_plugin::message::LogRetrievestring,
        ublox::cc_plugin::message::LogFindtime,
        ublox::cc_plugin::message::LogFindtimeResp,
        ublox::cc_plugin::message::LogRetrieveposextra,
        ublox::cc_plugin::message::SecSign,
        ublox::cc_plugin::message::SecUniqid,
        ublox::cc_plugin::message::SecUniqidPoll,
        ublox::cc_plugin::message::HnrPvt,
        ublox::cc_plugin::message::HnrPvtPoll
    >;

} // namespace input

} // namespace cc_plugin

} // namespace ublox


