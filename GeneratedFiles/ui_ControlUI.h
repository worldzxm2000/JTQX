/********************************************************************************
** Form generated from reading UI file 'ControlUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLUI_H
#define UI_CONTROLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "MyButton.h"
QT_BEGIN_NAMESPACE

class Ui_ControlUI
{
public:
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_WND;
    QScrollArea *ScrollArea_MinBtn;
    QWidget *ScrollAreaWidgetContents_MinBtn;
	MyButton *MinBtn;
    QScrollArea *ScrollArea_CloseBtn;
    QWidget *ScrollAreaWidgetContents_CloseBtn;
	MyButton *CloseBtn;
    QLabel *TitleLabel_Name;
    QLabel *TitleLabel_Image;
    QGroupBox *groupBox;
    QGroupBox *groupBox_UPDATE;
    QPushButton *RUPDATEBtn;
    QGroupBox *groupBox_LAT;
    QPushButton *RLATBtn;
    QPushButton *WLATBtn;
    QLineEdit *LineEdit_LAT;
    QGroupBox *groupBox_time;
    QDateTimeEdit *RdateTimeEdit;
    QPushButton *RTimeBtn;
    QPushButton *WTimeBtn;
    QGroupBox *groupBox_LNG;
    QPushButton *RLNGBtn;
    QPushButton *WLNGBtn;
    QLineEdit *LineEdit_LNG;
    QGroupBox *groupBox_RESET;
    QPushButton *RRESETBtn;
    QGroupBox *groupBox_ID;
    QPushButton *RIDBtn;
    QPushButton *WIDBtn;
    QLineEdit *DevicelineEdit;
    QGroupBox *groupBox_down;
    QDateTimeEdit *BdateTimeEdit;
    QDateTimeEdit *EdateTimeEdit;
    QPushButton *DownBtn;
    QGroupBox *groupBox_ALT;
    QPushButton *RALTBtn;
    QPushButton *WALTBtn;
    QLineEdit *LineEdit_ALT;

    void setupUi(QWidget *ControlUI)
    {
        if (ControlUI->objectName().isEmpty())
            ControlUI->setObjectName(QStringLiteral("ControlUI"));
        ControlUI->resize(581, 362);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ControlUI->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../Image/png/Weather.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ControlUI->setWindowIcon(icon);
        ControlUI->setStyleSheet(QStringLiteral("background:rgb(77,77,77);color:white"));
        groupBox_2 = new QGroupBox(ControlUI);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(5, 5, 571, 351));
        groupBox_WND = new QGroupBox(groupBox_2);
        groupBox_WND->setObjectName(QStringLiteral("groupBox_WND"));
        groupBox_WND->setGeometry(QRect(520, 10, 46, 26));
        ScrollArea_MinBtn = new QScrollArea(groupBox_WND);
        ScrollArea_MinBtn->setObjectName(QStringLiteral("ScrollArea_MinBtn"));
        ScrollArea_MinBtn->setGeometry(QRect(2, 3, 20, 20));
        ScrollArea_MinBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_MinBtn = new QWidget();
        ScrollAreaWidgetContents_MinBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_MinBtn"));
        ScrollAreaWidgetContents_MinBtn->setGeometry(QRect(0, 0, 18, 18));
		MinBtn = new MyButton("../Image/png/Mini.png", 1, ScrollAreaWidgetContents_MinBtn);
        MinBtn->setObjectName(QStringLiteral("MinBtn"));
        MinBtn->setGeometry(QRect(1, 1, 18, 18));
        ScrollArea_MinBtn->setWidget(ScrollAreaWidgetContents_MinBtn);
        ScrollArea_CloseBtn = new QScrollArea(groupBox_WND);
        ScrollArea_CloseBtn->setObjectName(QStringLiteral("ScrollArea_CloseBtn"));
        ScrollArea_CloseBtn->setGeometry(QRect(24, 3, 20, 20));
        ScrollArea_CloseBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_CloseBtn = new QWidget();
        ScrollAreaWidgetContents_CloseBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_CloseBtn"));
        ScrollAreaWidgetContents_CloseBtn->setGeometry(QRect(0, 0, 18, 18));
		CloseBtn = new MyButton("../Image/png/Close.png", 1, ScrollAreaWidgetContents_CloseBtn);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(1, 1, 18, 18));
        ScrollArea_CloseBtn->setWidget(ScrollAreaWidgetContents_CloseBtn);
        TitleLabel_Name = new QLabel(groupBox_2);
        TitleLabel_Name->setObjectName(QStringLiteral("TitleLabel_Name"));
        TitleLabel_Name->setGeometry(QRect(50, 15, 100, 16));
        TitleLabel_Image = new QLabel(groupBox_2);
        TitleLabel_Image->setObjectName(QStringLiteral("TitleLabel_Image"));
        TitleLabel_Image->setGeometry(QRect(10, 10, 32, 32));
        TitleLabel_Image->setPixmap(QPixmap(QString::fromUtf8("../Image/png/control.png")));
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 45, 551, 301));
        groupBox_UPDATE = new QGroupBox(groupBox);
        groupBox_UPDATE->setObjectName(QStringLiteral("groupBox_UPDATE"));
        groupBox_UPDATE->setGeometry(QRect(160, 205, 91, 91));
        RUPDATEBtn = new QPushButton(groupBox_UPDATE);
        RUPDATEBtn->setObjectName(QStringLiteral("RUPDATEBtn"));
        RUPDATEBtn->setGeometry(QRect(10, 40, 75, 23));
        groupBox_LAT = new QGroupBox(groupBox);
        groupBox_LAT->setObjectName(QStringLiteral("groupBox_LAT"));
        groupBox_LAT->setGeometry(QRect(10, 105, 171, 91));
        RLATBtn = new QPushButton(groupBox_LAT);
        RLATBtn->setObjectName(QStringLiteral("RLATBtn"));
        RLATBtn->setGeometry(QRect(10, 50, 75, 23));
        WLATBtn = new QPushButton(groupBox_LAT);
        WLATBtn->setObjectName(QStringLiteral("WLATBtn"));
        WLATBtn->setGeometry(QRect(90, 50, 75, 23));
        LineEdit_LAT = new QLineEdit(groupBox_LAT);
        LineEdit_LAT->setObjectName(QStringLiteral("LineEdit_LAT"));
        LineEdit_LAT->setGeometry(QRect(10, 20, 151, 20));
        groupBox_time = new QGroupBox(groupBox);
        groupBox_time->setObjectName(QStringLiteral("groupBox_time"));
        groupBox_time->setGeometry(QRect(190, 5, 171, 91));
        RdateTimeEdit = new QDateTimeEdit(groupBox_time);
        RdateTimeEdit->setObjectName(QStringLiteral("RdateTimeEdit"));
        RdateTimeEdit->setGeometry(QRect(10, 20, 151, 22));
        RdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        RTimeBtn = new QPushButton(groupBox_time);
        RTimeBtn->setObjectName(QStringLiteral("RTimeBtn"));
        RTimeBtn->setGeometry(QRect(10, 50, 75, 23));
        WTimeBtn = new QPushButton(groupBox_time);
        WTimeBtn->setObjectName(QStringLiteral("WTimeBtn"));
        WTimeBtn->setGeometry(QRect(90, 50, 75, 23));
        groupBox_LNG = new QGroupBox(groupBox);
        groupBox_LNG->setObjectName(QStringLiteral("groupBox_LNG"));
        groupBox_LNG->setGeometry(QRect(190, 105, 171, 91));
        RLNGBtn = new QPushButton(groupBox_LNG);
        RLNGBtn->setObjectName(QStringLiteral("RLNGBtn"));
        RLNGBtn->setGeometry(QRect(10, 50, 75, 23));
        WLNGBtn = new QPushButton(groupBox_LNG);
        WLNGBtn->setObjectName(QStringLiteral("WLNGBtn"));
        WLNGBtn->setGeometry(QRect(90, 50, 75, 23));
        LineEdit_LNG = new QLineEdit(groupBox_LNG);
        LineEdit_LNG->setObjectName(QStringLiteral("LineEdit_LNG"));
        LineEdit_LNG->setGeometry(QRect(10, 20, 151, 20));
        groupBox_RESET = new QGroupBox(groupBox);
        groupBox_RESET->setObjectName(QStringLiteral("groupBox_RESET"));
        groupBox_RESET->setGeometry(QRect(10, 205, 91, 91));
        RRESETBtn = new QPushButton(groupBox_RESET);
        RRESETBtn->setObjectName(QStringLiteral("RRESETBtn"));
        RRESETBtn->setGeometry(QRect(10, 40, 75, 23));
        groupBox_ID = new QGroupBox(groupBox);
        groupBox_ID->setObjectName(QStringLiteral("groupBox_ID"));
        groupBox_ID->setGeometry(QRect(10, 5, 171, 91));
        RIDBtn = new QPushButton(groupBox_ID);
        RIDBtn->setObjectName(QStringLiteral("RIDBtn"));
        RIDBtn->setGeometry(QRect(10, 50, 75, 23));
        WIDBtn = new QPushButton(groupBox_ID);
        WIDBtn->setObjectName(QStringLiteral("WIDBtn"));
        WIDBtn->setGeometry(QRect(90, 50, 75, 23));
        DevicelineEdit = new QLineEdit(groupBox_ID);
        DevicelineEdit->setObjectName(QStringLiteral("DevicelineEdit"));
        DevicelineEdit->setGeometry(QRect(10, 20, 151, 20));
        groupBox_down = new QGroupBox(groupBox);
        groupBox_down->setObjectName(QStringLiteral("groupBox_down"));
        groupBox_down->setGeometry(QRect(300, 205, 241, 91));
        BdateTimeEdit = new QDateTimeEdit(groupBox_down);
        BdateTimeEdit->setObjectName(QStringLiteral("BdateTimeEdit"));
        BdateTimeEdit->setGeometry(QRect(10, 20, 141, 22));
        BdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        EdateTimeEdit = new QDateTimeEdit(groupBox_down);
        EdateTimeEdit->setObjectName(QStringLiteral("EdateTimeEdit"));
        EdateTimeEdit->setGeometry(QRect(10, 50, 141, 22));
        EdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        DownBtn = new QPushButton(groupBox_down);
        DownBtn->setObjectName(QStringLiteral("DownBtn"));
        DownBtn->setGeometry(QRect(160, 20, 75, 23));
        groupBox_ALT = new QGroupBox(groupBox);
        groupBox_ALT->setObjectName(QStringLiteral("groupBox_ALT"));
        groupBox_ALT->setGeometry(QRect(370, 5, 171, 91));
        RALTBtn = new QPushButton(groupBox_ALT);
        RALTBtn->setObjectName(QStringLiteral("RALTBtn"));
        RALTBtn->setGeometry(QRect(10, 50, 75, 23));
        WALTBtn = new QPushButton(groupBox_ALT);
        WALTBtn->setObjectName(QStringLiteral("WALTBtn"));
        WALTBtn->setGeometry(QRect(90, 50, 75, 23));
        LineEdit_ALT = new QLineEdit(groupBox_ALT);
        LineEdit_ALT->setObjectName(QStringLiteral("LineEdit_ALT"));
        LineEdit_ALT->setGeometry(QRect(10, 20, 151, 20));
        QWidget::setTabOrder(DevicelineEdit, RIDBtn);
        QWidget::setTabOrder(RIDBtn, WIDBtn);
        QWidget::setTabOrder(WIDBtn, RdateTimeEdit);
        QWidget::setTabOrder(RdateTimeEdit, RTimeBtn);
        QWidget::setTabOrder(RTimeBtn, WTimeBtn);
        QWidget::setTabOrder(WTimeBtn, LineEdit_ALT);
        QWidget::setTabOrder(LineEdit_ALT, RALTBtn);
        QWidget::setTabOrder(RALTBtn, WALTBtn);
        QWidget::setTabOrder(WALTBtn, LineEdit_LAT);
        QWidget::setTabOrder(LineEdit_LAT, RLATBtn);
        QWidget::setTabOrder(RLATBtn, WLATBtn);
        QWidget::setTabOrder(WLATBtn, LineEdit_LNG);
        QWidget::setTabOrder(LineEdit_LNG, RLNGBtn);
        QWidget::setTabOrder(RLNGBtn, WLNGBtn);
        QWidget::setTabOrder(WLNGBtn, RRESETBtn);
        QWidget::setTabOrder(RRESETBtn, RUPDATEBtn);
        QWidget::setTabOrder(RUPDATEBtn, BdateTimeEdit);
        QWidget::setTabOrder(BdateTimeEdit, EdateTimeEdit);
        QWidget::setTabOrder(EdateTimeEdit, DownBtn);
        QWidget::setTabOrder(DownBtn, MinBtn);
        QWidget::setTabOrder(MinBtn, CloseBtn);
        QWidget::setTabOrder(CloseBtn, ScrollArea_MinBtn);
        QWidget::setTabOrder(ScrollArea_MinBtn, ScrollArea_CloseBtn);

        retranslateUi(ControlUI);

        QMetaObject::connectSlotsByName(ControlUI);
    } // setupUi

    void retranslateUi(QWidget *ControlUI)
    {
        ControlUI->setWindowTitle(QApplication::translate("ControlUI", "\344\272\244\351\200\232\346\260\224\350\261\241\350\247\202\346\265\213\350\256\276\345\244\207\347\273\210\347\253\257\346\216\247\345\210\266", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_WND->setTitle(QString());
        MinBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        CloseBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        TitleLabel_Name->setText(QApplication::translate("ControlUI", "\344\272\244\351\200\232\346\260\224\350\261\241\350\247\202\346\265\213\350\256\276\345\244\207", nullptr));
        TitleLabel_Image->setText(QString());
        groupBox->setTitle(QString());
        groupBox_UPDATE->setTitle(QApplication::translate("ControlUI", "\350\277\234\347\250\213\345\215\207\347\272\247", nullptr));
        RUPDATEBtn->setText(QApplication::translate("ControlUI", "\345\274\200\345\247\213", nullptr));
        groupBox_LAT->setTitle(QApplication::translate("ControlUI", "\347\272\254\345\272\246", nullptr));
        RLATBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\347\272\254\345\272\246", nullptr));
        WLATBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\347\272\254\345\272\246", nullptr));
        groupBox_time->setTitle(QApplication::translate("ControlUI", "\350\256\276\345\244\207\346\227\266\351\227\264", nullptr));
        RTimeBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\346\227\266\351\222\237", nullptr));
        WTimeBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\346\227\266\351\222\237", nullptr));
        groupBox_LNG->setTitle(QApplication::translate("ControlUI", "\347\273\217\345\272\246", nullptr));
        RLNGBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\347\273\217\345\272\246", nullptr));
        WLNGBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\347\273\217\345\272\246", nullptr));
        groupBox_RESET->setTitle(QApplication::translate("ControlUI", "\351\207\207\351\233\206\345\231\250", nullptr));
        RRESETBtn->setText(QApplication::translate("ControlUI", "\351\207\215\345\220\257", nullptr));
        groupBox_ID->setTitle(QApplication::translate("ControlUI", "\350\256\276\345\244\207\345\217\267", nullptr));
        RIDBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\350\256\276\345\244\207\345\217\267", nullptr));
        WIDBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\350\256\276\345\244\207\345\217\267", nullptr));
        groupBox_down->setTitle(QApplication::translate("ControlUI", "\346\225\260\346\215\256\350\241\245\346\212\204", nullptr));
        DownBtn->setText(QApplication::translate("ControlUI", "\350\241\245\346\212\204\346\225\260\346\215\256", nullptr));
        groupBox_ALT->setTitle(QApplication::translate("ControlUI", "\346\265\267\346\213\224", nullptr));
        RALTBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\351\253\230\345\272\246", nullptr));
        WALTBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\351\253\230\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlUI: public Ui_ControlUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLUI_H
