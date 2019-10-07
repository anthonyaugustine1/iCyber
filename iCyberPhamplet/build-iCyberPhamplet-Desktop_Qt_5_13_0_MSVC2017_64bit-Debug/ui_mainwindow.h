/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QWidget *tab_2;
    QTextBrowser *textBrowser_2;
    QWidget *tab_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_4;
    QWidget *tab_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1300, 650);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1300, 650));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 210, 701, 71));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 90, 80, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(70, 30, 681, 192));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 461, 601));
        textEdit_4 = new QTextEdit(tab_3);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(560, 190, 291, 271));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        textEdit_2 = new QTextEdit(tab_4);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 0, 231, 261));
        textEdit_3 = new QTextEdit(tab_4);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(560, 30, 221, 241));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,BlinkMacSystemFont,Segoe UI,Roboto,Oxygen,Ubuntu,Cantarell,Fira Sans,Droid Sans,Helvetica Neue,sans-serif'; font-size:16px; font-weight:296; color:#424242;\">iCyberSecurity offers a 100% uptime guarantee. In the event of downtime, customers receive a service credit against their monthly fee, in proportion to the respective disruption and affected customer ratio.</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Page 1", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#ffffff\">\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"LC1\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">W</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; c"
                        "olor:#24292e;\">elcome To iCyberSecurity</span></p></td>\n"
"<td></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L2\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">H</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">ere at iCyberSecuirty, we believe in offering only the "
                        "best to our loyal customers. </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L4\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">W</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">e offer the best security in the universe. If you want to stay safe, buy our products!</span></p></td></tr></table></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Page 2", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#ffffff\">\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">1. The Standard Option:</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\""
                        " margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-iCyber syncs up with up to 2 phones and 2 computers</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Protection against cyber threats found online and in emails</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\""
                        ">-Gives you warnings if a document about to be downloaded is not safe</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Will tell you if a website you are browsing is unsafe</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-$99.99</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\"></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-l"
                        "eft:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">2. Standard Plus:</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Same ultimate virus and hack-proof protection</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'"
                        "Consolas'; color:#24292e;\">-iCyber syncs with up to 10 phones and up to 10 computers</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-There is protection against cyber threats found online and in emails</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Gives you warnings if a document about to be downloaded is not safe</span><span style=\" font-family:'MS Shell Dlg 2';\"> "
                        "</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Will tell you if a website you are browsing is unsafe</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-$199.99</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\"></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p s"
                        "tyle=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">3. Pro:</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Same ultimate virus and hack-proof protection</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-iCyber syncs up with up to 100 phones and up to 1"
                        "00 computers</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-There is protection against cyber threats found online and in emails</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Gives you warnings if a document about to be downloaded is not safe</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; paddi"
                        "ng-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-Will tell you if a website you are browsing is unsafe</span><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:0; padding-right:0; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Consolas'; color:#24292e;\">-$499.99</span></p></td></tr></table></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Provide ongoing customer service and maintenence with any service option!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Standard plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bot"
                        "tom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-24 hour on-call support staff</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-Service call support</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-$100.00 monthly</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Pro plan:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0"
                        "px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-Professional support staff suited to company needs</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-Server installation and on-site technical support</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-$1000.00 monthly*</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Page 3", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:-1px; margin-right:-1px; -qt-block-indent:0; text-indent:0px; background-color:#f6f8fa;\"><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Helvetica','Arial','sans-serif','Apple Color Emoji','Segoe UI Emoji'; font-size:14px; color:#24292e;\">\302\240\302\240</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:-1px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Helvetica','Arial','sans-serif','Apple Color Emoji','Segoe UI Emoji'; font-size:14px; color:#24292e;\"><br /></p>\n"
""
                        "<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\">\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L1\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">H</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">ere is the list of environments that iCyber-Security can operate on:</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vert"
                        "ical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L2\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">1</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">. OS software</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L3\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monos"
                        "pace'; font-size:12px; color:#24292e;\">2</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">. Windows Software</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L4\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">3</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">. Linux Software</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></"
                        "td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L5\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">4</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">. Rasberry Pi</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L6\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Libera"
                        "tion Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">5</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">. All network devices</span></p></td></tr></table></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#ffffff\">\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L1\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">C</span"
                        "><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">ontact information</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L2\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">E</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospac"
                        "e'; font-size:12px; color:#24292e;\">mail Address: iCyberSecurity@gmail.com</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L4\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">S</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">treet Address: 21825 Lake Lane, Ir"
                        "vine CA, 92602</span></p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\"></td>\n"
"<td style=\" vertical-align:top; padding-left:10; padding-right:10; padding-top:0; padding-bottom:0;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:20px;\"><a name=\"L6\"></a><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">P</span><span style=\" font-family:'SFMono-Regular','Consolas','Liberation Mono','Menlo','monospace'; font-size:12px; color:#24292e;\">hone Number: 202-555-0163</span></p></td></tr></table></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Page 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
