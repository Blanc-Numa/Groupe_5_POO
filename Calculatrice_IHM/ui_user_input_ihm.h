/********************************************************************************
** Form generated from reading UI file 'user_input_ihm.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INPUT_IHM_H
#define UI_USER_INPUT_IHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInputWindow
{
public:
    QPushButton *ButtonCarre;
    QPushButton *ButtonOppose;
    QPushButton *ButtonRacine;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *ButtonAC;
    QPushButton *Button6;
    QPushButton *Button7;
    QPushButton *ButtonLogNeperien;
    QPushButton *ButtonAbsolue;
    QPushButton *Button4;
    QPushButton *Button3;
    QPushButton *Button1;
    QPushButton *Button0;
    QPushButton *Button9;
    QPushButton *ButtonInverse;
    QPushButton *ButtonVirgule;
    QPushButton *ButtonPuissance;
    QPushButton *ButtonMult;
    QPushButton *ButtonMinus;
    QPushButton *ButtonAdd;
    QLineEdit *Display;
    QPushButton *ButtonEquals;
    QPushButton *ButtonDiv;

    void setupUi(QWidget *UserInputWindow)
    {
        if (UserInputWindow->objectName().isEmpty())
            UserInputWindow->setObjectName(QString::fromUtf8("UserInputWindow"));
        UserInputWindow->resize(369, 446);
        QPalette palette;
        UserInputWindow->setPalette(palette);
        ButtonCarre = new QPushButton(UserInputWindow);
        ButtonCarre->setObjectName(QString::fromUtf8("ButtonCarre"));
        ButtonCarre->setGeometry(QRect(10, 180, 71, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonCarre->sizePolicy().hasHeightForWidth());
        ButtonCarre->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(11);
        font.setBold(true);
        ButtonCarre->setFont(font);
        ButtonCarre->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #808BDB;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        ButtonOppose = new QPushButton(UserInputWindow);
        ButtonOppose->setObjectName(QString::fromUtf8("ButtonOppose"));
        ButtonOppose->setGeometry(QRect(10, 400, 71, 31));
        sizePolicy.setHeightForWidth(ButtonOppose->sizePolicy().hasHeightForWidth());
        ButtonOppose->setSizePolicy(sizePolicy);
        ButtonOppose->setFont(font);
        ButtonOppose->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #808BDB;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        ButtonRacine = new QPushButton(UserInputWindow);
        ButtonRacine->setObjectName(QString::fromUtf8("ButtonRacine"));
        ButtonRacine->setGeometry(QRect(100, 240, 71, 31));
        sizePolicy.setHeightForWidth(ButtonRacine->sizePolicy().hasHeightForWidth());
        ButtonRacine->setSizePolicy(sizePolicy);
        ButtonRacine->setFont(font);
        ButtonRacine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #808BDB;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        Button8 = new QPushButton(UserInputWindow);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(100, 280, 71, 31));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(192, 192, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Button8->setPalette(palette1);
        Button8->setFont(font);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button5 = new QPushButton(UserInputWindow);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(100, 320, 71, 31));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button2 = new QPushButton(UserInputWindow);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(100, 360, 71, 31));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ButtonAC = new QPushButton(UserInputWindow);
        ButtonAC->setObjectName(QString::fromUtf8("ButtonAC"));
        ButtonAC->setGeometry(QRect(280, 180, 71, 41));
        sizePolicy.setHeightForWidth(ButtonAC->sizePolicy().hasHeightForWidth());
        ButtonAC->setSizePolicy(sizePolicy);
        QPalette palette2;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush5(QColor(170, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(255, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(212, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(85, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(113, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        QBrush brush10(QColor(212, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        QBrush brush12(QColor(227, 227, 227, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        QBrush brush13(QColor(160, 160, 160, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush14(QColor(105, 105, 105, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        QBrush brush15(QColor(245, 245, 245, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        ButtonAC->setPalette(palette2);
        ButtonAC->setFont(font);
        ButtonAC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button6 = new QPushButton(UserInputWindow);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(190, 320, 71, 31));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button7 = new QPushButton(UserInputWindow);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(10, 280, 71, 31));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ButtonLogNeperien = new QPushButton(UserInputWindow);
        ButtonLogNeperien->setObjectName(QString::fromUtf8("ButtonLogNeperien"));
        ButtonLogNeperien->setGeometry(QRect(10, 240, 71, 31));
        sizePolicy.setHeightForWidth(ButtonLogNeperien->sizePolicy().hasHeightForWidth());
        ButtonLogNeperien->setSizePolicy(sizePolicy);
        ButtonLogNeperien->setFont(font);
        ButtonLogNeperien->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #808BDB;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        ButtonAbsolue = new QPushButton(UserInputWindow);
        ButtonAbsolue->setObjectName(QString::fromUtf8("ButtonAbsolue"));
        ButtonAbsolue->setGeometry(QRect(190, 240, 71, 31));
        sizePolicy.setHeightForWidth(ButtonAbsolue->sizePolicy().hasHeightForWidth());
        ButtonAbsolue->setSizePolicy(sizePolicy);
        ButtonAbsolue->setFont(font);
        ButtonAbsolue->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #808BDB;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        Button4 = new QPushButton(UserInputWindow);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(10, 320, 71, 31));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button3 = new QPushButton(UserInputWindow);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(190, 360, 71, 31));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button1 = new QPushButton(UserInputWindow);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(10, 360, 71, 31));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button0 = new QPushButton(UserInputWindow);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(100, 400, 71, 31));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button9 = new QPushButton(UserInputWindow);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(190, 280, 71, 31));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ButtonInverse = new QPushButton(UserInputWindow);
        ButtonInverse->setObjectName(QString::fromUtf8("ButtonInverse"));
        ButtonInverse->setGeometry(QRect(100, 180, 71, 41));
        sizePolicy.setHeightForWidth(ButtonInverse->sizePolicy().hasHeightForWidth());
        ButtonInverse->setSizePolicy(sizePolicy);
        ButtonInverse->setFont(font);
        ButtonInverse->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #808BDB;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        ButtonVirgule = new QPushButton(UserInputWindow);
        ButtonVirgule->setObjectName(QString::fromUtf8("ButtonVirgule"));
        ButtonVirgule->setGeometry(QRect(190, 400, 71, 31));
        sizePolicy.setHeightForWidth(ButtonVirgule->sizePolicy().hasHeightForWidth());
        ButtonVirgule->setSizePolicy(sizePolicy);
        ButtonVirgule->setFont(font);
        ButtonVirgule->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ButtonPuissance = new QPushButton(UserInputWindow);
        ButtonPuissance->setObjectName(QString::fromUtf8("ButtonPuissance"));
        ButtonPuissance->setGeometry(QRect(190, 180, 71, 41));
        sizePolicy.setHeightForWidth(ButtonPuissance->sizePolicy().hasHeightForWidth());
        ButtonPuissance->setSizePolicy(sizePolicy);
        ButtonPuissance->setFont(font);
        ButtonPuissance->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #808BDB;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid grey;\n"
"	padding: 5px;\n"
"}"));
        ButtonMult = new QPushButton(UserInputWindow);
        ButtonMult->setObjectName(QString::fromUtf8("ButtonMult"));
        ButtonMult->setGeometry(QRect(280, 360, 71, 31));
        sizePolicy.setHeightForWidth(ButtonMult->sizePolicy().hasHeightForWidth());
        ButtonMult->setSizePolicy(sizePolicy);
        ButtonMult->setFont(font);
        ButtonMult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ButtonMinus = new QPushButton(UserInputWindow);
        ButtonMinus->setObjectName(QString::fromUtf8("ButtonMinus"));
        ButtonMinus->setGeometry(QRect(280, 280, 71, 31));
        sizePolicy.setHeightForWidth(ButtonMinus->sizePolicy().hasHeightForWidth());
        ButtonMinus->setSizePolicy(sizePolicy);
        ButtonMinus->setFont(font);
        ButtonMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ButtonAdd = new QPushButton(UserInputWindow);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));
        ButtonAdd->setGeometry(QRect(280, 320, 71, 31));
        sizePolicy.setHeightForWidth(ButtonAdd->sizePolicy().hasHeightForWidth());
        ButtonAdd->setSizePolicy(sizePolicy);
        ButtonAdd->setFont(font);
        ButtonAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Display = new QLineEdit(UserInputWindow);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(9, 9, 351, 146));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        Display->setMinimumSize(QSize(0, 146));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        QBrush brush16(QColor(217, 253, 255, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush17(QColor(236, 254, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush17);
        QBrush brush18(QColor(108, 126, 127, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush18);
        QBrush brush19(QColor(145, 169, 170, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        Display->setPalette(palette3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Open Sans"));
        font1.setPointSize(22);
        font1.setBold(true);
        Display->setFont(font1);
        Display->setCursor(QCursor(Qt::ArrowCursor));
        Display->setFocusPolicy(Qt::StrongFocus);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border : 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ButtonEquals = new QPushButton(UserInputWindow);
        ButtonEquals->setObjectName(QString::fromUtf8("ButtonEquals"));
        ButtonEquals->setGeometry(QRect(280, 400, 71, 31));
        sizePolicy.setHeightForWidth(ButtonEquals->sizePolicy().hasHeightForWidth());
        ButtonEquals->setSizePolicy(sizePolicy);
        ButtonEquals->setFont(font);
        ButtonEquals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        ButtonDiv = new QPushButton(UserInputWindow);
        ButtonDiv->setObjectName(QString::fromUtf8("ButtonDiv"));
        ButtonDiv->setGeometry(QRect(280, 240, 71, 31));
        sizePolicy.setHeightForWidth(ButtonDiv->sizePolicy().hasHeightForWidth());
        ButtonDiv->setSizePolicy(sizePolicy);
        ButtonDiv->setFont(font);
        ButtonDiv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        retranslateUi(UserInputWindow);

        QMetaObject::connectSlotsByName(UserInputWindow);
    } // setupUi

    void retranslateUi(QWidget *UserInputWindow)
    {
        ButtonCarre->setText(QCoreApplication::translate("UserInputWindow", "x\302\262", nullptr));
        ButtonOppose->setText(QCoreApplication::translate("UserInputWindow", "(-/+)", nullptr));
        ButtonRacine->setText(QCoreApplication::translate("UserInputWindow", "\342\210\232x", nullptr));
        Button8->setText(QCoreApplication::translate("UserInputWindow", "8", nullptr));
        Button5->setText(QCoreApplication::translate("UserInputWindow", "5", nullptr));
        Button2->setText(QCoreApplication::translate("UserInputWindow", "2", nullptr));
        ButtonAC->setText(QCoreApplication::translate("UserInputWindow", "AC", nullptr));
        Button6->setText(QCoreApplication::translate("UserInputWindow", "6", nullptr));
        Button7->setText(QCoreApplication::translate("UserInputWindow", "7", nullptr));
        ButtonLogNeperien->setText(QCoreApplication::translate("UserInputWindow", "Ln", nullptr));
        ButtonAbsolue->setText(QCoreApplication::translate("UserInputWindow", "|x|", nullptr));
        Button4->setText(QCoreApplication::translate("UserInputWindow", "4", nullptr));
        Button3->setText(QCoreApplication::translate("UserInputWindow", "3", nullptr));
        Button1->setText(QCoreApplication::translate("UserInputWindow", "1", nullptr));
        Button0->setText(QCoreApplication::translate("UserInputWindow", "0", nullptr));
        Button9->setText(QCoreApplication::translate("UserInputWindow", "9", nullptr));
        ButtonInverse->setText(QCoreApplication::translate("UserInputWindow", "l/x", nullptr));
        ButtonVirgule->setText(QCoreApplication::translate("UserInputWindow", ",", nullptr));
        ButtonPuissance->setText(QCoreApplication::translate("UserInputWindow", "POW", nullptr));
        ButtonMult->setText(QCoreApplication::translate("UserInputWindow", "*", nullptr));
        ButtonMinus->setText(QCoreApplication::translate("UserInputWindow", "-", nullptr));
        ButtonAdd->setText(QCoreApplication::translate("UserInputWindow", "+", nullptr));
        Display->setText(QString());
        ButtonEquals->setText(QCoreApplication::translate("UserInputWindow", "=", nullptr));
        ButtonDiv->setText(QCoreApplication::translate("UserInputWindow", "/", nullptr));
        (void)UserInputWindow;
    } // retranslateUi

};

namespace Ui {
    class UserInputWindow: public Ui_UserInputWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INPUT_IHM_H
