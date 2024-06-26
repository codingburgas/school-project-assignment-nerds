#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qwebengineview.h"


MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setWindowTitle(QString("StudyBuddy"));
    ui->setupUi(this);
    this->connectAll();

    this->setStyleSheet(QString(" #centralwidget{ background-image: url(:/images/images/bg.png) }; }"));

    //login-0, signup-1, main-2, chat-3
    this->setIndex(0);
    this->setGeometry(0, 0, 950, 700);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::chatLoaded()
{
    //make chat visible, label not
    this->ui->chat->setVisible(true);
    this->ui->chat_loading->setVisible(false);
}

void MainWindow::setIndex(int index)
{
    //manage stackedWidget(main widget)
    this->ui->stackedWidget->setCurrentIndex(index);
    this->ui->stackedWidget->setMinimumSize(this->ui->stackedWidget->currentWidget()->minimumSizeHint());

    //manage sidebar
    this->ui->login_sidebar->setVisible(true);
    this->ui->signup_sidebar->setVisible(true);
    this->ui->back_from_chat->setVisible(false);
    switch (index) {
    case 0:
        this->ui->login_sidebar->setVisible(false);
        break;
    case 1:
        this->ui->signup_sidebar->setVisible(false);
        break;
    case 2:
        this->ui->login_sidebar->setVisible(false);
        this->ui->signup_sidebar->setVisible(false);
        break;
    default:
        break;
    }
}

void MainWindow::setIndex(int index, int subject) {
    //manage chat page
    this->ui->chat_loading->setVisible(true);
    this->ui->stackedWidget->setCurrentIndex(index);
    this->ui->stackedWidget->setMinimumSize(this->ui->stackedWidget->currentWidget()->minimumSize());

    //manage sidebar
    this->ui->back_from_chat->setVisible(true);
    this->ui->login_sidebar->setVisible(false);
    this->ui->signup_sidebar->setVisible(false);

    //load new chat
    auto* w = this->ui->chat;
    w->load(this->chats[subject]);
    QObject::connect(w, &QWebEngineView::loadFinished, this, &MainWindow::chatLoaded);
}

void MainWindow::connectAll()
{
    //login button
    QObject::connect(this->ui->button_login, &QPushButton::clicked, this, &MainWindow::logIn);
    //signup button
    QObject::connect(this->ui->button_signup, &QPushButton::clicked, this, &MainWindow::signUp);
    //redirect from login to signup
    QObject::connect(this->ui->button_to_signup, &QPushButton::clicked, this, [this] { setIndex(1); });
    //connect math
    QObject::connect(this->ui->button_subject_math, &QPushButton::clicked, this, [this] { setIndex(3, 0); });
    //connect physics
    QObject::connect(this->ui->button_subject_physics, &QPushButton::clicked, this, [this] { setIndex(3, 1); });
    //connect chemistry
    QObject::connect(this->ui->button_subject_chemistry, &QPushButton::clicked, this, [this] { setIndex(3, 2); });
    //connect biology
    QObject::connect(this->ui->button_subject_biology, &QPushButton::clicked, this, [this] { setIndex(3, 3); });
    //connect geography
    QObject::connect(this->ui->button_subject_geography, &QPushButton::clicked, this, [this] { setIndex(3, 4); });
    //connect history
    QObject::connect(this->ui->button_subject_history, &QPushButton::clicked, this, [this] { setIndex(3, 5); });
    //connect translator
    QObject::connect(this->ui->button_subject_translator, &QPushButton::clicked, this, [this] { setIndex(3, 6); });
    //connect back_to_main_from_chat
    QObject::connect(this->ui->back_from_chat, &QPushButton::clicked, this, [this] { setIndex(2); ui->chat->setVisible(false); });
    //connect sidebar login
    QObject::connect(this->ui->login_sidebar, &QPushButton::clicked, this, [this] { setIndex(0); });
    //connect sidebar signup
    QObject::connect(this->ui->signup_sidebar, &QPushButton::clicked, this, [this] { setIndex(1); });
}

void MainWindow::logIn()
{
    this->user = true;
    if (user) {
        this->ui->email_login->setText(QString());
        this->ui->password_login->setText(QString());
        this->setIndex(2);
    }
    else {
        this->ui->email_login->setText(QString("Invalid data"));
        this->ui->password_login->setText(QString());
    }
}
void MainWindow::signUp()
{
    this->setIndex(0);
}
