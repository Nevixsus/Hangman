/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelTlo;
    QLineEdit *lineEditLitera;
    QLabel *labelKatgoria;
    QLabel *labelObrazWisielca;
    QLabel *labelObraz;
    QLabel *labelOdgadnieteSlowo;
    QLabel *labelStanGry;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 601);
        MainWindow->setMaximumSize(QSize(800, 601));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        labelTlo = new QLabel(centralwidget);
        labelTlo->setObjectName("labelTlo");
        labelTlo->setGeometry(QRect(0, 0, 801, 601));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelTlo->sizePolicy().hasHeightForWidth());
        labelTlo->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        labelTlo->setFont(font);
        labelTlo->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        labelTlo->setTextFormat(Qt::TextFormat::PlainText);
        labelTlo->setPixmap(QPixmap(QString::fromUtf8(":/images/images/tlo.jpg")));
        labelTlo->setScaledContents(true);
        labelTlo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEditLitera = new QLineEdit(centralwidget);
        lineEditLitera->setObjectName("lineEditLitera");
        lineEditLitera->setGeometry(QRect(650, 440, 81, 71));
        lineEditLitera->setMaximumSize(QSize(610, 440));
        lineEditLitera->setSizeIncrement(QSize(1, 0));
        QFont font1;
        font1.setPointSize(30);
        font1.setStyleStrategy(QFont::NoAntialias);
        lineEditLitera->setFont(font1);
        lineEditLitera->setInputMethodHints(Qt::InputMethodHint::ImhPreferUppercase);
        lineEditLitera->setMaxLength(1);
        labelKatgoria = new QLabel(centralwidget);
        labelKatgoria->setObjectName("labelKatgoria");
        labelKatgoria->setGeometry(QRect(50, 30, 311, 41));
        QFont font2;
        font2.setPointSize(19);
        font2.setUnderline(true);
        labelKatgoria->setFont(font2);
        labelObrazWisielca = new QLabel(centralwidget);
        labelObrazWisielca->setObjectName("labelObrazWisielca");
        labelObrazWisielca->setGeometry(QRect(380, 30, 381, 51));
        QFont font3;
        font3.setPointSize(22);
        font3.setItalic(true);
        labelObrazWisielca->setFont(font3);
        labelObraz = new QLabel(centralwidget);
        labelObraz->setObjectName("labelObraz");
        labelObraz->setGeometry(QRect(310, 120, 441, 251));
        labelObraz->setPixmap(QPixmap(QString::fromUtf8(":/images/images/s0.jpg")));
        labelOdgadnieteSlowo = new QLabel(centralwidget);
        labelOdgadnieteSlowo->setObjectName("labelOdgadnieteSlowo");
        labelOdgadnieteSlowo->setGeometry(QRect(20, 430, 551, 81));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        labelOdgadnieteSlowo->setFont(font4);
        labelOdgadnieteSlowo->setStyleSheet(QString::fromUtf8("color: white;"));
        labelStanGry = new QLabel(centralwidget);
        labelStanGry->setObjectName("labelStanGry");
        labelStanGry->setGeometry(QRect(20, 220, 271, 141));
        QFont font5;
        font5.setPointSize(18);
        labelStanGry->setFont(font5);
        labelStanGry->setStyleSheet(QString::fromUtf8("color: white;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelTlo->setText(QString());
        labelKatgoria->setText(QString());
        labelObrazWisielca->setText(QString());
        labelObraz->setText(QString());
        labelOdgadnieteSlowo->setText(QString());
        labelStanGry->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
