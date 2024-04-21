/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *login;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *email_login;
    QLineEdit *password_login;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QPushButton *button_to_signup;
    QPushButton *button_login;
    QWidget *signup;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *email_signup;
    QLineEdit *password_signup;
    QLineEdit *passwordconf_signup;
    QPushButton *button_signup;
    QWidget *main;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QWidget *math_2;
    QVBoxLayout *verticalLayout_15;
    QPushButton *button_subject_math;
    QLabel *label_16;
    QWidget *physics_2;
    QVBoxLayout *verticalLayout_12;
    QPushButton *button_subject_physics;
    QLabel *label_13;
    QWidget *chemistry_2;
    QVBoxLayout *verticalLayout_13;
    QPushButton *button_subject_chemistry;
    QLabel *label_14;
    QWidget *biology_2;
    QVBoxLayout *verticalLayout_11;
    QPushButton *button_subject_biology;
    QLabel *label_12;
    QWidget *geography_2;
    QVBoxLayout *verticalLayout_16;
    QPushButton *button_subject_geography;
    QLabel *label_17;
    QWidget *literature_2;
    QVBoxLayout *verticalLayout_14;
    QPushButton *button_subject_literature;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_2;
    QWidget *chat_w;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QWebEngineView *chat;
    QLabel *chat_loading;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1026, 770);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setSizeIncrement(QSize(1, 1));
        login = new QWidget();
        login->setObjectName("login");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(login);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(login);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/logo.png")));
        label->setScaledContents(true);

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignBottom);

        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: italic 20pt \"Rockwell\";\n"
"color: rgb(170, 0, 127);"));

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignHCenter);

        widget = new QWidget(login);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        email_login = new QLineEdit(widget);
        email_login->setObjectName("email_login");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(email_login->sizePolicy().hasHeightForWidth());
        email_login->setSizePolicy(sizePolicy1);
        email_login->setMinimumSize(QSize(400, 0));
        email_login->setMaximumSize(QSize(550, 16777215));

        verticalLayout->addWidget(email_login, 0, Qt::AlignHCenter);

        password_login = new QLineEdit(widget);
        password_login->setObjectName("password_login");
        sizePolicy1.setHeightForWidth(password_login->sizePolicy().hasHeightForWidth());
        password_login->setSizePolicy(sizePolicy1);
        password_login->setMinimumSize(QSize(400, 0));
        password_login->setMaximumSize(QSize(550, 16777215));
        password_login->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password_login->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password_login, 0, Qt::AlignHCenter);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: italic 6pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        horizontalLayout_2->addWidget(label_5);

        button_to_signup = new QPushButton(widget_3);
        button_to_signup->setObjectName("button_to_signup");
        button_to_signup->setStyleSheet(QString::fromUtf8("font: italic 6pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        horizontalLayout_2->addWidget(button_to_signup);


        verticalLayout->addWidget(widget_3, 0, Qt::AlignHCenter|Qt::AlignTop);

        button_login = new QPushButton(widget);
        button_login->setObjectName("button_login");
        sizePolicy2.setHeightForWidth(button_login->sizePolicy().hasHeightForWidth());
        button_login->setSizePolicy(sizePolicy2);
        button_login->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout->addWidget(button_login, 0, Qt::AlignHCenter);


        verticalLayout_3->addWidget(widget, 0, Qt::AlignBottom);

        stackedWidget->addWidget(login);
        signup = new QWidget();
        signup->setObjectName("signup");
        verticalLayout_5 = new QVBoxLayout(signup);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_4 = new QLabel(signup);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/logo.png")));
        label_4->setScaledContents(true);

        verticalLayout_5->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignBottom);

        label_3 = new QLabel(signup);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: italic 20pt \"Rockwell\";\n"
"color: rgb(170, 0, 127);"));

        verticalLayout_5->addWidget(label_3, 0, Qt::AlignHCenter);

        widget_2 = new QWidget(signup);
        widget_2->setObjectName("widget_2");
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        email_signup = new QLineEdit(widget_2);
        email_signup->setObjectName("email_signup");

        verticalLayout_2->addWidget(email_signup, 0, Qt::AlignTop);

        password_signup = new QLineEdit(widget_2);
        password_signup->setObjectName("password_signup");
        password_signup->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password_signup->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password_signup, 0, Qt::AlignTop);

        passwordconf_signup = new QLineEdit(widget_2);
        passwordconf_signup->setObjectName("passwordconf_signup");

        verticalLayout_2->addWidget(passwordconf_signup, 0, Qt::AlignTop);

        button_signup = new QPushButton(widget_2);
        button_signup->setObjectName("button_signup");
        sizePolicy2.setHeightForWidth(button_signup->sizePolicy().hasHeightForWidth());
        button_signup->setSizePolicy(sizePolicy2);
        button_signup->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_2->addWidget(button_signup, 0, Qt::AlignHCenter|Qt::AlignBottom);


        verticalLayout_5->addWidget(widget_2);

        stackedWidget->addWidget(signup);
        main = new QWidget();
        main->setObjectName("main");
        verticalLayout_4 = new QVBoxLayout(main);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        frame = new QFrame(main);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(20);
        gridLayout_2->setVerticalSpacing(30);
        gridLayout_2->setContentsMargins(30, 30, 30, 30);
        math_2 = new QWidget(frame);
        math_2->setObjectName("math_2");
        math_2->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        verticalLayout_15 = new QVBoxLayout(math_2);
        verticalLayout_15->setObjectName("verticalLayout_15");
        button_subject_math = new QPushButton(math_2);
        button_subject_math->setObjectName("button_subject_math");
        button_subject_math->setLayoutDirection(Qt::LeftToRight);
        button_subject_math->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/subject"), QSize(), QIcon::Normal, QIcon::Off);
        button_subject_math->setIcon(icon1);
        button_subject_math->setIconSize(QSize(200, 200));

        verticalLayout_15->addWidget(button_subject_math);

        label_16 = new QLabel(math_2);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("font: italic bold 14pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_15->addWidget(label_16, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(math_2, 0, 0, 1, 1);

        physics_2 = new QWidget(frame);
        physics_2->setObjectName("physics_2");
        physics_2->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        verticalLayout_12 = new QVBoxLayout(physics_2);
        verticalLayout_12->setObjectName("verticalLayout_12");
        button_subject_physics = new QPushButton(physics_2);
        button_subject_physics->setObjectName("button_subject_physics");
        button_subject_physics->setLayoutDirection(Qt::LeftToRight);
        button_subject_physics->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        button_subject_physics->setIcon(icon1);
        button_subject_physics->setIconSize(QSize(200, 200));

        verticalLayout_12->addWidget(button_subject_physics);

        label_13 = new QLabel(physics_2);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("font: italic bold 14pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_12->addWidget(label_13, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(physics_2, 0, 1, 1, 1);

        chemistry_2 = new QWidget(frame);
        chemistry_2->setObjectName("chemistry_2");
        chemistry_2->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        verticalLayout_13 = new QVBoxLayout(chemistry_2);
        verticalLayout_13->setObjectName("verticalLayout_13");
        button_subject_chemistry = new QPushButton(chemistry_2);
        button_subject_chemistry->setObjectName("button_subject_chemistry");
        button_subject_chemistry->setLayoutDirection(Qt::LeftToRight);
        button_subject_chemistry->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        button_subject_chemistry->setIcon(icon1);
        button_subject_chemistry->setIconSize(QSize(200, 200));

        verticalLayout_13->addWidget(button_subject_chemistry);

        label_14 = new QLabel(chemistry_2);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("font: italic bold 14pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_13->addWidget(label_14, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(chemistry_2, 0, 2, 1, 1);

        biology_2 = new QWidget(frame);
        biology_2->setObjectName("biology_2");
        biology_2->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        verticalLayout_11 = new QVBoxLayout(biology_2);
        verticalLayout_11->setObjectName("verticalLayout_11");
        button_subject_biology = new QPushButton(biology_2);
        button_subject_biology->setObjectName("button_subject_biology");
        button_subject_biology->setLayoutDirection(Qt::LeftToRight);
        button_subject_biology->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        button_subject_biology->setIcon(icon1);
        button_subject_biology->setIconSize(QSize(200, 200));

        verticalLayout_11->addWidget(button_subject_biology);

        label_12 = new QLabel(biology_2);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("font: italic bold 14pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_11->addWidget(label_12, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(biology_2, 1, 0, 1, 1);

        geography_2 = new QWidget(frame);
        geography_2->setObjectName("geography_2");
        geography_2->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        verticalLayout_16 = new QVBoxLayout(geography_2);
        verticalLayout_16->setObjectName("verticalLayout_16");
        button_subject_geography = new QPushButton(geography_2);
        button_subject_geography->setObjectName("button_subject_geography");
        button_subject_geography->setLayoutDirection(Qt::LeftToRight);
        button_subject_geography->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        button_subject_geography->setIcon(icon1);
        button_subject_geography->setIconSize(QSize(200, 200));

        verticalLayout_16->addWidget(button_subject_geography);

        label_17 = new QLabel(geography_2);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("font: italic bold 14pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_16->addWidget(label_17, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(geography_2, 1, 1, 1, 1);

        literature_2 = new QWidget(frame);
        literature_2->setObjectName("literature_2");
        literature_2->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        verticalLayout_14 = new QVBoxLayout(literature_2);
        verticalLayout_14->setObjectName("verticalLayout_14");
        button_subject_literature = new QPushButton(literature_2);
        button_subject_literature->setObjectName("button_subject_literature");
        button_subject_literature->setLayoutDirection(Qt::LeftToRight);
        button_subject_literature->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 80, 140);"));
        button_subject_literature->setIcon(icon1);
        button_subject_literature->setIconSize(QSize(200, 200));

        verticalLayout_14->addWidget(button_subject_literature);

        label_15 = new QLabel(literature_2);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("font: italic bold 14pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_14->addWidget(label_15, 0, Qt::AlignHCenter);


        gridLayout_2->addWidget(literature_2, 1, 2, 1, 1);


        verticalLayout_4->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        stackedWidget->addWidget(main);
        chat_w = new QWidget();
        chat_w->setObjectName("chat_w");
        verticalLayout_6 = new QVBoxLayout(chat_w);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_3 = new QSpacerItem(20, 334, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        chat = new QWebEngineView(chat_w);
        chat->setObjectName("chat");
        sizePolicy2.setHeightForWidth(chat->sizePolicy().hasHeightForWidth());
        chat->setSizePolicy(sizePolicy2);

        verticalLayout_6->addWidget(chat);

        chat_loading = new QLabel(chat_w);
        chat_loading->setObjectName("chat_loading");
        chat_loading->setStyleSheet(QString::fromUtf8("font: italic bold 14pt \"Segoe UI\";\n"
"color: rgb(170, 85, 127);"));

        verticalLayout_6->addWidget(chat_loading, 0, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 334, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        stackedWidget->addWidget(chat_w);

        horizontalLayout->addWidget(stackedWidget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Log in to the StudyBuddy", nullptr));
        email_login->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        password_login->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Don't have an account? -", nullptr));
        button_to_signup->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        button_login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Sign up to the StudyBuddy", nullptr));
        email_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        password_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        passwordconf_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password Confirmation", nullptr));
        button_signup->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        button_subject_math->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Math", nullptr));
        button_subject_physics->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Physics", nullptr));
        button_subject_chemistry->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "Chemistry", nullptr));
        button_subject_biology->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Biology", nullptr));
        button_subject_geography->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "Geography", nullptr));
        button_subject_literature->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Literature", nullptr));
        chat_loading->setText(QCoreApplication::translate("MainWindow", "Please wait, bot is loading!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
