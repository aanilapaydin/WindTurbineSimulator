/********************************************************************************
** Form generated from reading UI file 'testbitirme.ui'
**
** Created: Sun 21. Dec 01:28:59 2014
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
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_testBitirmeClass
{
public:
    QWidget *centralWidget;
    QCustomPlot *PmaxPlot;
    QCustomPlot *CpLambdaPlot;
    QCustomPlot *ruzgarPlot;
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
    QLabel *lambdaGraphLabel;
    QLabel *CpGraphLabel;
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
    QLabel *vWindGraphLabel;
    QLabel *timeGraphLabel;
    QPushButton *helpButton;
    QLabel *PmGraphLabel;
    QLabel *timeGraphLabel3;
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
    QLabel *timeGraphLabel2;
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
    QLineEdit *ngEdit;
    QLineEdit *PeEdit;
    QLabel *nmLabel;
    QLabel *ngLabel;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testBitirmeClass)
    {
        if (testBitirmeClass->objectName().isEmpty())
            testBitirmeClass->setObjectName(QString::fromUtf8("testBitirmeClass"));
        testBitirmeClass->resize(1300, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/wind turbine simulator.ico"), QSize(), QIcon::Normal, QIcon::Off);
        testBitirmeClass->setWindowIcon(icon);
        testBitirmeClass->setWindowOpacity(100);
        centralWidget = new QWidget(testBitirmeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PmaxPlot = new QCustomPlot(centralWidget);
        PmaxPlot->setObjectName(QString::fromUtf8("PmaxPlot"));
        PmaxPlot->setEnabled(true);
        PmaxPlot->setGeometry(QRect(890, 330, 400, 300));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PmaxPlot->sizePolicy().hasHeightForWidth());
        PmaxPlot->setSizePolicy(sizePolicy);
        PmaxPlot->setMinimumSize(QSize(400, 300));
        PmaxPlot->setMaximumSize(QSize(400, 300));
        CpLambdaPlot = new QCustomPlot(centralWidget);
        CpLambdaPlot->setObjectName(QString::fromUtf8("CpLambdaPlot"));
        CpLambdaPlot->setEnabled(true);
        CpLambdaPlot->setGeometry(QRect(460, 330, 400, 300));
        CpLambdaPlot->setMinimumSize(QSize(400, 300));
        CpLambdaPlot->setMaximumSize(QSize(400, 300));
        ruzgarPlot = new QCustomPlot(centralWidget);
        ruzgarPlot->setObjectName(QString::fromUtf8("ruzgarPlot"));
        ruzgarPlot->setEnabled(true);
        ruzgarPlot->setGeometry(QRect(30, 330, 400, 300));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ruzgarPlot->sizePolicy().hasHeightForWidth());
        ruzgarPlot->setSizePolicy(sizePolicy1);
        ruzgarPlot->setMinimumSize(QSize(400, 300));
        ruzgarPlot->setMaximumSize(QSize(400, 300));
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
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(vWindLCD->sizePolicy().hasHeightForWidth());
        vWindLCD->setSizePolicy(sizePolicy2);
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
        ElectricityParamLabel->setGeometry(QRect(950, 0, 161, 21));
        ElectricityParamLabel->setFont(font);
        lambdaEdit = new QLineEdit(centralWidget);
        lambdaEdit->setObjectName(QString::fromUtf8("lambdaEdit"));
        lambdaEdit->setGeometry(QRect(560, 30, 171, 20));
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
        turbineParamLabel->setGeometry(QRect(540, 0, 161, 21));
        turbineParamLabel->setFont(font);
        lambdaGraphLabel = new QLabel(centralWidget);
        lambdaGraphLabel->setObjectName(QString::fromUtf8("lambdaGraphLabel"));
        lambdaGraphLabel->setGeometry(QRect(430, 450, 21, 31));
        lambdaGraphLabel->setTextFormat(Qt::RichText);
        CpGraphLabel = new QLabel(centralWidget);
        CpGraphLabel->setObjectName(QString::fromUtf8("CpGraphLabel"));
        CpGraphLabel->setGeometry(QRect(430, 420, 21, 31));
        CpGraphLabel->setTextFormat(Qt::RichText);
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setEnabled(false);
        startButton->setGeometry(QRect(300, 140, 151, 61));
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
        lambdaLabel->setGeometry(QRect(530, 30, 16, 26));
        rLabel = new QLabel(centralWidget);
        rLabel->setObjectName(QString::fromUtf8("rLabel"));
        rLabel->setGeometry(QRect(530, 90, 21, 26));
        rLabel->setFrameShape(QFrame::WinPanel);
        rLabel->setLineWidth(2);
        WmLabel = new QLabel(centralWidget);
        WmLabel->setObjectName(QString::fromUtf8("WmLabel"));
        WmLabel->setGeometry(QRect(530, 120, 21, 26));
        PmLabel = new QLabel(centralWidget);
        PmLabel->setObjectName(QString::fromUtf8("PmLabel"));
        PmLabel->setGeometry(QRect(530, 240, 20, 26));
        TmLabel = new QLabel(centralWidget);
        TmLabel->setObjectName(QString::fromUtf8("TmLabel"));
        TmLabel->setGeometry(QRect(920, 40, 21, 26));
        CpLabel = new QLabel(centralWidget);
        CpLabel->setObjectName(QString::fromUtf8("CpLabel"));
        CpLabel->setGeometry(QRect(530, 180, 16, 26));
        betaLabel = new QLabel(centralWidget);
        betaLabel->setObjectName(QString::fromUtf8("betaLabel"));
        betaLabel->setGeometry(QRect(530, 210, 16, 26));
        nLabel = new QLabel(centralWidget);
        nLabel->setObjectName(QString::fromUtf8("nLabel"));
        nLabel->setGeometry(QRect(530, 150, 16, 26));
        rEdit = new QLineEdit(centralWidget);
        rEdit->setObjectName(QString::fromUtf8("rEdit"));
        rEdit->setGeometry(QRect(560, 90, 171, 20));
        WmEdit = new QLineEdit(centralWidget);
        WmEdit->setObjectName(QString::fromUtf8("WmEdit"));
        WmEdit->setGeometry(QRect(560, 120, 171, 20));
        PmEdit = new QLineEdit(centralWidget);
        PmEdit->setObjectName(QString::fromUtf8("PmEdit"));
        PmEdit->setGeometry(QRect(560, 240, 171, 20));
        PmEdit->setMaxLength(999999999);
        TmEdit = new QLineEdit(centralWidget);
        TmEdit->setObjectName(QString::fromUtf8("TmEdit"));
        TmEdit->setGeometry(QRect(950, 40, 171, 20));
        TmEdit->setMaxLength(999999999);
        CpEdit = new QLineEdit(centralWidget);
        CpEdit->setObjectName(QString::fromUtf8("CpEdit"));
        CpEdit->setGeometry(QRect(560, 180, 171, 20));
        betaEdit = new QLineEdit(centralWidget);
        betaEdit->setObjectName(QString::fromUtf8("betaEdit"));
        betaEdit->setGeometry(QRect(560, 210, 171, 20));
        nEdit = new QLineEdit(centralWidget);
        nEdit->setObjectName(QString::fromUtf8("nEdit"));
        nEdit->setGeometry(QRect(560, 150, 171, 20));
        vWindGraphLabel = new QLabel(centralWidget);
        vWindGraphLabel->setObjectName(QString::fromUtf8("vWindGraphLabel"));
        vWindGraphLabel->setGeometry(QRect(0, 460, 31, 41));
        vWindGraphLabel->setTextFormat(Qt::RichText);
        timeGraphLabel = new QLabel(centralWidget);
        timeGraphLabel->setObjectName(QString::fromUtf8("timeGraphLabel"));
        timeGraphLabel->setGeometry(QRect(180, 630, 16, 31));
        timeGraphLabel->setTextFormat(Qt::RichText);
        helpButton = new QPushButton(centralWidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(1220, 10, 41, 41));
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
        PmGraphLabel = new QLabel(centralWidget);
        PmGraphLabel->setObjectName(QString::fromUtf8("PmGraphLabel"));
        PmGraphLabel->setGeometry(QRect(860, 450, 41, 31));
        PmGraphLabel->setTextFormat(Qt::RichText);
        timeGraphLabel3 = new QLabel(centralWidget);
        timeGraphLabel3->setObjectName(QString::fromUtf8("timeGraphLabel3"));
        timeGraphLabel3->setGeometry(QRect(1050, 630, 51, 31));
        timeGraphLabel3->setTextFormat(Qt::RichText);
        PidealLabel = new QLabel(centralWidget);
        PidealLabel->setObjectName(QString::fromUtf8("PidealLabel"));
        PidealLabel->setGeometry(QRect(530, 270, 16, 26));
        TurbineEfficiencyLabel = new QLabel(centralWidget);
        TurbineEfficiencyLabel->setObjectName(QString::fromUtf8("TurbineEfficiencyLabel"));
        TurbineEfficiencyLabel->setGeometry(QRect(840, 200, 121, 71));
        turbineEffLcd = new QLCDNumber(centralWidget);
        turbineEffLcd->setObjectName(QString::fromUtf8("turbineEffLcd"));
        turbineEffLcd->setGeometry(QRect(960, 200, 211, 71));
        sizePolicy2.setHeightForWidth(turbineEffLcd->sizePolicy().hasHeightForWidth());
        turbineEffLcd->setSizePolicy(sizePolicy2);
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
        PidealEdit->setGeometry(QRect(560, 270, 171, 20));
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
        timeGraphLabel2 = new QLabel(centralWidget);
        timeGraphLabel2->setObjectName(QString::fromUtf8("timeGraphLabel2"));
        timeGraphLabel2->setGeometry(QRect(590, 630, 51, 31));
        timeGraphLabel2->setTextFormat(Qt::RichText);
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
        mLabel->setGeometry(QRect(740, 90, 16, 26));
        rad_snLabel = new QLabel(centralWidget);
        rad_snLabel->setObjectName(QString::fromUtf8("rad_snLabel"));
        rad_snLabel->setGeometry(QRect(740, 120, 31, 26));
        kWattLabel = new QLabel(centralWidget);
        kWattLabel->setObjectName(QString::fromUtf8("kWattLabel"));
        kWattLabel->setGeometry(QRect(740, 240, 41, 26));
        torkLabel = new QLabel(centralWidget);
        torkLabel->setObjectName(QString::fromUtf8("torkLabel"));
        torkLabel->setGeometry(QRect(1130, 40, 41, 26));
        kWattLabel_2 = new QLabel(centralWidget);
        kWattLabel_2->setObjectName(QString::fromUtf8("kWattLabel_2"));
        kWattLabel_2->setGeometry(QRect(740, 270, 41, 26));
        degreeLabel = new QLabel(centralWidget);
        degreeLabel->setObjectName(QString::fromUtf8("degreeLabel"));
        degreeLabel->setGeometry(QRect(740, 210, 16, 26));
        snLabel = new QLabel(centralWidget);
        snLabel->setObjectName(QString::fromUtf8("snLabel"));
        snLabel->setGeometry(QRect(410, 90, 16, 26));
        PtLabel = new QLabel(centralWidget);
        PtLabel->setObjectName(QString::fromUtf8("PtLabel"));
        PtLabel->setGeometry(QRect(920, 70, 21, 26));
        PtEdit = new QLineEdit(centralWidget);
        PtEdit->setObjectName(QString::fromUtf8("PtEdit"));
        PtEdit->setGeometry(QRect(950, 70, 171, 20));
        PtEdit->setMaxLength(999999999);
        nmEdit = new QLineEdit(centralWidget);
        nmEdit->setObjectName(QString::fromUtf8("nmEdit"));
        nmEdit->setGeometry(QRect(950, 100, 171, 20));
        nmEdit->setMaxLength(999999999);
        ngEdit = new QLineEdit(centralWidget);
        ngEdit->setObjectName(QString::fromUtf8("ngEdit"));
        ngEdit->setGeometry(QRect(950, 130, 171, 20));
        ngEdit->setMaxLength(999999999);
        PeEdit = new QLineEdit(centralWidget);
        PeEdit->setObjectName(QString::fromUtf8("PeEdit"));
        PeEdit->setGeometry(QRect(950, 160, 171, 20));
        PeEdit->setMaxLength(999999999);
        nmLabel = new QLabel(centralWidget);
        nmLabel->setObjectName(QString::fromUtf8("nmLabel"));
        nmLabel->setGeometry(QRect(920, 100, 21, 26));
        nmLabel->setFrameShape(QFrame::WinPanel);
        nmLabel->setLineWidth(2);
        ngLabel = new QLabel(centralWidget);
        ngLabel->setObjectName(QString::fromUtf8("ngLabel"));
        ngLabel->setGeometry(QRect(920, 130, 21, 26));
        PeLabel = new QLabel(centralWidget);
        PeLabel->setObjectName(QString::fromUtf8("PeLabel"));
        PeLabel->setGeometry(QRect(920, 160, 21, 26));
        kWattLabel_3 = new QLabel(centralWidget);
        kWattLabel_3->setObjectName(QString::fromUtf8("kWattLabel_3"));
        kWattLabel_3->setGeometry(QRect(1130, 160, 41, 26));
        kWattLabel_4 = new QLabel(centralWidget);
        kWattLabel_4->setObjectName(QString::fromUtf8("kWattLabel_4"));
        kWattLabel_4->setGeometry(QRect(1130, 70, 41, 26));
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setEnabled(false);
        saveButton->setGeometry(QRect(300, 220, 151, 61));
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
        disliLabel->setGeometry(QRect(1130, 100, 61, 26));
        turbinAcceEdit = new QLineEdit(centralWidget);
        turbinAcceEdit->setObjectName(QString::fromUtf8("turbinAcceEdit"));
        turbinAcceEdit->setGeometry(QRect(560, 60, 171, 20));
        turbinAcceLabel = new QLabel(centralWidget);
        turbinAcceLabel->setObjectName(QString::fromUtf8("turbinAcceLabel"));
        turbinAcceLabel->setGeometry(QRect(530, 60, 21, 26));
        turbinAcceLabel->setFrameShape(QFrame::WinPanel);
        turbinAcceLabel->setLineWidth(2);
        m_sn2Label = new QLabel(centralWidget);
        m_sn2Label->setObjectName(QString::fromUtf8("m_sn2Label"));
        m_sn2Label->setGeometry(QRect(740, 60, 41, 26));
        rpmLabel = new QLabel(centralWidget);
        rpmLabel->setObjectName(QString::fromUtf8("rpmLabel"));
        rpmLabel->setGeometry(QRect(740, 150, 31, 26));
        ruzgarComboBox = new QComboBox(centralWidget);
        ruzgarComboBox->setObjectName(QString::fromUtf8("ruzgarComboBox"));
        ruzgarComboBox->setGeometry(QRect(50, 40, 151, 22));
        vTypeLabel = new QLabel(centralWidget);
        vTypeLabel->setObjectName(QString::fromUtf8("vTypeLabel"));
        vTypeLabel->setGeometry(QRect(0, 40, 41, 25));
        vTypeLabel->setFrameShape(QFrame::WinPanel);
        vTypeLabel->setLineWidth(2);
        testBitirmeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testBitirmeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1300, 21));
        testBitirmeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testBitirmeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testBitirmeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testBitirmeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testBitirmeClass->setStatusBar(statusBar);

        retranslateUi(testBitirmeClass);

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
        lambdaGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; color:#00aa00; background-color:#ffffff;\">\316\273</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CpGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; color:#aa0000; background-color:#ffffff;\">Cp</span></p></body></html>", 0, QApplication::UnicodeUTF8));
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
        vWindGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p>vWind</p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        helpButton->setText(QString());
        PmGraphLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; color:#252525; background-color:#ffffff;\">Pmax</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        timeGraphLabel3->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
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
        timeGraphLabel2->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" font-family:'sans-serif'; font-size:12pt; color:#252525; background-color:#ffffff;\">t</span></p></body></html>", 0, QApplication::UnicodeUTF8));
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
        ngLabel->setText(QApplication::translate("testBitirmeClass", "ng", 0, QApplication::UnicodeUTF8));
        PeLabel->setText(QApplication::translate("testBitirmeClass", "Pe", 0, QApplication::UnicodeUTF8));
        kWattLabel_3->setText(QApplication::translate("testBitirmeClass", "kWatt", 0, QApplication::UnicodeUTF8));
        kWattLabel_4->setText(QApplication::translate("testBitirmeClass", "kWatt", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("testBitirmeClass", "Save Datas", 0, QApplication::UnicodeUTF8));
        disliLabel->setText(QApplication::translate("testBitirmeClass", "(Di\305\237li Verimi)", 0, QApplication::UnicodeUTF8));
        turbinAcceLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">ta</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        m_sn2Label->setText(QApplication::translate("testBitirmeClass", "m/sn^2", 0, QApplication::UnicodeUTF8));
        rpmLabel->setText(QApplication::translate("testBitirmeClass", "RPM", 0, QApplication::UnicodeUTF8));
        ruzgarComboBox->clear();
        ruzgarComboBox->insertItems(0, QStringList()
         << QApplication::translate("testBitirmeClass", "Sin\303\274soidal R\303\274zgar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testBitirmeClass", "De\304\237i\305\237ken R\303\274zgar", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("testBitirmeClass", "Sabit H\304\261zl\304\261 R\303\274zgar", 0, QApplication::UnicodeUTF8)
        );
        vTypeLabel->setText(QApplication::translate("testBitirmeClass", "<html><head/><body><p><span style=\" color:#aa0000;\">V Type</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testBitirmeClass: public Ui_testBitirmeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBITIRME_H
