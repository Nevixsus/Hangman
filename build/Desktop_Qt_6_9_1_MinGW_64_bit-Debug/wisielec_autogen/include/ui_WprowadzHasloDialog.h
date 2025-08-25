/********************************************************************************
** Form generated from reading UI file 'WprowadzHasloDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPROWADZHASLODIALOG_H
#define UI_WPROWADZHASLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_2;
    QTextBrowser *textBrowser_3;
    QLabel *label;
    QLabel *labelTlo;
    QLineEdit *lineEditHaslo;
    QTextBrowser *textBrowser_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayoutKategorie;
    QGridLayout *gridKategorie;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QTextBrowser *textBrowser;
    QLineEdit *lineEditKategoria;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(800, 601);
        Dialog->setMaximumSize(QSize(800, 601));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 500, 171, 31));
        QFont font;
        font.setPointSize(18);
        label_2->setFont(font);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        textBrowser_3 = new QTextBrowser(Dialog);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setEnabled(true);
        textBrowser_3->setGeometry(QRect(0, 390, 801, 61));
        textBrowser_3->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        textBrowser_3->setAutoFillBackground(true);
        textBrowser_3->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
""));
        textBrowser_3->setFrameShape(QFrame::Shape::NoFrame);
        textBrowser_3->setFrameShadow(QFrame::Shadow::Plain);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 460, 251, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: white;"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        labelTlo = new QLabel(Dialog);
        labelTlo->setObjectName("labelTlo");
        labelTlo->setGeometry(QRect(0, 0, 801, 601));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelTlo->sizePolicy().hasHeightForWidth());
        labelTlo->setSizePolicy(sizePolicy);
        labelTlo->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        labelTlo->setPixmap(QPixmap(QString::fromUtf8(":/images/images/tlo.jpg")));
        labelTlo->setScaledContents(true);
        labelTlo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEditHaslo = new QLineEdit(Dialog);
        lineEditHaslo->setObjectName("lineEditHaslo");
        lineEditHaslo->setGeometry(QRect(330, 500, 171, 31));
        textBrowser_2 = new QTextBrowser(Dialog);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setEnabled(true);
        textBrowser_2->setGeometry(QRect(0, 190, 801, 61));
        textBrowser_2->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        textBrowser_2->setAutoFillBackground(true);
        textBrowser_2->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
""));
        textBrowser_2->setFrameShape(QFrame::Shape::NoFrame);
        textBrowser_2->setFrameShadow(QFrame::Shadow::Plain);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(80, 260, 651, 105));
        verticalLayoutKategorie = new QVBoxLayout(verticalLayoutWidget);
        verticalLayoutKategorie->setObjectName("verticalLayoutKategorie");
        verticalLayoutKategorie->setContentsMargins(0, 0, 0, 0);
        gridKategorie = new QGridLayout();
        gridKategorie->setObjectName("gridKategorie");
        gridKategorie->setHorizontalSpacing(49);
        gridKategorie->setVerticalSpacing(29);
        gridKategorie->setContentsMargins(0, -1, -1, -1);
        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(0, 36));

        gridKategorie->addWidget(pushButton_7, 1, 2, 1, 1);


        verticalLayoutKategorie->addLayout(gridKategorie);

        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(0, 80, 801, 101));
        textBrowser->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        textBrowser->setAutoFillBackground(true);
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser {\n"
"    background: transparent;\n"
"    border: none;\n"
"}\n"
""));
        textBrowser->setFrameShape(QFrame::Shape::NoFrame);
        textBrowser->setFrameShadow(QFrame::Shadow::Plain);
        lineEditKategoria = new QLineEdit(Dialog);
        lineEditKategoria->setObjectName("lineEditKategoria");
        lineEditKategoria->setGeometry(QRect(330, 460, 171, 31));
        labelTlo->raise();
        lineEditHaslo->raise();
        textBrowser_2->raise();
        verticalLayoutWidget->raise();
        textBrowser->raise();
        lineEditKategoria->raise();
        textBrowser_3->raise();
        label->raise();
        label_2->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Wpisz has\305\202o: ", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:700; text-decoration: underline; color:#f28100;\">1 vs 1</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Wprowadz Kategorie:", nullptr));
        labelTlo->setText(QString());
        textBrowser_2->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:700; text-decoration: underline; color:#f28100;\">1 vs PC</span></p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Sporty", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Kraje \305\232wiata", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Filmy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Stolice", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "Marki Aut", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Zwierz\304\231ta", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "Zawody", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "Jedzenie", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">H</span><span style=\" font-size:48pt; font-weight:700;\"> </span><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">a</span><span style=\" font-size:48pt; font-weight:700;\"> </span><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">n</span><span style=\""
                        " font-size:48pt; font-weight:700;\"> </span><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">g</span><span style=\" font-size:48pt; font-weight:700;\"> </span><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">m</span><span style=\" font-size:48pt; font-weight:700;\"> </span><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">a</span><span style=\" font-size:48pt; font-weight:700;\"> </span><span style=\" font-size:48pt; font-weight:700; text-decoration: underline;\">n</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPROWADZHASLODIALOG_H
