#include "dictionary.h"

Dictionary::Dictionary()
{
	//观察要素
	//气温
	map.insert("aba", "AT_AT1");
	//气温最大值
	map.insert("abamx", "AT_MaxAT1");
	//气温最大值出现时间
	map.insert("abamxt", "AT_MaxAT1T");
	//气温最小值
	map.insert("abamn", "AT_MinAT1");
	//气温最小值出现时间
	map.insert("abamnt", "AT_MinAT1T");
	//相对湿度
	map.insert("aca", "AH_RH1");
	//相对湿度最小值
	map.insert("acamn", "AH_MinRH1");
	//相对湿度最小值出现时间
	map.insert("acamnt", "AH_MinRH1T");
	//水汽压
	map.insert("acc", "AH_WVP1");
	//露点温度
	map.insert("acb", "AH_DPT1");
	//当前时刻瞬时风向
	map.insert("ada", "WD_IWD");
	//2分钟平均风向
	map.insert("adc", "WD_Avg2MWD");
	//10分钟平均风向
	map.insert("add", "WD_Avg10MWD");
	//瞬时最大风速风向
	map.insert("adamx", "WD_Max1MIWSD");
	//极大风速风向
	map.insert("adaex", "WD_EWSD");
	//分钟内最大瞬时风速对应风向
	map.insert("adbex", "WD_EXWSD");
	//当前时刻瞬时风速
	map.insert("aea", "WS_IWS1");
	//2分钟平均风速
	map.insert("aec", "WS_Avg2MWS1");
	//10分钟平均风速
	map.insert("aed", "WS_Avg10MWS1");
	//最大风速
	map.insert("aeamx", "WS_MaxWS1");
	//最大风速出现时间
	map.insert("aeamxt", "WS_MaxWS1T");
	//极大风速
	map.insert("aeaex", "WS_EWS1");
	//极大风速出现时间
	map.insert("aeaext", "WS_EWS1T");
	//分钟内最大瞬时风速
	map.insert("aebex", "WS_Max1MWS1");
	//分钟降水量
	map.insert("afa", "MntRnfl");
	//小时降水量
	map.insert("afb", "HrAccmltRnfl");
	//路面温度
	map.insert("apa", "RS_RST");
	//最高路面温度
	map.insert("apamx","RS_MaxRST");
	//最高路面温度时间
	map.insert("apamxt","RS_MaxRSTT");
	//最低路面温度
	map.insert("apamn","RS_MinRST");
	//最低路面温度时间
	map.insert("apamnt", "RS_MinRSTT");
	//10cm路基温度
	map.insert("apb","RS_CT10");
	//最高10cm路基温度
	map.insert("apbmx","RS_MaxCT10");
	//最高10cm路基温度时间
	map.insert("apbmxt","RS_MaxCT10T");
	//最低10cm路基温度
	map.insert("apbmn","RS_MinCT10");
	//最低10cm路基温度时间
	map.insert("apbmnt","RS_MinCT10T");
	//冰点温度
	map.insert("apc","OT_FPT");
	//最高冰点温度
	map.insert("apcmx","OT_MaxFPT");
	//最高冰点温度出现时间
	map.insert("apcmxt","OT_MaxFPTT");
	//最低冰点温度
	map.insert("apcmn","OT_MinFPT");
	//最低冰点温度出现时间
	map.insert("apcmnt","OT_MinFPTT");
	//水膜厚度
	map.insert("apd","RW_WFT");
	//最高水膜厚度
	map.insert("apdmx","RW_MaxWFT");
	//最高水膜厚度出现时间
	map.insert("apdmxt","RW_MaxWFTT");
	//最低水膜厚度
	map.insert("apdmn","RW_MinWFT");
	//最低水膜厚度出现时间
	map.insert("apdmnt","RW_MinWFTT");
	//冰层厚度
	map.insert("ape","RW_IFT");
	//最高冰层厚度
	map.insert("apemx","RW_MaxIFT");
	//最高冰层厚度出现时间
	map.insert("apemxt","RW_MaxIFTT");
	//最低冰层厚度
	map.insert("apemn","RW_MinIFT");
	//最低冰层厚度出现时间
	map.insert("apemnt","RW_MinIFTT");
	//雪层厚度
	map.insert("apf","RW_SFT");
	//最高雪层厚度
	map.insert("apfmx", "RW_MaxSFT");
	//最高雪层厚度出现时间
	map.insert("apfmxt","RW_MaxSFTT");
	//最低雪层厚度
	map.insert("apfmn","RW_MinSFT");
	//最低雪层厚度出现时间
	map.insert("apfmnt","RW_MinSFTT");
	//融雪剂浓度
	map.insert("apg","RW_SNFT");
	//最高融雪剂浓度
	map.insert("apgmx","RW_MaxSNFT");
	//最高融雪剂浓度出现时间
	map.insert("apgmxt","RW_MaxSNFTT");
	//最低融雪剂浓度
	map.insert("apgmn","RW_MinSNFT");
	//最低融雪剂浓度出现时间
	map.insert("apgmnt","RW_MinSNFTT");
	//路面状况
	map.insert("aph","RW_BRS");
	//1分钟平均水平能见度
	map.insert("ama","AV_Avg1MHV");
	//最小10分钟平均水平能见度
	map.insert("ambmn","AV_MinAvg10MHV");
	//最小10分钟平均水平能见度时间
	map.insert("ambmnt","AV_MinAvg10MHVT");
	//天气现象
	//map.insert("NNN", "WeatherID");


	//设备要素
	//外接电源
	map.insert("zaa", "ExtPwrSts1");
	//蓄电池电压
	map.insert("zab", "BtryVltgSts1");
	//AC-DC电压状态
	map.insert("zac", "ADDCVltgSts1");
	//主采主板电压状态
	map.insert("zad", "MainClctrVltgSts");
	//主采主板电压值
	map.insert("zae", "MainClctrVltgVal");
	//主采运行状态
	map.insert("zaf", "MainClctrRunSts");
	//主采AD状态
	map.insert("zag", "MainClctrADSts");
	//主采计数器状态
	map.insert("zah", "MainClctrCntSts");
	//太阳能电池板状态
	map.insert("zai", "SolarPanelSts");
	//主采主板温度
	map.insert("zba", "MotherTemp");
	//主采主板温度值
	map.insert("zbb", "MotherTempValue");
	//气温传感器状态
	map.insert("zcb", "AirTmprtSensorSts1");
	//湿敏电容传感器状态
	map.insert("zcd", "AirHmdSensorSts1");
	//露点仪状态
	map.insert("zce", "DewPntTmprtSts");
	//风向传感器状态
	map.insert("zcf", "WndDrctSensorSts");
	//风速传感器状态
	map.insert("zcg", "WndSpdSensorSts1");
	//雨量传感器状态
	map.insert("zch", "RnflSensorSts");
	//路面温度传感器状态
	map.insert("zcq", "RdTmprtSensorSts");
	//路基温度传感器状态
	map.insert("zcr", "CntmtSensorSts");
	//路面状况传感器状态
	map.insert("zgf","RoadOperSts");
	//路面状态窗口污染
	map.insert("zgb","WPStatus3");
	//CPU硬件
	map.insert("zgc","CPUSts");
	//路面状况 探测器硬件
	map.insert("zge","DetectorSts");
	//能见度仪
	//外接电源
	map.insert("zea", "ExtPwrSts2");
	//蓄电池电压
	map.insert("ze1a", "BtryVltgSts2");
	//AC-DC电压状态
	map.insert("ze2a", "ADDCVltgSts2");
	//分采主板电压
	map.insert("ze3a", "MainClctrVltgSts1");
	//接收器加热
	map.insert("ze4a", "RecvHeat1");
	//接收器通风
	map.insert("ze5a", "RecvVent1");
	//发射器加热
	map.insert("ze6a","SendHeat1");
	//发射器通风
	map.insert("ze7a","SendVent1");
	//自检测状态
	map.insert("zeb","AutoCheckSts1");
	//接收器
	map.insert("zec","RecevierSts1");
	//发射器
	map.insert("zed","SenderSts1");
	//窗口污染
	map.insert("zee","WPStatus1");
	//天气现象
	//外接电源
	map.insert("zfa", "ExtPwrSts3");
	//蓄电池电压
	map.insert("zf1a", "BtryVltgSts3");
	//AC-DC电压状态
	map.insert("zf2a", "ADDCVltgSts3");
	//分采主板电压
	map.insert("zf3a", "MainClctrVltgSts2");
	//接收器加热
	map.insert("zf4a", "RecvHeat2");
	//接收器通风
	map.insert("zf5a", "RecvVent2");
	//发射器加热
	map.insert("zf6a", "SendHeat2");
	//发射器通风
	map.insert("zf7a", "SendVent2");
	//自检测状态
	map.insert("zfb", "AutoCheckSts2");
	//接收器
	map.insert("zfc", "RecevierSts2");
	//发射器
	map.insert("zfd", "SenderSts2");
	//窗口污染
	map.insert("zfe", "WPStatus2");
	//外接存储卡工作状态
	map.insert("zha","ExCardSts");
	//剩余空间
	map.insert("zhb","CFSpaceSts");
	//GPS工作状态
	map.insert("zia","GPSSts");
	//门开关状态
	map.insert("zib","DoorSts");
	//有人靠近
	map.insert("zic","SomeoneNearSts");
}

QString Dictionary::Find(QString key)
{
	QMap<QString, QString>::const_iterator mi = map.find(key);
	if (mi != map.end())
		return map[key];
	return NULL;
}
