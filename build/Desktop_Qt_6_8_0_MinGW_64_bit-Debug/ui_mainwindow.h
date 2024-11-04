/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Textlabel;
    QTabWidget *tabWidget;
    QWidget *Vvodtab;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *vvodgridLayout;
    QLabel *electfilelabel;
    QLabel *electchislabel;
    QSpinBox *izdanchisspinBox;
    QPushButton *electfilepushButton;
    QLineEdit *electfilelineEdit;
    QLabel *izdanchislabel;
    QSpinBox *electchisspinBox;
    QLabel *izdanfilelabel;
    QLineEdit *izdanfilelineEdit;
    QPushButton *izdanfilepushButton;
    QPushButton *electformpushButton;
    QGridLayout *electformvvodgridLayout;
    QSpinBox *electformspinBox;
    QLineEdit *electformlineEdit4;
    QLineEdit *electformlineEdit3;
    QLineEdit *electformlineEdit2;
    QLabel *electformvvodlabel;
    QLineEdit *electformlineEdit1;
    QPushButton *electformvvodpushButton;
    QLabel *electformlabel1;
    QLabel *electformlabel2;
    QLabel *electformlabel3;
    QLabel *electformlabel4;
    QLabel *electformlabel5;
    QPushButton *izdanformpushButton;
    QGridLayout *gridLayout;
    QPushButton *izdanformvvodpushButton;
    QLineEdit *izdanformlineEdit1;
    QLineEdit *izdanformlineEdit2;
    QSpinBox *izdanformspinBox;
    QLineEdit *izdanformlineEdit3;
    QLabel *izdanformvvodlabel;
    QLineEdit *izdanformlineEdit4;
    QLabel *izdanformlabel1;
    QLabel *izdanformlabel2;
    QLabel *izdanformlabel3;
    QLabel *izdanformlabel4;
    QLabel *izdanformlabel5;
    QWidget *Sorttab;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *sortgridLayout;
    QLabel *electsortlabel;
    QPushButton *electsortpushButton;
    QComboBox *electsortcomboBox;
    QLabel *izdanlabel;
    QPushButton *izdanpushButton;
    QComboBox *izdansortcomboBox;
    QWidget *Poisktab;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *poiskgridLayout;
    QLabel *poisklabel;
    QPushButton *poiskpushButton;
    QLineEdit *poisklineEdit;
    QTableWidget *poisktableWidget;
    QWidget *Vivodtab;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *udalhorizontalLayout;
    QLabel *udallabel;
    QSpinBox *udalspinBox;
    QPushButton *udalpushButton;
    QHBoxLayout *infohorizontalLayout;
    QLabel *infolabel;
    QSpinBox *infospinBox;
    QPushButton *infopushButton;
    QWidget *Functtab;
    QVBoxLayout *verticalLayout_6;
    QPushButton *maxstranpushButton;
    QLabel *maxstranlabel;
    QPushButton *illustpushButton;
    QLabel *illustlabel;
    QPushButton *raznyazpushButton;
    QLabel *raznyazlabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        MainWindow->setFont(font);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::WeatherClear));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow{\n"
"	background-color: rgb(210, 215, 220);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(9);
        centralwidget->setFont(font1);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Textlabel = new QLabel(centralwidget);
        Textlabel->setObjectName("Textlabel");
        Textlabel->setFont(font1);

        verticalLayout_2->addWidget(Textlabel);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane{\n"
"    border: 1px;\n"
"	background: rgb(175, 200, 220);\n"
"}\n"
"\n"
"QTabBar::tab{\n"
"	background: rgb(80, 155, 255);\n"
"}\n"
"\n"
"QTabBar::tab:selected{\n"
"	background: rgb(175, 200, 220);\n"
"}"));
        Vvodtab = new QWidget();
        Vvodtab->setObjectName("Vvodtab");
        verticalLayout_3 = new QVBoxLayout(Vvodtab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        vvodgridLayout = new QGridLayout();
        vvodgridLayout->setObjectName("vvodgridLayout");
        electfilelabel = new QLabel(Vvodtab);
        electfilelabel->setObjectName("electfilelabel");

        vvodgridLayout->addWidget(electfilelabel, 2, 0, 1, 1);

        electchislabel = new QLabel(Vvodtab);
        electchislabel->setObjectName("electchislabel");

        vvodgridLayout->addWidget(electchislabel, 0, 0, 1, 1);

        izdanchisspinBox = new QSpinBox(Vvodtab);
        izdanchisspinBox->setObjectName("izdanchisspinBox");
        izdanchisspinBox->setStyleSheet(QString::fromUtf8(""));
        izdanchisspinBox->setMinimum(1);
        izdanchisspinBox->setMaximum(1000);

        vvodgridLayout->addWidget(izdanchisspinBox, 1, 1, 1, 1);

        electfilepushButton = new QPushButton(Vvodtab);
        electfilepushButton->setObjectName("electfilepushButton");
        electfilepushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        vvodgridLayout->addWidget(electfilepushButton, 2, 2, 1, 1);

        electfilelineEdit = new QLineEdit(Vvodtab);
        electfilelineEdit->setObjectName("electfilelineEdit");
        electfilelineEdit->setStyleSheet(QString::fromUtf8(""));

        vvodgridLayout->addWidget(electfilelineEdit, 2, 1, 1, 1);

        izdanchislabel = new QLabel(Vvodtab);
        izdanchislabel->setObjectName("izdanchislabel");

        vvodgridLayout->addWidget(izdanchislabel, 1, 0, 1, 1);

        electchisspinBox = new QSpinBox(Vvodtab);
        electchisspinBox->setObjectName("electchisspinBox");
        electchisspinBox->setStyleSheet(QString::fromUtf8(""));
        electchisspinBox->setMinimum(1);
        electchisspinBox->setMaximum(1000);

        vvodgridLayout->addWidget(electchisspinBox, 0, 1, 1, 1);

        izdanfilelabel = new QLabel(Vvodtab);
        izdanfilelabel->setObjectName("izdanfilelabel");

        vvodgridLayout->addWidget(izdanfilelabel, 3, 0, 1, 1);

        izdanfilelineEdit = new QLineEdit(Vvodtab);
        izdanfilelineEdit->setObjectName("izdanfilelineEdit");
        izdanfilelineEdit->setStyleSheet(QString::fromUtf8(""));

        vvodgridLayout->addWidget(izdanfilelineEdit, 3, 1, 1, 1);

        izdanfilepushButton = new QPushButton(Vvodtab);
        izdanfilepushButton->setObjectName("izdanfilepushButton");
        izdanfilepushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        vvodgridLayout->addWidget(izdanfilepushButton, 3, 2, 1, 1);


        verticalLayout_3->addLayout(vvodgridLayout);

        electformpushButton = new QPushButton(Vvodtab);
        electformpushButton->setObjectName("electformpushButton");
        electformpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        verticalLayout_3->addWidget(electformpushButton);

        electformvvodgridLayout = new QGridLayout();
        electformvvodgridLayout->setObjectName("electformvvodgridLayout");
        electformspinBox = new QSpinBox(Vvodtab);
        electformspinBox->setObjectName("electformspinBox");
        electformspinBox->setEnabled(false);
        electformspinBox->setMaximum(100000);
        electformspinBox->setSingleStep(1);

        electformvvodgridLayout->addWidget(electformspinBox, 1, 2, 1, 1);

        electformlineEdit4 = new QLineEdit(Vvodtab);
        electformlineEdit4->setObjectName("electformlineEdit4");
        electformlineEdit4->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlineEdit4, 1, 5, 1, 1);

        electformlineEdit3 = new QLineEdit(Vvodtab);
        electformlineEdit3->setObjectName("electformlineEdit3");
        electformlineEdit3->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlineEdit3, 1, 4, 1, 1);

        electformlineEdit2 = new QLineEdit(Vvodtab);
        electformlineEdit2->setObjectName("electformlineEdit2");
        electformlineEdit2->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlineEdit2, 1, 3, 1, 1);

        electformvvodlabel = new QLabel(Vvodtab);
        electformvvodlabel->setObjectName("electformvvodlabel");
        electformvvodlabel->setEnabled(false);

        electformvvodgridLayout->addWidget(electformvvodlabel, 1, 0, 1, 1);

        electformlineEdit1 = new QLineEdit(Vvodtab);
        electformlineEdit1->setObjectName("electformlineEdit1");
        electformlineEdit1->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlineEdit1, 1, 1, 1, 1);

        electformvvodpushButton = new QPushButton(Vvodtab);
        electformvvodpushButton->setObjectName("electformvvodpushButton");
        electformvvodpushButton->setEnabled(false);
        electformvvodpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        electformvvodgridLayout->addWidget(electformvvodpushButton, 1, 6, 1, 1);

        electformlabel1 = new QLabel(Vvodtab);
        electformlabel1->setObjectName("electformlabel1");
        electformlabel1->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlabel1, 0, 1, 1, 1);

        electformlabel2 = new QLabel(Vvodtab);
        electformlabel2->setObjectName("electformlabel2");
        electformlabel2->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlabel2, 0, 2, 1, 1);

        electformlabel3 = new QLabel(Vvodtab);
        electformlabel3->setObjectName("electformlabel3");
        electformlabel3->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlabel3, 0, 3, 1, 1);

        electformlabel4 = new QLabel(Vvodtab);
        electformlabel4->setObjectName("electformlabel4");
        electformlabel4->setEnabled(false);

        electformvvodgridLayout->addWidget(electformlabel4, 0, 4, 1, 1);

        electformlabel5 = new QLabel(Vvodtab);
        electformlabel5->setObjectName("electformlabel5");
        electformlabel5->setEnabled(false);
        electformlabel5->setMinimumSize(QSize(0, 35));
        electformlabel5->setMaximumSize(QSize(16777215, 35));

        electformvvodgridLayout->addWidget(electformlabel5, 0, 5, 1, 1);


        verticalLayout_3->addLayout(electformvvodgridLayout);

        izdanformpushButton = new QPushButton(Vvodtab);
        izdanformpushButton->setObjectName("izdanformpushButton");
        izdanformpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        verticalLayout_3->addWidget(izdanformpushButton);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        izdanformvvodpushButton = new QPushButton(Vvodtab);
        izdanformvvodpushButton->setObjectName("izdanformvvodpushButton");
        izdanformvvodpushButton->setEnabled(false);
        izdanformvvodpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        gridLayout->addWidget(izdanformvvodpushButton, 1, 6, 1, 1);

        izdanformlineEdit1 = new QLineEdit(Vvodtab);
        izdanformlineEdit1->setObjectName("izdanformlineEdit1");
        izdanformlineEdit1->setEnabled(false);

        gridLayout->addWidget(izdanformlineEdit1, 1, 1, 1, 1);

        izdanformlineEdit2 = new QLineEdit(Vvodtab);
        izdanformlineEdit2->setObjectName("izdanformlineEdit2");
        izdanformlineEdit2->setEnabled(false);

        gridLayout->addWidget(izdanformlineEdit2, 1, 3, 1, 1);

        izdanformspinBox = new QSpinBox(Vvodtab);
        izdanformspinBox->setObjectName("izdanformspinBox");
        izdanformspinBox->setEnabled(false);
        izdanformspinBox->setMaximum(100000);

        gridLayout->addWidget(izdanformspinBox, 1, 2, 1, 1);

        izdanformlineEdit3 = new QLineEdit(Vvodtab);
        izdanformlineEdit3->setObjectName("izdanformlineEdit3");
        izdanformlineEdit3->setEnabled(false);

        gridLayout->addWidget(izdanformlineEdit3, 1, 4, 1, 1);

        izdanformvvodlabel = new QLabel(Vvodtab);
        izdanformvvodlabel->setObjectName("izdanformvvodlabel");
        izdanformvvodlabel->setEnabled(false);

        gridLayout->addWidget(izdanformvvodlabel, 1, 0, 1, 1);

        izdanformlineEdit4 = new QLineEdit(Vvodtab);
        izdanformlineEdit4->setObjectName("izdanformlineEdit4");
        izdanformlineEdit4->setEnabled(false);

        gridLayout->addWidget(izdanformlineEdit4, 1, 5, 1, 1);

        izdanformlabel1 = new QLabel(Vvodtab);
        izdanformlabel1->setObjectName("izdanformlabel1");
        izdanformlabel1->setEnabled(false);

        gridLayout->addWidget(izdanformlabel1, 0, 1, 1, 1);

        izdanformlabel2 = new QLabel(Vvodtab);
        izdanformlabel2->setObjectName("izdanformlabel2");
        izdanformlabel2->setEnabled(false);

        gridLayout->addWidget(izdanformlabel2, 0, 2, 1, 1);

        izdanformlabel3 = new QLabel(Vvodtab);
        izdanformlabel3->setObjectName("izdanformlabel3");
        izdanformlabel3->setEnabled(false);

        gridLayout->addWidget(izdanformlabel3, 0, 3, 1, 1);

        izdanformlabel4 = new QLabel(Vvodtab);
        izdanformlabel4->setObjectName("izdanformlabel4");
        izdanformlabel4->setEnabled(false);

        gridLayout->addWidget(izdanformlabel4, 0, 4, 1, 1);

        izdanformlabel5 = new QLabel(Vvodtab);
        izdanformlabel5->setObjectName("izdanformlabel5");
        izdanformlabel5->setEnabled(false);
        izdanformlabel5->setMaximumSize(QSize(16777215, 35));

        gridLayout->addWidget(izdanformlabel5, 0, 5, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        tabWidget->addTab(Vvodtab, QString());
        Sorttab = new QWidget();
        Sorttab->setObjectName("Sorttab");
        verticalLayout_4 = new QVBoxLayout(Sorttab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        sortgridLayout = new QGridLayout();
        sortgridLayout->setObjectName("sortgridLayout");
        electsortlabel = new QLabel(Sorttab);
        electsortlabel->setObjectName("electsortlabel");

        sortgridLayout->addWidget(electsortlabel, 0, 0, 1, 1);

        electsortpushButton = new QPushButton(Sorttab);
        electsortpushButton->setObjectName("electsortpushButton");
        electsortpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        sortgridLayout->addWidget(electsortpushButton, 0, 2, 1, 1);

        electsortcomboBox = new QComboBox(Sorttab);
        electsortcomboBox->addItem(QString());
        electsortcomboBox->addItem(QString());
        electsortcomboBox->addItem(QString());
        electsortcomboBox->addItem(QString());
        electsortcomboBox->addItem(QString());
        electsortcomboBox->setObjectName("electsortcomboBox");

        sortgridLayout->addWidget(electsortcomboBox, 0, 1, 1, 1);

        izdanlabel = new QLabel(Sorttab);
        izdanlabel->setObjectName("izdanlabel");

        sortgridLayout->addWidget(izdanlabel, 1, 0, 1, 1);

        izdanpushButton = new QPushButton(Sorttab);
        izdanpushButton->setObjectName("izdanpushButton");
        izdanpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        sortgridLayout->addWidget(izdanpushButton, 1, 2, 1, 1);

        izdansortcomboBox = new QComboBox(Sorttab);
        izdansortcomboBox->addItem(QString());
        izdansortcomboBox->addItem(QString());
        izdansortcomboBox->addItem(QString());
        izdansortcomboBox->addItem(QString());
        izdansortcomboBox->addItem(QString());
        izdansortcomboBox->setObjectName("izdansortcomboBox");

        sortgridLayout->addWidget(izdansortcomboBox, 1, 1, 1, 1);


        verticalLayout_4->addLayout(sortgridLayout);

        tabWidget->addTab(Sorttab, QString());
        Poisktab = new QWidget();
        Poisktab->setObjectName("Poisktab");
        verticalLayout_5 = new QVBoxLayout(Poisktab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        poiskgridLayout = new QGridLayout();
        poiskgridLayout->setObjectName("poiskgridLayout");
        poisklabel = new QLabel(Poisktab);
        poisklabel->setObjectName("poisklabel");

        poiskgridLayout->addWidget(poisklabel, 0, 0, 1, 1);

        poiskpushButton = new QPushButton(Poisktab);
        poiskpushButton->setObjectName("poiskpushButton");
        poiskpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        poiskgridLayout->addWidget(poiskpushButton, 0, 2, 1, 1);

        poisklineEdit = new QLineEdit(Poisktab);
        poisklineEdit->setObjectName("poisklineEdit");

        poiskgridLayout->addWidget(poisklineEdit, 0, 1, 1, 1);


        verticalLayout_5->addLayout(poiskgridLayout);

        poisktableWidget = new QTableWidget(Poisktab);
        poisktableWidget->setObjectName("poisktableWidget");

        verticalLayout_5->addWidget(poisktableWidget);

        tabWidget->addTab(Poisktab, QString());
        Vivodtab = new QWidget();
        Vivodtab->setObjectName("Vivodtab");
        verticalLayout = new QVBoxLayout(Vivodtab);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(Vivodtab);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        udalhorizontalLayout = new QHBoxLayout();
        udalhorizontalLayout->setObjectName("udalhorizontalLayout");
        udallabel = new QLabel(Vivodtab);
        udallabel->setObjectName("udallabel");

        udalhorizontalLayout->addWidget(udallabel);

        udalspinBox = new QSpinBox(Vivodtab);
        udalspinBox->setObjectName("udalspinBox");
        udalspinBox->setMinimum(1);
        udalspinBox->setMaximum(1000);

        udalhorizontalLayout->addWidget(udalspinBox);

        udalpushButton = new QPushButton(Vivodtab);
        udalpushButton->setObjectName("udalpushButton");
        udalpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        udalhorizontalLayout->addWidget(udalpushButton);


        verticalLayout->addLayout(udalhorizontalLayout);

        infohorizontalLayout = new QHBoxLayout();
        infohorizontalLayout->setObjectName("infohorizontalLayout");
        infolabel = new QLabel(Vivodtab);
        infolabel->setObjectName("infolabel");

        infohorizontalLayout->addWidget(infolabel);

        infospinBox = new QSpinBox(Vivodtab);
        infospinBox->setObjectName("infospinBox");
        infospinBox->setMinimum(1);
        infospinBox->setMaximum(1000);

        infohorizontalLayout->addWidget(infospinBox);

        infopushButton = new QPushButton(Vivodtab);
        infopushButton->setObjectName("infopushButton");
        infopushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        infohorizontalLayout->addWidget(infopushButton);


        verticalLayout->addLayout(infohorizontalLayout);

        tabWidget->addTab(Vivodtab, QString());
        Functtab = new QWidget();
        Functtab->setObjectName("Functtab");
        Functtab->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(Functtab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        maxstranpushButton = new QPushButton(Functtab);
        maxstranpushButton->setObjectName("maxstranpushButton");
        maxstranpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        verticalLayout_6->addWidget(maxstranpushButton);

        maxstranlabel = new QLabel(Functtab);
        maxstranlabel->setObjectName("maxstranlabel");
        maxstranlabel->setMaximumSize(QSize(16777215, 35));

        verticalLayout_6->addWidget(maxstranlabel);

        illustpushButton = new QPushButton(Functtab);
        illustpushButton->setObjectName("illustpushButton");
        illustpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        verticalLayout_6->addWidget(illustpushButton);

        illustlabel = new QLabel(Functtab);
        illustlabel->setObjectName("illustlabel");
        illustlabel->setMaximumSize(QSize(16777215, 36));

        verticalLayout_6->addWidget(illustlabel);

        raznyazpushButton = new QPushButton(Functtab);
        raznyazpushButton->setObjectName("raznyazpushButton");
        raznyazpushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(80, 155, 255);"));

        verticalLayout_6->addWidget(raznyazpushButton);

        raznyazlabel = new QLabel(Functtab);
        raznyazlabel->setObjectName("raznyazlabel");
        raznyazlabel->setMaximumSize(QSize(16777215, 35));

        verticalLayout_6->addWidget(raznyazlabel);

        tabWidget->addTab(Functtab, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\321\203\321\200\321\201\320\276\320\262\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260", nullptr));
        Textlabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\264\320\260\320\275\320\275\321\213\320\274\320\270:", nullptr));
        electfilelabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\276\320\261 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\321\217\321\205 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        electchislabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\271 \320\264\320\273\321\217 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263:", nullptr));
        electfilepushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        izdanchislabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\271 \320\264\320\273\321\217 \320\270\320\267\320\264\320\260\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263:", nullptr));
        izdanfilelabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\276\320\261 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\321\217\321\205 \320\270\320\267\320\264\320\260\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        izdanfilepushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        electformpushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\276\320\261 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\321\217\321\205 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263 \320\270\320\267 \321\204\320\276\321\200\320\274\321\213", nullptr));
        electformvvodlabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\321\217 1:", nullptr));
        electformvvodpushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        electformlabel1->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214:", nullptr));
        electformlabel2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206:", nullptr));
        electformlabel3->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\276\320\266\320\272\320\260:", nullptr));
        electformlabel4->setText(QCoreApplication::translate("MainWindow", "\320\230\320\273\320\273\321\216\321\201\321\202\321\200\320\260\321\206\320\270\320\270:", nullptr));
        electformlabel5->setText(QCoreApplication::translate("MainWindow", "\320\257\320\267\321\213\320\272:", nullptr));
        izdanformpushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\276\320\261 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\321\217\321\205 \320\270\320\267\320\264\320\260\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263 \320\270\320\267 \321\204\320\276\321\200\320\274\321\213", nullptr));
        izdanformvvodpushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        izdanformvvodlabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\321\217 1:", nullptr));
        izdanformlabel1->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214:", nullptr));
        izdanformlabel2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206:", nullptr));
        izdanformlabel3->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\276\320\266\320\272\320\260:", nullptr));
        izdanformlabel4->setText(QCoreApplication::translate("MainWindow", "\320\230\320\273\320\273\321\216\321\201\321\202\321\200\320\260\321\206\320\270\320\270:", nullptr));
        izdanformlabel5->setText(QCoreApplication::translate("MainWindow", "\320\257\320\267\321\213\320\272:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Vvodtab), QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        electsortlabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\320\273\320\265 \320\264\320\273\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\271 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263:", nullptr));
        electsortpushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        electsortcomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        electsortcomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        electsortcomboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\276\320\266\320\272\320\260", nullptr));
        electsortcomboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\230\320\273\320\273\321\216\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        electsortcomboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\257\320\267\321\213\320\272", nullptr));

        izdanlabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\320\273\320\265 \320\264\320\273\321\217 \321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\271 \320\270\320\267\320\264\320\260\320\275\320\275\321\213\321\205 \320\272\320\275\320\270\320\263:", nullptr));
        izdanpushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        izdansortcomboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        izdansortcomboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        izdansortcomboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\276\320\266\320\272\320\260", nullptr));
        izdansortcomboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\230\320\273\320\273\321\216\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        izdansortcomboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\257\320\267\321\213\320\272", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(Sorttab), QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260", nullptr));
        poisklabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \321\205\320\276\321\202\320\270\321\202\320\265 \320\275\320\260\320\271\321\202\320\270:", nullptr));
        poiskpushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Poisktab), QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        udallabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\265\320\263\320\276 \320\275\320\276\320\274\320\265\321\200:", nullptr));
        udalpushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        infolabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\321\217 \320\262\321\213\320\262\320\276\320\264\320\260 \321\201\320\262\320\265\320\264\320\265\320\275\320\270\320\271 \320\276 \320\272\320\275\320\270\320\263\320\265 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\321\217:", nullptr));
        infopushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Vivodtab), QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264", nullptr));
        maxstranpushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \321\201 \320\275\320\260\320\270\320\261\320\276\320\273\321\214\321\210\320\270\320\274 \320\272\320\276\320\273-\320\262\320\276\320\274 \321\201\321\202\321\200\320\260\320\275\320\270\321\206", nullptr));
        maxstranlabel->setText(QString());
        illustpushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\272\320\260\320\272\320\270\321\205 \320\270\320\273\320\273\321\216\321\201\321\202\321\200\320\260\321\206\320\270\320\271 \320\261\320\276\320\273\321\214\321\210\320\265", nullptr));
        illustlabel->setText(QString());
        raznyazpushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\272\320\276\320\273-\320\262\320\276 \320\276\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\271 \320\275\320\260 \321\200\320\260\320\267\320\275\321\213\321\205 \321\217\320\267\321\213\320\272\320\260\321\205", nullptr));
        raznyazlabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Functtab), QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
