/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *display_username;
    QLabel *display;
    QFrame *frame;
    QPushButton *home;
    QPushButton *search;
    QPushButton *cloud;
    QPushButton *notification;
    QPushButton *user;
    QPushButton *next_pic;
    QPushButton *prev_pic;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(1070, 715);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomePage->sizePolicy().hasHeightForWidth());
        HomePage->setSizePolicy(sizePolicy);
        HomePage->setMinimumSize(QSize(1070, 715));
        HomePage->setMaximumSize(QSize(1070, 800));
        HomePage->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgb(236, 240, 241);\n"
"}"));
        label = new QLabel(HomePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 2001, 131));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(255,0,54);\n"
"}"));
        label_2 = new QLabel(HomePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 151, 131));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{border-image: url(:/Final_Logo.png);\n"
"}"));
        display_username = new QLabel(HomePage);
        display_username->setObjectName(QString::fromUtf8("display_username"));
        display_username->setGeometry(QRect(170, 180, 141, 31));
        display_username->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 18pt \"Ubuntu\";\n"
"}"));
        display = new QLabel(HomePage);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(170, 230, 551, 331));
        display->setStyleSheet(QString::fromUtf8("QLabel{\n"
"}"));
        frame = new QFrame(HomePage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 640, 2001, 81));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: rgb(50,50,50);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        home = new QPushButton(frame);
        home->setObjectName(QString::fromUtf8("home"));
        home->setGeometry(QRect(190, 10, 61, 61));
        home->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/home.png);\n"
"border-radius:10px;\n"
"min-height:20px;\n"
"min-width:20px;\n"
"}"));
        search = new QPushButton(frame);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(340, 16, 41, 51));
        search->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/search.png);\n"
"border-radius:10px;\n"
"min-height:20px;\n"
"min-width:20px;\n"
"}"));
        cloud = new QPushButton(frame);
        cloud->setObjectName(QString::fromUtf8("cloud"));
        cloud->setGeometry(QRect(480, 10, 61, 61));
        cloud->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:10px;\n"
"	border-image: url(:/cloud-computing.png);\n"
"min-height:20px;\n"
"min-width:20px;\n"
"}"));
        notification = new QPushButton(frame);
        notification->setObjectName(QString::fromUtf8("notification"));
        notification->setGeometry(QRect(640, 16, 51, 51));
        notification->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/notification.png);\n"
"border-radius:10px;\n"
"min-height:20px;\n"
"min-width:20px;\n"
"}"));
        user = new QPushButton(frame);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(770, 14, 61, 51));
        user->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/man-user.png);\n"
"border-radius:10px;\n"
"min-height:20px;\n"
"min-width:20px;\n"
"}"));
        next_pic = new QPushButton(HomePage);
        next_pic->setObjectName(QString::fromUtf8("next_pic"));
        next_pic->setGeometry(QRect(980, 440, 61, 71));
        next_pic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/down-arrow.png);\n"
"}"));
        prev_pic = new QPushButton(HomePage);
        prev_pic->setObjectName(QString::fromUtf8("prev_pic"));
        prev_pic->setEnabled(true);
        prev_pic->setGeometry(QRect(978, 310, 61, 71));
        prev_pic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/up-arrow.png);\n"
"}"));
        frame->raise();
        label->raise();
        label_2->raise();
        display_username->raise();
        display->raise();
        next_pic->raise();
        prev_pic->raise();

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("HomePage", "Home", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        display_username->setText(QApplication::translate("HomePage", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Username</span></p></body></html>", nullptr));
        display->setText(QApplication::translate("HomePage", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        home->setText(QString());
        search->setText(QString());
        cloud->setText(QString());
        notification->setText(QString());
        user->setText(QString());
        next_pic->setText(QString());
        prev_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H