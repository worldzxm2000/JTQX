#include "jtqx.h"
#include"Dictionary.h"
#include"qdatetime.h"
#include"qfile.h"
#include"qtextstream.h"
#include"qjsondocument.h"
#include "qdebug.h"
#include "qcoreapplication.h"
#include"qdir.h"
//获取端口号
int GetPort()
{
	return 9003;
}

//获取业务号
int GetServiceTypeID()
{
	return 2;
}

//获取版本号
QString GetVersionNo()
{
	return "1.0";
}

//获取业务名称
QString GetServiceTypeName()
{
	QString name = QString::fromLocal8Bit("交通气象业务");
	return name;
}

//解析数据
LRESULT Char2Json(QString &buff, QJsonObject &json)
{
	int Count = 0;//数据个数
	int Current_P = buff.length();//当前数据指
								  
    //遍历查找数据
	for (int i = 0; i < buff.length() - 2; i++)
	{
		if (buff[i].toUpper() == 'B' && buff[i + 1].toUpper() == 'G'&&buff[i + 2] == ',')
		{
			Current_P = i;//指针指向帧头
			for (int j = i + 2; j < buff.length() - 2; j++)
			{
				if (buff[j] == ','&&buff[j + 1].toUpper() == 'E'&&buff[j + 2].toUpper() == 'D')
				{
					Current_P = j + 3;//指针移动到帧尾下一个字符

					Dictionary dic;
					QString strBuff = buff.mid(i, j - i + 3);
					QStringList strlist = strBuff.split(",");
					QJsonObject SubJson;
					SubJson.insert("DataType", 1);//数据类型 观测数据
					//区站号
					SubJson.insert("StationID", strlist.at(1));
					//02交通气象站
					SubJson.insert("ServiceTypeID", JTQX);
						//设备号
						SubJson.insert("DeviceID", strlist.at(4));
					//时间
					QString time = Convert2Time(strlist.at(5));
					SubJson.insert("ObserveTime", time);
						//观察要素个数

					int CountOfFeature = ((QString)strlist.at(7)).toInt();
					SubJson.insert("CountOfFeature", CountOfFeature);
					int CountOfFacilitiesStatus = ((QString)strlist.at(8)).toInt();
					SubJson.insert("CountOfFacilitiesStatus", CountOfFacilitiesStatus);
					//判断数据完整性
					if (strlist.count() < CountOfFeature * 2 + CountOfFacilitiesStatus * 2 + 10)
					{
						j++;
						continue;
					}
						Count += 1;//数据个数
					//观察要素
					QString strFeatureName;
					//天气现象
					QStringList WeatherList;
					WeatherList.append("0");
					WeatherList.append("0");
					WeatherList.append("0");
					WeatherList.append("0");
					WeatherList.append("0");
					QString Weather;
					for (int i = 9; i < CountOfFeature * 2 + 9; i += 2)
					{
						QString SrcKey = QString(strlist.at(i)).toLower();
						QString key = dic.Find(SrcKey);
				
						if (key != NULL)
						{
							//需要处理的数据 除以10
							if (SrcKey == "aba" || SrcKey == "abamx" || SrcKey == "abamn" | SrcKey == "acb" || SrcKey == "acc" || SrcKey == "aea" || SrcKey == "aec" || SrcKey == "aed" || SrcKey == "aeamx" || SrcKey == "aeaex" || SrcKey == "aebex" || SrcKey == "afa" || SrcKey == "afb" || SrcKey == "apa" || SrcKey == "apamx" || SrcKey == "apamn" || SrcKey == "apb" || SrcKey == "apbmx" || SrcKey == "apbmn" || SrcKey == "apc" || SrcKey == "apcmx" || SrcKey == "apcmn" || SrcKey == "apd" || SrcKey == "apdmx" || SrcKey == "apdmn" || SrcKey == "apemx" || SrcKey == "apemn" || SrcKey == "apf" || SrcKey == "apfmx" || SrcKey == "apfmn" || SrcKey == "apg" || SrcKey == "apgmx" || SrcKey == "apgmn" || SrcKey == "aec")
							{
								float f = strlist.at(i + 1).toFloat();
								f /= 10;
								SubJson.insert(key, f);
							}
							else
							{
								SubJson.insert(key, strlist.at(i + 1));
							}
							if (SrcKey == "ana")
							{
								WeatherList[0] = strlist.at(i + 1);
							}
							if (SrcKey == "anb")
							{
								WeatherList[1] = strlist.at(i + 1);
							}
							if (SrcKey == "anc")
							{
								WeatherList[2] = strlist.at(i + 1);
							}
							if (SrcKey == "and")
							{
								WeatherList[3] = strlist.at(i + 1);
							}
							if (SrcKey == "ane")
							{
								WeatherList[4] = strlist.at(i + 1);
							}
							//质量控制码
							if (i == 9)
							{
								strFeatureName = key;
							}
							else
							{
								strFeatureName += ",";
								strFeatureName += key;
							}
						}
					}
					//天气现象
					for (int i = 0; i < 5; i++)
					{
						if (i == 0)
						{
							Weather = WeatherList.at(i);

						}
						else
						{
							Weather += ",";
							Weather += WeatherList.at(i);
						}

					}
					SubJson.insert("WeatherID", Weather);
					SubJson.insert("StatusBitName", strFeatureName);
					//状态位
					SubJson.insert("StatusBit", strlist.at(CountOfFeature * 2 + 9));

					//设备状态
					for (int i = CountOfFeature * 2 + 10; i < CountOfFeature * 2 + CountOfFacilitiesStatus * 2 + 10; i += 2)
					{
						QString key = dic.Find(QString(strlist.at(i)).toLower());
						if (key != NULL)
							SubJson.insert(key, strlist.at(i + 1));

					}
					//数据备份
					QDateTime current_date_time = QDateTime::currentDateTime();
					QString current_date = current_date_time.toString("yyyy.MM.dd hh:mm:ss");
					QString current_day = current_date_time.toString("yyyy-MM-dd");
					QString fileName = QCoreApplication::applicationDirPath() + "\\JTQX\\" + strlist.at(1) + "\\" + current_day;
					QDir dir(fileName);
					if (!dir.exists())
						dir.mkpath(fileName);//创建多级目录
					fileName += "\\data.txt";
					QFile file(fileName);
					if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
					{}
					QTextStream in(&file);
					in << current_date << "\r\n" << strBuff << "\r\n";
					file.close();
					json.insert(QString::number(Count), SubJson);
					i = j + 2;//当前循环
					break;
				}
			}
		}
		else if (buff[i] == '<')
		{
			Current_P = i;//指针指向帧头
			for (int j = i + 1; j < buff.length(); j++)
			{
				if (buff[j] == '>')
				{
					Current_P = j + 1;//指针移动到帧尾
					Count += 1;//数据个数
					QString subStr = buff.mid(i + 1, j - i - 1);
					QStringList strlist = subStr.split(" ");
					QJsonObject SubJson;
					
					i = j;
					switch (strlist.count())
					{
						//单个返回值
					case 1:
						{	SubJson.insert("DataType", 2);//数据类型 2操作数据
						SubJson.insert("ValueCount", 1);
						SubJson.insert("RecvValue1", strlist.at(0));
						json.insert(QString::number(Count), SubJson);
						break;
					}
					//双返回值
					case 2:
						{	SubJson.insert("DataType", 2);//数据类型 2操作数据
						SubJson.insert("ValueCount", 2);
						SubJson.insert("RecvValue1", strlist.at(0));
						SubJson.insert("RecvValue2", strlist.at(1));
						json.insert(QString::number(Count), SubJson);
						break;
					}
					//无效数据
					default:
						break;
					}
					break;
				}
			}
		}
	}
	json.insert("DataLength", Count);//JSON数据个数
	if (Current_P >= buff.length())//判断当前指针位置
	{
		buff.clear();
	}//清除内存
	else
	{
		buff.remove(0, Current_P);
	}//将剩余字节存入缓存
	return 1;
}

//字符串转成显示时间格式
QString Convert2Time(QString strTime)
{
	QString tmp;
	tmp = strTime.mid(0, 4) + "-" + strTime.mid(4, 2) + "-" + strTime.mid(6, 2) + " " + strTime.mid(8, 2) + ":" + strTime.mid(10, 2) + ":" + strTime.mid(12, 2);
	return tmp;
}

//调试窗体
void  GetControlWidget(QString StationID, uint Socket, QWidget* parent)
{
	if (isActive)
	{
		return;
	}
	control_ui = new ControlUI();
	isActive = true;
	control_ui->Socket = Socket;
	control_ui->isActive = &isActive;
	control_ui->show();
}
//矫正时钟
void SetTime(QString StationID, uint Socket)
{
	QDateTime nowtime = QDateTime::currentDateTime();
	QString datetime = nowtime.toString("yyyy-MM-dd hh:mm:ss");
	//设置时钟
	QString Comm = "DATETIME " + datetime + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}
//返回值反馈
void SetValueToControlWidget(QStringList list)
{
	if (control_ui == nullptr)
		return;
	if (isActive)
		control_ui->setValue(list);
}
//发送命令
void SetCommand(uint Socket, int CommandType, QString Params1, QString Params2, QString StationID)
{
	//设备终端命令
	QString Comm;
	
	switch (CommandType)
	{
	case 201:
		//读取ID
		Comm = "ID\r\n";
		break;
	case 202:
		//设置ID
		Comm = "ID " + Params1 + "\r\n";
		break;
	case 203:
		//读取时钟
		Comm = "DATETIME\r\n";
		break;
	case 204:
	{
		//设置时钟
		QDateTime nowtime = QDateTime::currentDateTime();
		QString datetime = nowtime.toString("yyyy-MM-dd hh:mm:ss");
		Comm = Comm = "DATETIME " + datetime + "\r\n";
	}
	break;
	case 205:
		//读取高度
		 Comm = "ALT\r\n";
		break;
	case 206:
		
		//设置高度
		 Comm = "ALT " + Params1 + "\r\n";
		break;
	case 207:
		//读取纬度
		 Comm = "LAT\r\n";
		break;
	case 208:
		//设置纬度
		 Comm = "LAT " + Params1 + "\r\n";
		break;
	case 209:
		//读取经度
		 Comm = "LONG\r\n";
		break;
	case 210:
		//设置经度
		 Comm = "LONG " + Params1 + "\r\n";
		break;
	case 211:
		//重启采集器
		 Comm = "RESET\r\n";
		break;
	case 212:
		//远程升级
		 Comm = "UPDATE\r\n";
		break;
	case 213:
	{
		//补抄
		QString Comm = "DMTD " + Params1 + " " + Params2 + "\r\n";
	}
	break;
	default:
		break;
	}
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}