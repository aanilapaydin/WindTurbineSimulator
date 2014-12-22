/********************************************************************************
** Form generated from reading UI file 'testbitirme.ui'
**
** Created: Mon 22. Dec 06:16:11 2014
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBITIRME_H
#define UI_TESTBITIRME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_testBitirmeClass
{
public:
    QWidget *centralWidget;
    QLabel *windParamLabel;
    QLineEdit *vGustEdit;
    QLCDNumber *vWindLCD;
    QLabel *vGustLabel;
    QLineEdit *vRampEdit;
    QLineEdit *vBaseEdit;
    QLabel *vRampLabel;
    QLineEdit *vNoiseEdit;
    QLabel *vWindLabel;
    QLabel *ElectricityParamLabel;
    QLineEdit *lambdaEdit;
    QLabel *vBaseLabel;
    QLabel *vNoiseLabel;
    QLabel *turbineParamLabel;
    QPushButton *startButton;
    QLabel *pLabel;
    QLineEdit *pEdit;
    QLabel *IuLabel;
    QLabel *IuEdit;
    QLabel *timeLabel;
    QLabel *timeEdit;
    QLabel *lambdaLabel;
    QLabel *rLabel;
    QLabel *WmLabel;
    QLabel *PmLabel;
    QLabel *TmLabel;
    QLabel *CpLabel;
    QLabel *betaLabel;
    QLabel *nLabel;
    QLineEdit *rEdit;
    QLineEdit *WmEdit;
    QLineEdit *PmEdit;
    QLineEdit *TmEdit;
    QLineEdit *CpEdit;
    QLineEdit *betaEdit;
    QLineEdit *nEdit;
    QPushButton *helpButton;
    QLabel *PidealLabel;
    QLabel *TurbineEfficiencyLabel;
    QLCDNumber *turbineEffLcd;
    QLineEdit *PidealEdit;
    QPushButton *minus1;
    QPushButton *plus1;
    QPushButton *fit1;
    QPushButton *fit2;
    QPushButton *plus2;
    QPushButton *minus2;
    QPushButton *plus3;
    QPushButton *fit3;
    QPushButton *minus3;
    QPushButton *bigminus1;
    QPushButton *bigplus1;
    QPushButton *bigplus2;
    QPushButton *bigminus2;
    QPushButton *bigplus3;
    QPushButton *bigminus3;
    QLabel *timeResLabel;
    QLineEdit *timeResEdit;
    QLabel *msLabel;
    QLabel *m_snLabel;
    QLabel *m_snLabel_2;
    QLabel *m_snLabel_3;
    QLabel *m_snLabel_4;
    QLabel *m_snLabel_5;
    QLabel *kg_m3Label;
    QLabel *mLabel;
    QLabel *rad_snLabel;
    QLabel *kWattLabel;
    QLabel *torkLabel;
    QLabel *kWattLabel_2;
    QLabel *degreeLabel;
    QLabel *snLabel;
    QLabel *PtLabel;
    QLineEdit *PtEdit;
    QLineEdit *nmEdit;
    QLineEdit *PeEdit;
    QLabel *nmLabel;
    QLabel *PeLabel;
    QLabel *kWattLabel_3;
    QLabel *kWattLabel_4;
    QPushButton *saveButton;
    QLabel *disliLabel;
    QLineEdit *turbinAcceEdit;
    QLabel *turbinAcceLabel;
    QLabel *m_sn2Label;
    QLabel *rpmLabel;
    QComboBox *ruzgarComboBox;
    QLabel *vTypeLabel;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QCustomPlot *ruzgarPlot;
    QLabel *vWindGraphLabel;
    QCustomPlot *CpLambdaPlot;
    QLabel *CpGraphLabel;
    QLabel *lambdaGraphLabel;
    QCustomPlot *PmaxPlot;
    QLabel *PmGraphLabel;
    QLabel *PmGraphLabel_2;
    QLabel *timeGraphLabel;
    QLabel *timeGraphLabel2;
    QLabel *timeGraphLabel3;
    QWidget *tab_2;
    QCustomPlot *rotorPlot;
    QLabel *vWindGraphLabel_2;
    QLabel *timeGraphLabel_2;
    QCustomPlot *betaPlot;
    QLabel *CpGraphLabel_2;
    QLabel *timeGraphLabel_3;
    QCustomPlot *PePlot;
    QLabel *CpGraphLabel_3;
    QLabel *timeGraphLabel_4;
    QLabel *detailedLabel;
    QLabel *VaLabel;
    QLabel *VbLabel;
    QLabel *VcLabel;
    QLabel *VaEdit;
    QLabel *VbEdit;
    QLabel *VcEdit;
    QLabel *IbEdit;
    QLabel *IcEdit;
    QLabel *VbLabel_2;
    QLabel *IaEdit;
    QLabel *VcLabel_2;
    QLabel *VaLabel_2;
    QLabel *PtLabel_2;
    QLabel *TmLabel_2;
    QLineEdit *LdEdit;
    QLineEdit *LqEdit;
    QLineEdit *RsEdit;
    QLabel *nmLabel_2;
    QLabel *PeLabel_2;
    QLineEdit *LpmEdit;
    QLabel *PtLabel_3;
    QLabel *TmLabel_3;
    QLineEdit *JEdit;
    QLabel *PeLabel_3;
    QLineEdit *PKSEdit;
    QLineEdit *DSYEdit;
    QLabel *nmLabel_3;
    QLineEdit *DEdit;
    QLabel *ElectricityParamLabel_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testBitirmeClass)
    {
        if (testBitirmeClass->objectName().isEmpty())
            testBitirmeClass->setObjectName(QString::fromUtf8("testBitirmeClass"));
        testBitirmeClass->resize(1323, 763);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/wind turbine simulator.ico"), QSize(), QIcon::Normal, QIcon::Off);
        testBitirmeClass->setWindowIcon(icon);
        testBitirmeClass->setWindowOpacity(100);
        centralWidget = new QWidget(testBitirmeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        windParamLabel = new QLabel(centralWidget);
        windParamLabel->setObjectName(QString::fromUtf8("windParamLabel"));
        windParamLabel->setGeometry(QRect(0, 0, 131, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        windParamLabel->setFont(font);
        vGustEdit = new QLineEdit(centralWidget);
        vGustEdit->setObjectName(QString::fromUtf8("vGustEdit"));
        vGustEdit->setGeometry(QRect(50, 100, 150, 20));
        vWindLCD = new QLCDNumber(centralWidget);
        vWindLCD->setObjectName(QString::fromUtf8("vWindLCD"));
        vWindLCD->setGeometry(QRect(50, 190, 150, 51));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vWindLCD->sizePolicy().hasHeightForWidth());
        vWindLCD->setSizePolicy(sizePolicy);
        vWindLCD->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        vWindLCD->setSmallDecimalPoint(false);
        vWindLCD->setNumDigits(5);
        vWindLCD->setDigitCount(5);
        vWindLCD->setMode(QLCDNumber::Dec);
        vWindLCD->setSegmentStyle(QLCDNumber::Filled);
        vWindLCD->setProperty("value", QVariant(0));
        vWindLCD->setProperty("intValue", QVariant(0));
        vGustLabel = new QLabel(centralWidget);
        vGustLabel->setObjectName(QString::fromUtf8("vGustLabel"));
        vGustLabel->setGeometry(QRect(0, 100, 31, 26));
        vRampEdit = new QLineEdit(centralWidget);
        vRampEdit->setObjectName(QString::fromUtf8("vRampEdit"));
        vRampEdit->setGeometry(QRect(50, 130, 150, 20));
        vBaseEdit = new QLineEdit(centralWidget);
        vBaseEdit->setObjectName(QString::fromUtf8("vBaseEdit"));
        vBaseEdit->setGeometry(QRect(50, 70, 150, 20));
        vRampLabel = new QLabel(centralWidget);
        vRampLabel->setObjectName(QString::fromUtf8("vRampLabel"));
        vRampLabel->setGeometry(QRect(0, 130, 41, 26));
        vNoiseEdit = new QLineEdit(centralWidget);
        vNoiseEdit->setObjectName(QString::fromUtf8("vNoiseEdit"));
        vNoiseEdit->setGeometry(QRect(50, 160, 150, 20));
        vWindLabel = new QLabel(centralWidget);
        vWindLabel->setObjectName(QString::fromUtf8("vWindLabel"));
        vWindLabel->setGeometry(QRect(0, 200, 41, 26));
        ElectricityParamLabel = new QLabel(centralWidget);
        ElectricityParamLabel->setObjectName(QString::fromUtf8("ElectricityParamLabel"));
        ElectricityParamLabel->setGeometry(QRect(790, 0, 161, 21));
        ElectricityParamLabel->setFont(font);
        lambdaEdit = new QLineEdit(centralWidget);
        lambdaEdit->setObjectName(QString::fromUtf8("lambdaEdit"));
        lambdaEdit->setGeometry(QRect(490, 30, 171, 20));
        vBaseLabel = new QLabel(centralWidget);
        vBaseLabel->setObjectName(QString::fromUtf8("vBaseLabel"));
        vBaseLabel->setGeometry(QRect(0, 70, 41, 25));
        vBaseLabel->setFrameShape(QFrame::WinPanel);
        vBaseLabel->setLineWidth(2);
        vNoiseLabel = new QLabel(centralWidget);
        vNoiseLabel->setObjectName(QString::fromUtf8("vNoiseLabel"));
        vNoiseLabel->setGeometry(QRect(0, 160, 41, 25));
        turbineParamLabel = new QLabel(centralWidget);
        turbineParamLabel->setObjectName(QString::fromUtf8("turbineParamLabel"));
        turbineParamLabel->setGeometry(QRect(470, 0, 161, 21));
        turbineParamLabel->setFont(font);
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setEnabled(false);
        startButton->setGeometry(QRect(260, 120, 151, 61));
        startButton->setStyleSheet(QString::fromUtf8("QPushButton#startButton {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#startButton:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        startButton->setIcon(icon);
        startButton->setIconSize(QSize(24, 24));
        pLabel = new QLabel(centralWidget);
        pLabel->setObjectName(QString::fromUtf8("pLabel"));
        pLabel->setGeometry(QRect(240, 30, 16, 26));
        pLabel->setFrameShape(QFrame::WinPanel);
        pLabel->setLineWidth(2);
        pEdit = new QLineEdit(centralWidget);
        pEdit->setObjectName(QString::fromUtf8("pEdit"));
        pEdit->setGeometry(QRect(260, 30, 141, 20));
        IuLabel = new QLabel(centralWidget);
        IuLabel->setObjectName(QString::fromUtf8("IuLabel"));
        IuLabel->setGeometry(QRect(240, 60, 16, 26));
        IuEdit = new QLabel(centralWidget);
        IuEdit->setObjectName(QString::fromUtf8("IuEdit"));
        IuEdit->setGeometry(QRect(260, 60, 141, 21));
        IuEdit->setStyleSheet(QString::fromUtf8(""));
        IuEdit->setFrameShape(QFrame::Box);
        timeLabel = new QLabel(centralWidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(230, 90, 21, 26));
        timeEdit = new QLabel(centralWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(260, 90, 141, 21));
        timeEdit->setStyleSheet(QString::fromUtf8(""));
        timeEdit->setFrameShape(QFrame::Box);
        lambdaLabel = new QLabel(centralWidget);
        lambdaLabel->setObjectName(QString::fromUtf8("lambdaLabel"));
        lambdaLabel->setGeometry(QRect(460, 30, 16, 26));
        rLabel = new QLabel(centralWidget);
        rLabel->setObjectName(QString::fromUtf8("rLabel"));
        rLabel->setGeometry(QRect(460, 90, 21, 26));
        rLabel->setFrameShape(QFrame::WinPanel);
        rLabel->setLineWidth(2);
        WmLabel = new QLabel(centralWidget);
        WmLabel->setObjectName(QString::fromUtf8("WmLabel"));
        WmLabel->setGeometry(QRect(460, 120, 21, 26));
        PmLabel = new QLabel(centralWidget);
        PmLabel->setObjectName(QString::fromUtf8("PmLabel"));
        PmLabel->setGeometry(QRect(460, 240, 20, 26));
        TmLabel = new QLabel(centralWidget);
        TmLabel->setObjectName(QString::fromUtf8("TmLabel"));
        TmLabel->setGeometry(QRect(740, 30, 21, 21));
        CpLabel = new QLabel(centralWidget);
        CpLabel->setObjectName(QString::fromUtf8("CpLabel"));
        CpLabel->setGeometry(QRect(460, 180, 16, 26));
        betaLabel = new QLabel(centralWidget);
        betaLabel->setObjectName(QString::fromUtf8("betaLabel"));
        betaLabel->setGeometry(QRect(460, 210, 16, 26));
        nLabel = new QLabel(centralWidget);
        nLabel->setObjectName(QString::fromUtf8("nLabel"));
        nLabel->setGeometry(QRect(460, 150, 16, 26));
        rEdit = new QLineEdit(centralWidget);
        rEdit->setObjectName(QString::fromUtf8("rEdit"));
        rEdit->setGeometry(QRect(490, 90, 171, 20));
        WmEdit = new QLineEdit(centralWidget);
        WmEdit->setObjectName(QString::fromUtf8("WmEdit"));
        WmEdit->setGeometry(QRect(490, 120, 171, 20));
        PmEdit = new QLineEdit(centralWidget);
        PmEdit->setObjectName(QString::fromUtf8("PmEdit"));
        PmEdit->setGeometry(QRect(490, 240, 171, 20));
        PmEdit->setMaxLength(999999999);
        TmEdit = new QLineEdit(centralWidget);
        TmEdit->setObjectName(QString::fromUtf8("TmEdit"));
        TmEdit->setGeometry(QRect(770, 30, 171, 20));
        TmEdit->setMaxLength(999999999);
        CpEdit = new QLineEdit(centralWidget);
        CpEdit->setObjectName(QString::fromUtf8("CpEdit"));
        CpEdit->setGeometry(QRect(490, 180, 171, 20));
        betaEdit = new QLineEdit(centralWidget);
        betaEdit->setObjectName(QString::fromUtf8("betaEdit"));
        betaEdit->setGeometry(QRect(490, 210, 171, 20));
        nEdit = new QLineEdit(centralWidget);
        nEdit->setObjectName(QString::fromUtf8("nEdit"));
        nEdit->setGeometry(QRect(490, 150, 171, 20));
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(1270, 10, 41, 41));
        helpButton->setStyleSheet(QString::fromUtf8("QPushButton#helpButton {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#helpButton:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/testBitirme/Resources/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        helpButton->setIcon(icon1);
        helpButton->setIconSize(QSize(32, 32));
        PidealLabel = new QLabel(centralWidget);
        PidealLabel->setObjectName(QString::fromUtf8("PidealLabel"));
        PidealLabel->setGeometry(QRect(460, 270, 16, 26));
        TurbineEfficiencyLabel = new QLabel(centralWidget);
        TurbineEfficiencyLabel->setObjectName(QString::fromUtf8("TurbineEfficiencyLabel"));
        TurbineEfficiencyLabel->setGeometry(QRect(800, 160, 121, 41));
        turbineEffLcd = new QLCDNumber(centralWidget);
        turbineEffLcd->setObjectName(QString::fromUtf8("turbineEffLcd"));
        turbineEffLcd->setGeometry(QRect(760, 210, 211, 71));
        sizePolicy.setHeightForWidth(turbineEffLcd->sizePolicy().hasHeightForWidth());
        turbineEffLcd->setSizePolicy(sizePolicy);
        turbineEffLcd->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        turbineEffLcd->setSmallDecimalPoint(false);
        turbineEffLcd->setNumDigits(8);
        turbineEffLcd->setDigitCount(8);
        turbineEffLcd->setMode(QLCDNumber::Dec);
        turbineEffLcd->setSegmentStyle(QLCDNumber::Filled);
        turbineEffLcd->setProperty("value", QVariant(0));
        turbineEffLcd->setProperty("intValue", QVariant(0));
        PidealEdit = new QLineEdit(centralWidget);
        PidealEdit->setObjectName(QString::fromUtf8("PidealEdit"));
        PidealEdit->setGeometry(QRect(490, 270, 171, 20));
        PidealEdit->setMaxLength(999999999);
        minus1 = new QPushButton(centralWidget);
        minus1->setObjectName(QString::fromUtf8("minus1"));
        minus1->setGeometry(QRect(150, 300, 31, 23));
        minus1->setStyleSheet(QString::fromUtf8("QPushButton#minus1 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#minus1:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        plus1 = new QPushButton(centralWidget);
        plus1->setObjectName(QString::fromUtf8("plus1"));
        plus1->setGeometry(QRect(230, 300, 31, 23));
        plus1->setStyleSheet(QString::fromUtf8("QPushButton#plus1 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#plus1:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        fit1 = new QPushButton(centralWidget);
        fit1->setObjectName(QString::fromUtf8("fit1"));
        fit1->setGeometry(QRect(190, 300, 31, 23));
        fit1->setStyleSheet(QString::fromUtf8("QPushButton#fit1 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#fit1:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        fit2 = new QPushButton(centralWidget);
        fit2->setObjectName(QString::fromUtf8("fit2"));
        fit2->setGeometry(QRect(630, 300, 31, 23));
        fit2->setStyleSheet(QString::fromUtf8("QPushButton#fit2 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#fit2:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        plus2 = new QPushButton(centralWidget);
        plus2->setObjectName(QString::fromUtf8("plus2"));
        plus2->setGeometry(QRect(670, 300, 31, 23));
        plus2->setStyleSheet(QString::fromUtf8("QPushButton#plus2 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#plus2:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        minus2 = new QPushButton(centralWidget);
        minus2->setObjectName(QString::fromUtf8("minus2"));
        minus2->setGeometry(QRect(590, 300, 31, 23));
        minus2->setStyleSheet(QString::fromUtf8("QPushButton#minus2 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#minus2:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        plus3 = new QPushButton(centralWidget);
        plus3->setObjectName(QString::fromUtf8("plus3"));
        plus3->setGeometry(QRect(1090, 300, 31, 23));
        plus3->setStyleSheet(QString::fromUtf8("QPushButton#plus3 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#plus3:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        fit3 = new QPushButton(centralWidget);
        fit3->setObjectName(QString::fromUtf8("fit3"));
        fit3->setGeometry(QRect(1050, 300, 31, 23));
        fit3->setStyleSheet(QString::fromUtf8("QPushButton#fit3 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#fit3:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        minus3 = new QPushButton(centralWidget);
        minus3->setObjectName(QString::fromUtf8("minus3"));
        minus3->setGeometry(QRect(1010, 300, 31, 23));
        minus3->setStyleSheet(QString::fromUtf8("QPushButton#minus3 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#minus3:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        bigminus1 = new QPushButton(centralWidget);
        bigminus1->setObjectName(QString::fromUtf8("bigminus1"));
        bigminus1->setGeometry(QRect(110, 300, 31, 23));
        bigminus1->setStyleSheet(QString::fromUtf8("QPushButton#bigminus1 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#bigminus1:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        bigplus1 = new QPushButton(centralWidget);
        bigplus1->setObjectName(QString::fromUtf8("bigplus1"));
        bigplus1->setGeometry(QRect(270, 300, 31, 23));
        bigplus1->setStyleSheet(QString::fromUtf8("QPushButton#bigplus1 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#bigplus1:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        bigplus2 = new QPushButton(centralWidget);
        bigplus2->setObjectName(QString::fromUtf8("bigplus2"));
        bigplus2->setGeometry(QRect(710, 300, 31, 23));
        bigplus2->setStyleSheet(QString::fromUtf8("QPushButton#bigplus2 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#bigplus2:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        bigminus2 = new QPushButton(centralWidget);
        bigminus2->setObjectName(QString::fromUtf8("bigminus2"));
        bigminus2->setGeometry(QRect(550, 300, 31, 23));
        bigminus2->setStyleSheet(QString::fromUtf8("QPushButton#bigminus2 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#bigminus2:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        bigplus3 = new QPushButton(centralWidget);
        bigplus3->setObjectName(QString::fromUtf8("bigplus3"));
        bigplus3->setGeometry(QRect(1130, 300, 31, 23));
        bigplus3->setStyleSheet(QString::fromUtf8("QPushButton#bigplus3 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#bigplus3:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        bigminus3 = new QPushButton(centralWidget);
        bigminus3->setObjectName(QString::fromUtf8("bigminus3"));
        bigminus3->setGeometry(QRect(970, 300, 31, 23));
        bigminus3->setStyleSheet(QString::fromUtf8("QPushButton#bigminus3 {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#bigminus3:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        timeResLabel = new QLabel(centralWidget);
        timeResLabel->setObjectName(QString::fromUtf8("timeResLabel"));
        timeResLabel->setGeometry(QRect(10, 260, 131, 31));
        timeResLabel->setFrameShape(QFrame::WinPanel);
        timeResLabel->setLineWidth(2);
        timeResEdit = new QLineEdit(centralWidget);
        timeResEdit->setObjectName(QString::fromUtf8("timeResEdit"));
        timeResEdit->setGeometry(QRect(150, 260, 71, 31));
        msLabel = new QLabel(centralWidget);
        msLabel->setObjectName(QString::fromUtf8("msLabel"));
        msLabel->setGeometry(QRect(230, 270, 61, 16));
        m_snLabel = new QLabel(centralWidget);
        m_snLabel->setObjectName(QString::fromUtf8("m_snLabel"));
        m_snLabel->setGeometry(QRect(200, 60, 31, 26));
        m_snLabel_2 = new QLabel(centralWidget);
        m_snLabel_2->setObjectName(QString::fromUtf8("m_snLabel_2"));
        m_snLabel_2->setGeometry(QRect(200, 100, 31, 26));
        m_snLabel_3 = new QLabel(centralWidget);
        m_snLabel_3->setObjectName(QString::fromUtf8("m_snLabel_3"));
        m_snLabel_3->setGeometry(QRect(200, 130, 31, 26));
        m_snLabel_4 = new QLabel(centralWidget);
        m_snLabel_4->setObjectName(QString::fromUtf8("m_snLabel_4"));
        m_snLabel_4->setGeometry(QRect(200, 160, 31, 26));
        m_snLabel_5 = new QLabel(centralWidget);
        m_snLabel_5->setObjectName(QString::fromUtf8("m_snLabel_5"));
        m_snLabel_5->setGeometry(QRect(200, 200, 31, 26));
        kg_m3Label = new QLabel(centralWidget);
        kg_m3Label->setObjectName(QString::fromUtf8("kg_m3Label"));
        kg_m3Label->setGeometry(QRect(410, 30, 41, 26));
        mLabel = new QLabel(centralWidget);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));
        mLabel->setGeometry(QRect(670, 90, 16, 26));
        rad_snLabel = new QLabel(centralWidget);
        rad_snLabel->setObjectName(QString::fromUtf8("rad_snLabel"));
        rad_snLabel->setGeometry(QRect(670, 120, 31, 26));
        kWattLabel = new QLabel(centralWidget);
        kWattLabel->setObjectName(QString::fromUtf8("kWattLabel"));
        kWattLabel->setGeometry(QRect(670, 240, 41, 26));
        torkLabel = new QLabel(centralWidget);
        torkLabel->setObjectName(QString::fromUtf8("torkLabel"));
        torkLabel->setGeometry(QRect(950, 30, 41, 26));
        kWattLabel_2 = new QLabel(centralWidget);
        kWattLabel_2->setObjectName(QString::fromUtf8("kWattLabel_2"));
        kWattLabel_2->setGeometry(QRect(670, 270, 41, 26));
        degreeLabel = new QLabel(centralWidget);
        degreeLabel->setObjectName(QString::fromUtf8("degreeLabel"));
        degreeLabel->setGeometry(QRect(670, 210, 21, 26));
        snLabel = new QLabel(centralWidget);
        snLabel->setObjectName(QString::fromUtf8("snLabel"));
        snLabel->setGeometry(QRect(410, 90, 16, 26));
        PtLabel = new QLabel(centralWidget);
        PtLabel->setObjectName(QString::fromUtf8("PtLabel"));
        PtLabel->setGeometry(QRect(740, 60, 21, 20));
        PtEdit = new QLineEdit(centralWidget);
        PtEdit->setObjectName(QString::fromUtf8("PtEdit"));
        PtEdit->setGeometry(QRect(770, 60, 171, 20));
        PtEdit->setMaxLength(999999999);
        nmEdit = new QLineEdit(centralWidget);
        nmEdit->setObjectName(QString::fromUtf8("nmEdit"));
        nmEdit->setGeometry(QRect(770, 90, 171, 20));
        nmEdit->setMaxLength(999999999);
        PeEdit = new QLineEdit(centralWidget);
        PeEdit->setObjectName(QString::fromUtf8("PeEdit"));
        PeEdit->setGeometry(QRect(770, 120, 171, 20));
        PeEdit->setMaxLength(999999999);
        nmLabel = new QLabel(centralWidget);
        nmLabel->setObjectName(QString::fromUtf8("nmLabel"));
        nmLabel->setGeometry(QRect(740, 90, 21, 21));
        nmLabel->setFrameShape(QFrame::WinPanel);
        nmLabel->setLineWidth(2);
        PeLabel = new QLabel(centralWidget);
        PeLabel->setObjectName(QString::fromUtf8("PeLabel"));
        PeLabel->setGeometry(QRect(740, 120, 21, 21));
        kWattLabel_3 = new QLabel(centralWidget);
        kWattLabel_3->setObjectName(QString::fromUtf8("kWattLabel_3"));
        kWattLabel_3->setGeometry(QRect(950, 120, 41, 21));
        kWattLabel_4 = new QLabel(centralWidget);
        kWattLabel_4->setObjectName(QString::fromUtf8("kWattLabel_4"));
        kWattLabel_4->setGeometry(QRect(950, 60, 41, 26));
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setEnabled(false);
        saveButton->setGeometry(QRect(260, 190, 151, 61));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton#saveButton {\n"
"	 background-color:lightgray;\n"
"     border-style: outset;\n"
"     border-width: 1px;\n"
"     border-radius: 10px;\n"
"     border-color: black;\n"
" }\n"
" QPushButton#saveButton:pressed {\n"
"     background-color:gray;\n"
"	 border-style: inset;\n"
" }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Resources/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon2);
        saveButton->setIconSize(QSize(24, 24));
        disliLabel = new QLabel(centralWidget);
        disliLabel->setObjectName(QString::fromUtf8("disliLabel"));
        disliLabel->setGeometry(QRect(950, 90, 61, 26));
        turbinAcceEdit = new QLineEdit(centralWidget);
        turbinAcceEdit->setObjectName(QString::fromUtf8("turbinAcceEdit"));
        turbinAcceEdit->setGeometry(QRect(490, 60, 171, 20));
        turbinAcceLabel = new QLabel(centralWidget);
        turbinAcceLabel->setObjectName(QString::fromUtf8("turbinAcceLabel"));
        turbinAcceLabel->setGeometry(QRect(460, 60, 21, 26));
        turbinAcceLabel->setFrameShape(QFrame::WinPanel);
        turbinAcceLabel->setLineWidth(2);
        m_sn2Label = new QLabel(centralWidget);
        m_sn2Label->setObjectName(QString::fromUtf8("m_sn2Label"));
        m_sn2Label->setGeometry(QRect(670, 60, 41, 26));
        rpmLabel = new QLabel(centralWidget);
        rpmLabel->setObjectName(QString::fromUtf8("rpmLabel"));
        rpmLabel->setGeometry(QRect(670, 150, 41, 26));
        ruzgarComboBox = new QComboBox(centralWidget);
        ruzgarComboBox->setObjectName(QString::fromUtf8("ruzgarComboBox"));
        ruzgarComboBox->setGeometry(QRect(50, 40, 151, 22));
        vTypeLabel = new QLabel(centralWidget);
        vTypeLabel->setObjectName(QString::fromUtf8("vTypeLabel"));
        vTypeLabel->setGeometry(QRect(0, 40, 41, 25));
        vTypeLabel->setFrameShape(QFrame::WinPanel);
        vTypeLabel->setLineWidth(2);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 330, 1311, 371));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        ruzgarPlot = new QCustomPlot(tab_1);
        ruzgarPlot->setObjectName(QString::fromUtf8("ruzgarPlot"));
        ruzgarPlot->setEnabled(true);
        ruzgarPlot->setGeometry(QRect(30, 10, 400, 300));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ruzgarPlot->sizePolicy().hasHeightForWidth());
        ruzgarPlot->setSizePolicy(sizePolicy1);
        ruzgarPlot->setMinimumSize(QSize(400, 300));
        ruzgarPlot->setMaximumSize(QSize(400, 300));
        vWindGraphLabel = new QLabel(tab_1);
        vWindGraphLabel->setObjectName(QString::fromUtf8("vWindGraphLabel"));
        vWindGraphLabel->setGeometry(QRect(0, 120, 31, 31));
        vWindGraphLabel->setTextFormat(Qt::RichText);
        CpLambdaPlot = new QCustomPlot(tab_1);
        CpLambdaPlot->setObjectName(QString::fromUtf8("CpLambdaPlot"));
        CpLambdaPlot->setEnabled(true);
        CpLambdaPlot->setGeometry(QRect(460, 10, 400, 300));
        CpLambdaPlot->setMinimumSize(QSize(400, 300));
        CpLambdaPlot->setMaximumSize(QSize(400, 300));
        CpGraphLabel = new QLabel(tab_1);
        CpGraphLabel->setObjectName(QString::fromUtf8("CpGraphLabel"));
        CpGraphLabel->setGeometry(QRect(430, 110, 21, 31));
        CpGraphLabel->setTextFormat(Qt::RichText);
        lambdaGraphLabel = new QLabel(tab_1);
        lambdaGraphLabel->setObjectName(QString::fromUtf8("lambdaGraphLabel"));
        lambdaGraphLabel->setGeometry(QRect(430, 150, 21, 31));
        lambdaGraphLabel->setTextFormat(Qt::RichText);
        PmaxPlot = new QCustomPlot(tab_1);
        PmaxPlot->setObjectName(QString::fromUtf8("PmaxPlot"));
        PmaxPlot->setEnabled(true);
        PmaxPlot->setGeometry(QRect(890, 10, 400, 300));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(PmaxPlot->sizePolicy().hasHeightForWidth());
        PmaxPlot->setSizePolicy(sizePolicy2);
        PmaxPlot->setMinimumSize(QSize(400, 300));
        PmaxPlot->setMaximumSize(QSize(400, 300));
        PmGraphLabel = new QLabel(tab_1);
        PmGraphLabel->setObjectName(QString::fromUtf8("PmGraphLabel"));
        PmGraphLabel->setGeometry(QRect(860, 100, 21, 21));
        PmGraphLabel->setTextFormat(Qt::RichText);
        PmGraphLabel_2 = new QLabel(tab_1);
        PmGraphLabel_2->setObjectName(QString::fromUtf8("PmGraphLabel_2"));
        PmGraphLabel_2->setGeometry(QRect(860, 130, 21, 21));
        PmGraphLabel_2->setTextFormat(Qt::RichText);
        timeGraphLabel = new QLabel(tab_1);
        timeGraphLabel->setObjectName(QString::fromUtf8("timeGraphLabel"));
        timeGraphLabel->setGeometry(QRect(190, 310, 16, 31));
        timeGraphLabel->setTextFormat(Qt::RichText);
        timeGraphLabel2 = new QLabel(tab_1);
        timeGraphLabel2->setObjectName(QString::fromUtf8("timeGraphLabel2"));
        timeGraphLabel2->setGeometry(QRect(620, 310, 16, 31));
        timeGraphLabel2->setTextFormat(Qt::RichText);
        timeGraphLabel3 = new QLabel(tab_1);
        timeGraphLabel3->setObjectName(QString::fromUtf8("timeGraphLabel3"));
        timeGraphLabel3->setGeometry(QRect(1060, 320, 16, 31));
        timeGraphLabel3->setTextFormat(Qt::RichText);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        rotorPlot = new QCustomPlot(tab_2);
        rotorPlot->setObjectName(QString::fromUtf8("rotorPlot"));
        rotorPlot->setEnabled(true);
        rotorPlot->setGeometry(QRect(30, 10, 400, 300));
        sizePolicy1.setHeightForWidth(rotorPlot->sizePolicy().hasHeightForWidth());
        rotorPlot->setSizePolicy(sizePolicy1);
        rotorPlot->setMinimumSize(QSize(400, 300));
        rotorPlot->setMaximumSize(QSize(400, 300));
        vWindGraphLabel_2 = new QLabel(tab_2);
        vWindGraphLabel_2->setObjectName(QString::fromUtf8("vWindGraphLabel_2"));
        vWindGraphLabel_2->setGeometry(QRect(0, 120, 21, 31));
        vWindGraphLabel_2->setTextFormat(Qt::RichText);
        timeGraphLabel_2 = new QLabel(tab_2);
        timeGraphLabel_2->setObjectName(QString::fromUtf8("timeGraphLabel_2"));
        timeGraphLabel_2->setGeometry(QRect(190, 310, 16, 21));
        timeGraphLabel_2->setTextFormat(Qt::RichText);
        betaPlot = new QCustomPlot(tab_2);
        betaPlot->setObjectName(QString::fromUtf8("betaPlot"));
        betaPlot->setEnabled(true);
        betaPlot->setGeometry(QRect(460, 10, 400, 300));
        sizePolicy1.setHeightForWidth(betaPlot->sizePolicy().hasHeightForWidth());
        betaPlot->setSizePolicy(sizePolicy1);
        betaPlot->setMinimumSize(QSize(400, 300));
        betaPlot->setMaximumSize(QSize(400, 300));
        CpGraphLabel_2 = new QLabel(tab_2);
        CpGraphLabel_2->setObjectName(QString::fromUtf8("CpGraphLabel_2"));
        CpGraphLabel_2->setGeometry(QRect(440, 120, 21, 31));
        CpGraphLabel_2->setTextFormat(Qt::RichText);
        timeGraphLabel_3 = new QLabel(tab_2);
        timeGraphLabel_3->setObjectName(QString::fromUtf8("timeGraphLabel_3"));
        timeGraphLabel_3->setGeometry(QRect(640, 310, 16, 21));
        timeGraphLabel_3->setTextFormat(Qt::RichText);
        PePlot = new QCustomPlot(tab_2);
        PePlot->setObjectName(QString::fromUtf8("PePlot"));
        PePlot->setEnabled(true);
        PePlot->setGeometry(QRect(890, 10, 400, 300));
        sizePolicy1.setHeightForWidth(PePlot->sizePolicy().hasHeightForWidth());
        PePlot->setSizePolicy(sizePolicy1);
        PePlot->setMinimumSize(QSize(400, 300));
        PePlot->setMaximumSize(QSize(400, 300));
        CpGraphLabel_3 = new QLabel(tab_2);
        CpGraphLabel_3->setObjectName(QString::fromUtf8("CpGraphLabel_3"));
        CpGraphLabel_3->setGeometry(QRect(870, 120, 21, 31));
        CpGraphLabel_3->setTextFormat(Qt::RichText);
        timeGraphLabel_4 = new QLabel(tab_2);
        timeGraphLabel_4->setObjectName(QString::fromUtf8("timeGraphLabel_4"));
        timeGraphLabel_4->setGeometry(QRect(1070, 310, 16, 21));
        timeGraphLabel_4->setTextFormat(Qt::RichText);
        detailedLabel = new QLabel(tab_2);
        detailedLabel->setObjectName(QString::fromUtf8("detailedLabel"));
        detailedLabel->setEnabled(false);
        detailedLabel->setGeometry(QRect(330, 270, 1, 1));
        detailedLabel->setMaximumSize(QSize(1, 1));
        detailedLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        tabWidget->addTab(tab_2, QString());
        VaLabel = new QLabel(centralWidget);
        VaLabel->setObjectName(QString::fromUtf8("VaLabel"));
        VaLabel->setGeometry(QRect(990, 240, 16, 21));
        VbLabel = new QLabel(centralWidget);
        VbLabel->setObjectName(QString::fromUtf8("VbLabel"));
        VbLabel->setGeometry(QRect(990, 270, 16, 21));
        VcLabel = new QLabel(centralWidget);
        VcLabel->setObjectName(QString::fromUtf8("VcLabel"));
        VcLabel->setGeometry(QRect(1100, 240, 21, 21));
        VaEdit = new QLabel(centralWidget);
        VaEdit->setObjectName(QString::fromUtf8("VaEdit"));
        VaEdit->setGeometry(QRect(1010, 240, 71, 21));
        VaEdit->setStyleSheet(QString::fromUtf8(""));
        VaEdit->setFrameShape(QFrame::Box);
        VbEdit = new QLabel(centralWidget);
        VbEdit->setObjectName(QString::fromUtf8("VbEdit"));
        VbEdit->setGeometry(QRect(1010, 270, 71, 21));
        VbEdit->setStyleSheet(QString::fromUtf8(""));
        VbEdit->setFrameShape(QFrame::Box);
        VcEdit = new QLabel(centralWidget);
        VcEdit->setObjectName(QString::fromUtf8("VcEdit"));
        VcEdit->setGeometry(QRect(1130, 240, 71, 21));
        VcEdit->setStyleSheet(QString::fromUtf8(""));
        VcEdit->setFrameShape(QFrame::Box);
        IbEdit = new QLabel(centralWidget);
        IbEdit->setObjectName(QString::fromUtf8("IbEdit"));
        IbEdit->setGeometry(QRect(1240, 240, 71, 21));
        IbEdit->setStyleSheet(QString::fromUtf8(""));
        IbEdit->setFrameShape(QFrame::Box);
        IcEdit = new QLabel(centralWidget);
        IcEdit->setObjectName(QString::fromUtf8("IcEdit"));
        IcEdit->setGeometry(QRect(1240, 270, 71, 21));
        IcEdit->setStyleSheet(QString::fromUtf8(""));
        IcEdit->setFrameShape(QFrame::Box);
        VbLabel_2 = new QLabel(centralWidget);
        VbLabel_2->setObjectName(QString::fromUtf8("VbLabel_2"));
        VbLabel_2->setGeometry(QRect(1210, 240, 21, 21));
        IaEdit = new QLabel(centralWidget);
        IaEdit->setObjectName(QString::fromUtf8("IaEdit"));
        IaEdit->setGeometry(QRect(1130, 270, 71, 21));
        IaEdit->setStyleSheet(QString::fromUtf8(""));
        IaEdit->setFrameShape(QFrame::Box);
        VcLabel_2 = new QLabel(centralWidget);
        VcLabel_2->setObjectName(QString::fromUtf8("VcLabel_2"));
        VcLabel_2->setGeometry(QRect(1210, 270, 21, 21));
        VaLabel_2 = new QLabel(centralWidget);
        VaLabel_2->setObjectName(QString::fromUtf8("VaLabel_2"));
        VaLabel_2->setGeometry(QRect(1100, 270, 21, 21));
        PtLabel_2 = new QLabel(centralWidget);
        PtLabel_2->setObjectName(QString::fromUtf8("PtLabel_2"));
        PtLabel_2->setGeometry(QRect(1040, 50, 41, 20));
        PtLabel_2->setFrameShape(QFrame::WinPanel);
        PtLabel_2->setLineWidth(2);
        TmLabel_2 = new QLabel(centralWidget);
        TmLabel_2->setObjectName(QString::fromUtf8("TmLabel_2"));
        TmLabel_2->setGeometry(QRect(1040, 30, 41, 21));
        TmLabel_2->setFrameShape(QFrame::WinPanel);
        TmLabel_2->setLineWidth(2);
        LdEdit = new QLineEdit(centralWidget);
        LdEdit->setObjectName(QString::fromUtf8("LdEdit"));
        LdEdit->setGeometry(QRect(1090, 50, 171, 20));
        LdEdit->setMaxLength(999999999);
        LqEdit = new QLineEdit(centralWidget);
        LqEdit->setObjectName(QString::fromUtf8("LqEdit"));
        LqEdit->setGeometry(QRect(1090, 70, 171, 20));
        LqEdit->setMaxLength(999999999);
        RsEdit = new QLineEdit(centralWidget);
        RsEdit->setObjectName(QString::fromUtf8("RsEdit"));
        RsEdit->setGeometry(QRect(1090, 90, 171, 20));
        RsEdit->setMaxLength(999999999);
        nmLabel_2 = new QLabel(centralWidget);
        nmLabel_2->setObjectName(QString::fromUtf8("nmLabel_2"));
        nmLabel_2->setGeometry(QRect(1040, 70, 41, 21));
        nmLabel_2->setFrameShape(QFrame::WinPanel);
        nmLabel_2->setLineWidth(2);
        PeLabel_2 = new QLabel(centralWidget);
        PeLabel_2->setObjectName(QString::fromUtf8("PeLabel_2"));
        PeLabel_2->setGeometry(QRect(1040, 90, 41, 21));
        PeLabel_2->setFrameShape(QFrame::WinPanel);
        PeLabel_2->setLineWidth(2);
        LpmEdit = new QLineEdit(centralWidget);
        LpmEdit->setObjectName(QString::fromUtf8("LpmEdit"));
        LpmEdit->setGeometry(QRect(1090, 30, 171, 20));
        LpmEdit->setMaxLength(999999999);
        PtLabel_3 = new QLabel(centralWidget);
        PtLabel_3->setObjectName(QString::fromUtf8("PtLabel_3"));
        PtLabel_3->setGeometry(QRect(1040, 130, 41, 20));
        PtLabel_3->setFrameShape(QFrame::WinPanel);
        PtLabel_3->setLineWidth(2);
        TmLabel_3 = new QLabel(centralWidget);
        TmLabel_3->setObjectName(QString::fromUtf8("TmLabel_3"));
        TmLabel_3->setGeometry(QRect(1040, 110, 41, 21));
        TmLabel_3->setFrameShape(QFrame::WinPanel);
        TmLabel_3->setLineWidth(2);
        JEdit = new QLineEdit(centralWidget);
        JEdit->setObjectName(QString::fromUtf8("JEdit"));
        JEdit->setGeometry(QRect(1090, 130, 171, 20));
        JEdit->setMaxLength(999999999);
        PeLabel_3 = new QLabel(centralWidget);
        PeLabel_3->setObjectName(QString::fromUtf8("PeLabel_3"));
        PeLabel_3->setGeometry(QRect(1040, 170, 41, 21));
        PeLabel_3->setFrameShape(QFrame::WinPanel);
        PeLabel_3->setLineWidth(2);
        PKSEdit = new QLineEdit(centralWidget);
        PKSEdit->setObjectName(QString::fromUtf8("PKSEdit"));
        PKSEdit->setGeometry(QRect(1090, 150, 171, 20));
        PKSEdit->setMaxLength(999999999);
        DSYEdit = new QLineEdit(centralWidget);
        DSYEdit->setObjectName(QString::fromUtf8("DSYEdit"));
        DSYEdit->setGeometry(QRect(1090, 170, 171, 20));
        DSYEdit->setMaxLength(999999999);
        nmLabel_3 = new QLabel(centralWidget);
        nmLabel_3->setObjectName(QString::fromUtf8("nmLabel_3"));
        nmLabel_3->setGeometry(QRect(1040, 150, 41, 21));
        nmLabel_3->setFrameShape(QFrame::WinPanel);
        nmLabel_3->setLineWidth(2);
        DEdit = new QLineEdit(centralWidget);
        DEdit->setObjectName(QString::fromUtf8("DEdit"));
        DEdit->setGeometry(QRect(1090, 110, 171, 20));
        DEdit->setMaxLength(999999999);
        ElectricityParamLabel_2 = new QLabel(centralWidget);
        ElectricityParamLabel_2->setObjectName(QString::fromUtf8("ElectricityParamLabel_2"));
        ElectricityParamLabel_2->setGeometry(QRect(1050, 0, 161, 21));
        ElectricityParamLabel_2->setFont(font);
        testBitirmeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testBitirmeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1323, 21));
        testBitirmeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testBitirmeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testBitirmeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testBitirmeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testBitirmeClass->setStatusBar(statusBar);

        retranslateUi(testBitirmeClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(testBitirmeClass);
    } // setupUi

    void retranslateUi(QMainWindow *testBitirmeClass)
    {
        testBitirmeClass->setWindowTitle(QApplication::translate("testBitirmeClass", "CSE495 Wind Turbine Simulator", 0, QApplication::UnicodeUTF8));
        windParamLabel->setText(QApplication::translate("testBitirmeClass", "Wind Parameters", 0, QApplication::UnicodeUTF8));
        vGustLabel->setText(QApplication::translate("testBitirmeClass", "VGust", 0, QApplication::UnicodeUTF8));
        vRampLabel->setText(QApplication::translate("testBitirmeClass", "VRamp", 0, QApplication::UnicodeUTF8));
        vWindLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-size:10pt;\">VWind</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ElectricityParamLabel->setText(QApplication::translate("testBitirmeClass", "Electricity Parameters", 0, QApplication::UnicodeUTF8));
        vBaseLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">VBase</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        vNoiseLabel->setText(QApplication::translate("testBitirmeClass", "VNoise", 0, QApplication::UnicodeUTF8));
        turbineParamLabel->setText(QApplication::translate("testBitirmeClass", "Turbine Parameters", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("testBitirmeClass", "Start Analys", 0, QApplication::UnicodeUTF8));
        pLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">p</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        IuLabel->setText(QApplication::translate("testBitirmeClass", "Iu", 0, QApplication::UnicodeUTF8));
        IuEdit->setText(QString());
        timeLabel->setText(QApplication::translate("testBitirmeClass", "time", 0, QApplication::UnicodeUTF8));
        timeEdit->setText(QString());
        lambdaLabel->setText(QApplication::translate("testBitirmeClass", "\316\273", 0, QApplication::UnicodeUTF8));
        rLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">R</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        WmLabel->setText(QApplication::translate("testBitirmeClass", "Wm", 0, QApplication::UnicodeUTF8));
        PmLabel->setText(QApplication::translate("testBitirmeClass", "Pm", 0, QApplication::UnicodeUTF8));
        TmLabel->setText(QApplication::translate("testBitirmeClass", "Tm", 0, QApplication::UnicodeUTF8));
        CpLabel->setText(QApplication::translate("testBitirmeClass", "Cp", 0, QApplication::UnicodeUTF8));
        betaLabel->setText(QApplication::translate("testBitirmeClass", "\316\262", 0, QApplication::UnicodeUTF8));
        nLabel->setText(QApplication::translate("testBitirmeClass", "n", 0, QApplication::UnicodeUTF8));
        helpButton->setText(QString());
        PidealLabel->setText(QApplication::translate("testBitirmeClass", "Pw", 0, QApplication::UnicodeUTF8));
        TurbineEfficiencyLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-size:11pt;\">Turbine Efficiency</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        minus1->setText(QApplication::translate("testBitirmeClass", "-", 0, QApplication::UnicodeUTF8));
        plus1->setText(QApplication::translate("testBitirmeClass", "+", 0, QApplication::UnicodeUTF8));
        fit1->setText(QApplication::translate("testBitirmeClass", "Fit", 0, QApplication::UnicodeUTF8));
        fit2->setText(QApplication::translate("testBitirmeClass", "Fit", 0, QApplication::UnicodeUTF8));
        plus2->setText(QApplication::translate("testBitirmeClass", "+", 0, QApplication::UnicodeUTF8));
        minus2->setText(QApplication::translate("testBitirmeClass", "-", 0, QApplication::UnicodeUTF8));
        plus3->setText(QApplication::translate("testBitirmeClass", "+", 0, QApplication::UnicodeUTF8));
        fit3->setText(QApplication::translate("testBitirmeClass", "Fit", 0, QApplication::UnicodeUTF8));
        minus3->setText(QApplication::translate("testBitirmeClass", "-", 0, QApplication::UnicodeUTF8));
        bigminus1->setText(QApplication::translate("testBitirmeClass", "Big -", 0, QApplication::UnicodeUTF8));
        bigplus1->setText(QApplication::translate("testBitirmeClass", "Big +", 0, QApplication::UnicodeUTF8));
        bigplus2->setText(QApplication::translate("testBitirmeClass", "Big +", 0, QApplication::UnicodeUTF8));
        bigminus2->setText(QApplication::translate("testBitirmeClass", "Big -", 0, QApplication::UnicodeUTF8));
        bigplus3->setText(QApplication::translate("testBitirmeClass", "Big +", 0, QApplication::UnicodeUTF8));
        bigminus3->setText(QApplication::translate("testBitirmeClass", "Big -", 0, QApplication::UnicodeUTF8));
        timeResLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#aa0000;\">Time Resolution(ms)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        msLabel->setText(QApplication::translate("testBitirmeClass", "miliseconds", 0, QApplication::UnicodeUTF8));
        m_snLabel->setText(QApplication::translate("testBitirmeClass", "m/sn", 0, QApplication::UnicodeUTF8));
        m_snLabel_2->setText(QApplication::translate("testBitirmeClass", "m/sn", 0, QApplication::UnicodeUTF8));
        m_snLabel_3->setText(QApplication::translate("testBitirmeClass", "m/sn", 0, QApplication::UnicodeUTF8));
        m_snLabel_4->setText(QApplication::translate("testBitirmeClass", "m/sn", 0, QApplication::UnicodeUTF8));
        m_snLabel_5->setText(QApplication::translate("testBitirmeClass", "m/sn", 0, QApplication::UnicodeUTF8));
        kg_m3Label->setText(QApplication::translate("testBitirmeClass", "kg/m^3", 0, QApplication::UnicodeUTF8));
        mLabel->setText(QApplication::translate("testBitirmeClass", "m", 0, QApplication::UnicodeUTF8));
        rad_snLabel->setText(QApplication::translate("testBitirmeClass", "rad/sn", 0, QApplication::UnicodeUTF8));
        kWattLabel->setText(QApplication::translate("testBitirmeClass", "kWatt", 0, QApplication::UnicodeUTF8));
        torkLabel->setText(QApplication::translate("testBitirmeClass", "torque", 0, QApplication::UnicodeUTF8));
        kWattLabel_2->setText(QApplication::translate("testBitirmeClass", "kWatt", 0, QApplication::UnicodeUTF8));
        degreeLabel->setText(QApplication::translate("testBitirmeClass", "\302\260", 0, QApplication::UnicodeUTF8));
        snLabel->setText(QApplication::translate("testBitirmeClass", "sn", 0, QApplication::UnicodeUTF8));
        PtLabel->setText(QApplication::translate("testBitirmeClass", "Pt", 0, QApplication::UnicodeUTF8));
        nmLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">nm</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PeLabel->setText(QApplication::translate("testBitirmeClass", "Pe", 0, QApplication::UnicodeUTF8));
        kWattLabel_3->setText(QApplication::translate("testBitirmeClass", "kWatt", 0, QApplication::UnicodeUTF8));
        kWattLabel_4->setText(QApplication::translate("testBitirmeClass", "kWatt", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("testBitirmeClass", "Save Datas", 0, QApplication::UnicodeUTF8));
        disliLabel->setText(QApplication::translate("testBitirmeClass", "(Di\305\237li Verimi)", 0, QApplication::UnicodeUTF8));
        turbinAcceLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">ta</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        m_sn2Label->setText(QApplication::translate("testBitirmeClass", "m/sn^2", 0, QApplication::UnicodeUTF8));
        rpmLabel->setText(QApplication::translate("testBitirmeClass", "dev/dk", 0, QApplication::UnicodeUTF8));
        ruzgarComboBox->clear();
        ruzgarComboBox->insertItems(0, QStringList()
         << QApplication::translate("testBitirmeClass", "Sinusoidal Wind", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testBitirmeClass", "Superposition Wind", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testBitirmeClass", "Constant-speed Wind", 0, QApplication::UnicodeUTF8)
        );
        vTypeLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">V Type</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        vWindGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#0000ff;\">vWind</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CpGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; color:#aa0000; background-color:#ffffff;\">Cp</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lambdaGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; color:#00aa00; background-color:#ffffff;\">\316\273</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PmGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; color:#ff007f; background-color:#ffffff;\">Pm</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PmGraphLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#ffff00;\">Pt</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("testBitirmeClass", "vWind,Cp,Lambda,Pm,Pt", 0, QApplication::UnicodeUTF8));
        vWindGraphLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#0000ff;\">Wm</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CpGraphLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">\316\262</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel_3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CpGraphLabel_3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#00aa00;\">Pe</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel_4->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        detailedLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("testBitirmeClass", "Wm,Beta,Pe", 0, QApplication::UnicodeUTF8));
        VaLabel->setText(QApplication::translate("testBitirmeClass", "Va", 0, QApplication::UnicodeUTF8));
        VbLabel->setText(QApplication::translate("testBitirmeClass", "Vb", 0, QApplication::UnicodeUTF8));
        VcLabel->setText(QApplication::translate("testBitirmeClass", "Vc", 0, QApplication::UnicodeUTF8));
        VaEdit->setText(QString());
        VbEdit->setText(QString());
        VcEdit->setText(QString());
        IbEdit->setText(QString());
        IcEdit->setText(QString());
        VbLabel_2->setText(QApplication::translate("testBitirmeClass", "Ib", 0, QApplication::UnicodeUTF8));
        IaEdit->setText(QString());
        VcLabel_2->setText(QApplication::translate("testBitirmeClass", "Ic", 0, QApplication::UnicodeUTF8));
        VaLabel_2->setText(QApplication::translate("testBitirmeClass", "Ia", 0, QApplication::UnicodeUTF8));
        PtLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">Ld</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        TmLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">L_PM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        nmLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">Lq</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PeLabel_2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">Rs</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PtLabel_3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">J</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        TmLabel_3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">D</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        PeLabel_3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">D. SY</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        nmLabel_3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">P(K.S)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ElectricityParamLabel_2->setText(QApplication::translate("testBitirmeClass", "PMSG Generator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testBitirmeClass: public Ui_testBitirmeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBITIRME_H
