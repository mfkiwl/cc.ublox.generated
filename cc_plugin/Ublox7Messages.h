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
#include "cc_plugin/message/CfgDatUser.h"
#include "cc_plugin/message/CfgGnss.h"
#include "cc_plugin/message/CfgGnssPoll.h"
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
#include "cc_plugin/message/CfgNmea.h"
#include "cc_plugin/message/CfgNmeaPoll.h"
#include "cc_plugin/message/CfgNmeaV0.h"
#include "cc_plugin/message/CfgNvs.h"
#include "cc_plugin/message/CfgPm2.h"
#include "cc_plugin/message/CfgPm2Poll.h"
#include "cc_plugin/message/CfgPrtDdc.h"
#include "cc_plugin/message/CfgPrtPoll.h"
#include "cc_plugin/message/CfgPrtPortPoll.h"
#include "cc_plugin/message/CfgPrtSpi.h"
#include "cc_plugin/message/CfgPrtUart.h"
#include "cc_plugin/message/CfgPrtUsb.h"
#include "cc_plugin/message/CfgRate.h"
#include "cc_plugin/message/CfgRatePoll.h"
#include "cc_plugin/message/CfgRinv.h"
#include "cc_plugin/message/CfgRinvPoll.h"
#include "cc_plugin/message/CfgRst.h"
#include "cc_plugin/message/CfgRxm.h"
#include "cc_plugin/message/CfgRxmPoll.h"
#include "cc_plugin/message/CfgSbas.h"
#include "cc_plugin/message/CfgSbasPoll.h"
#include "cc_plugin/message/CfgTp5.h"
#include "cc_plugin/message/CfgTp5Poll.h"
#include "cc_plugin/message/CfgTp5PollSelect.h"
#include "cc_plugin/message/CfgUsb.h"
#include "cc_plugin/message/CfgUsbPoll.h"
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
#include "cc_plugin/message/LogRetrievestring.h"
#include "cc_plugin/message/LogString.h"
#include "cc_plugin/message/MonHw.h"
#include "cc_plugin/message/MonHw2.h"
#include "cc_plugin/message/MonHw2Poll.h"
#include "cc_plugin/message/MonHwPoll.h"
#include "cc_plugin/message/MonIo.h"
#include "cc_plugin/message/MonIoPoll.h"
#include "cc_plugin/message/MonMsgpp.h"
#include "cc_plugin/message/MonMsgppPoll.h"
#include "cc_plugin/message/MonRxbuf.h"
#include "cc_plugin/message/MonRxbufPoll.h"
#include "cc_plugin/message/MonRxr.h"
#include "cc_plugin/message/MonTxbuf.h"
#include "cc_plugin/message/MonTxbufPoll.h"
#include "cc_plugin/message/MonVer.h"
#include "cc_plugin/message/MonVerPoll.h"
#include "cc_plugin/message/NavAopstatus.h"
#include "cc_plugin/message/NavAopstatusPoll.h"
#include "cc_plugin/message/NavClock.h"
#include "cc_plugin/message/NavClockPoll.h"
#include "cc_plugin/message/NavDgps.h"
#include "cc_plugin/message/NavDgpsPoll.h"
#include "cc_plugin/message/NavDop.h"
#include "cc_plugin/message/NavDopPoll.h"
#include "cc_plugin/message/NavPosecef.h"
#include "cc_plugin/message/NavPosecefPoll.h"
#include "cc_plugin/message/NavPosllh.h"
#include "cc_plugin/message/NavPosllhPoll.h"
#include "cc_plugin/message/NavPvt.h"
#include "cc_plugin/message/NavPvtPoll.h"
#include "cc_plugin/message/NavSbas.h"
#include "cc_plugin/message/NavSbasPoll.h"
#include "cc_plugin/message/NavSol.h"
#include "cc_plugin/message/NavSolPoll.h"
#include "cc_plugin/message/NavStatus.h"
#include "cc_plugin/message/NavStatusPoll.h"
#include "cc_plugin/message/NavSvinfo.h"
#include "cc_plugin/message/NavSvinfoPoll.h"
#include "cc_plugin/message/NavTimegps.h"
#include "cc_plugin/message/NavTimegpsPoll.h"
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
#include "cc_plugin/message/RxmPmreq.h"
#include "cc_plugin/message/RxmRaw.h"
#include "cc_plugin/message/RxmRawPoll.h"
#include "cc_plugin/message/RxmSfrb.h"
#include "cc_plugin/message/RxmSvsi.h"
#include "cc_plugin/message/RxmSvsiPoll.h"
#include "cc_plugin/message/TimTm2.h"
#include "cc_plugin/message/TimTm2Poll.h"
#include "cc_plugin/message/TimTp.h"
#include "cc_plugin/message/TimTpPoll.h"
#include "cc_plugin/message/TimVrfy.h"
#include "cc_plugin/message/TimVrfyPoll.h"

namespace ublox
{

namespace cc_plugin
{

using Ublox7Messages =
    std::tuple<
        ublox::cc_plugin::message::NavPosecef,
        ublox::cc_plugin::message::NavPosecefPoll,
        ublox::cc_plugin::message::NavPosllh,
        ublox::cc_plugin::message::NavPosllhPoll,
        ublox::cc_plugin::message::NavStatus,
        ublox::cc_plugin::message::NavStatusPoll,
        ublox::cc_plugin::message::NavDop,
        ublox::cc_plugin::message::NavDopPoll,
        ublox::cc_plugin::message::NavSol,
        ublox::cc_plugin::message::NavSolPoll,
        ublox::cc_plugin::message::NavPvt,
        ublox::cc_plugin::message::NavPvtPoll,
        ublox::cc_plugin::message::NavVelecef,
        ublox::cc_plugin::message::NavVelecefPoll,
        ublox::cc_plugin::message::NavVelned,
        ublox::cc_plugin::message::NavVelnedPoll,
        ublox::cc_plugin::message::NavTimegps,
        ublox::cc_plugin::message::NavTimegpsPoll,
        ublox::cc_plugin::message::NavTimeutc,
        ublox::cc_plugin::message::NavTimeutcPoll,
        ublox::cc_plugin::message::NavClock,
        ublox::cc_plugin::message::NavClockPoll,
        ublox::cc_plugin::message::NavSvinfo,
        ublox::cc_plugin::message::NavSvinfoPoll,
        ublox::cc_plugin::message::NavDgps,
        ublox::cc_plugin::message::NavDgpsPoll,
        ublox::cc_plugin::message::NavSbas,
        ublox::cc_plugin::message::NavSbasPoll,
        ublox::cc_plugin::message::NavAopstatus,
        ublox::cc_plugin::message::NavAopstatusPoll,
        ublox::cc_plugin::message::RxmRaw,
        ublox::cc_plugin::message::RxmRawPoll,
        ublox::cc_plugin::message::RxmSfrb,
        ublox::cc_plugin::message::RxmSvsi,
        ublox::cc_plugin::message::RxmSvsiPoll,
        ublox::cc_plugin::message::RxmAlm,
        ublox::cc_plugin::message::RxmAlmPollSv,
        ublox::cc_plugin::message::RxmAlmPoll,
        ublox::cc_plugin::message::RxmEph,
        ublox::cc_plugin::message::RxmEphPollSv,
        ublox::cc_plugin::message::RxmEphPoll,
        ublox::cc_plugin::message::RxmPmreq,
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
        ublox::cc_plugin::message::CfgDatPoll,
        ublox::cc_plugin::message::CfgRate,
        ublox::cc_plugin::message::CfgRatePoll,
        ublox::cc_plugin::message::CfgCfg,
        ublox::cc_plugin::message::CfgRxm,
        ublox::cc_plugin::message::CfgRxmPoll,
        ublox::cc_plugin::message::CfgAnt,
        ublox::cc_plugin::message::CfgAntPoll,
        ublox::cc_plugin::message::CfgSbas,
        ublox::cc_plugin::message::CfgSbasPoll,
        ublox::cc_plugin::message::CfgNmeaV0,
        ublox::cc_plugin::message::CfgNmea,
        ublox::cc_plugin::message::CfgNmeaPoll,
        ublox::cc_plugin::message::CfgUsb,
        ublox::cc_plugin::message::CfgUsbPoll,
        ublox::cc_plugin::message::CfgNvs,
        ublox::cc_plugin::message::CfgNavx5,
        ublox::cc_plugin::message::CfgNavx5Poll,
        ublox::cc_plugin::message::CfgNav5,
        ublox::cc_plugin::message::CfgNav5Poll,
        ublox::cc_plugin::message::CfgTp5,
        ublox::cc_plugin::message::CfgTp5PollSelect,
        ublox::cc_plugin::message::CfgTp5Poll,
        ublox::cc_plugin::message::CfgRinv,
        ublox::cc_plugin::message::CfgRinvPoll,
        ublox::cc_plugin::message::CfgItfm,
        ublox::cc_plugin::message::CfgItfmPoll,
        ublox::cc_plugin::message::CfgPm2,
        ublox::cc_plugin::message::CfgPm2Poll,
        ublox::cc_plugin::message::CfgGnss,
        ublox::cc_plugin::message::CfgGnssPoll,
        ublox::cc_plugin::message::CfgLogfilter,
        ublox::cc_plugin::message::CfgLogfilterPoll,
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
        ublox::cc_plugin::message::LogErase,
        ublox::cc_plugin::message::LogString,
        ublox::cc_plugin::message::LogCreate,
        ublox::cc_plugin::message::LogInfo,
        ublox::cc_plugin::message::LogInfoPoll,
        ublox::cc_plugin::message::LogRetrieve,
        ublox::cc_plugin::message::LogRetrievepos,
        ublox::cc_plugin::message::LogRetrievestring,
        ublox::cc_plugin::message::LogFindtime,
        ublox::cc_plugin::message::LogFindtimeResp
    >;

} // namespace cc_plugin

} // namespace ublox


