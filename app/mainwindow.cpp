#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include "QWebEngineView"
#include "qwebengineview.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->connectAll();

    //login-0, signup-1, main-2, chat-3
    this->setIndex(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::chatLoaded()
{
    this->ui->chat->setFixedSize(500, 600);
    if (600>this->height()) {this->resize(this->width(), 600);}
    if (500>this->width()) {this->resize(500, this->height());}
    this->ui->chat_loading->setVisible(false);

}

void MainWindow::setIndex(int index)
{
    this->ui->stackedWidget->setCurrentIndex(index);
}

void MainWindow::setIndex(int index, int subject){
    this->ui->stackedWidget->setCurrentIndex(index);

    auto * w = this->ui->chat;
    w->load(this->chats[subject]);
    QObject::connect(w, &QWebEngineView::loadFinished, this, &MainWindow::chatLoaded);
    //w->setFixedSize(500, 500);
    //w->load(this->chats[subject]);


}

void MainWindow::connectAll()
{
    //login button
    QObject::connect(this->ui->button_login, &QPushButton::clicked, this, &MainWindow::logIn);
    //signup button
    QObject::connect(this->ui->button_signup, &QPushButton::clicked, this, &MainWindow::signUp);
    //redirect from login to signup
    QObject::connect(this->ui->button_to_signup, &QPushButton::clicked, this, [this]{ setIndex(1); });
    //connect math
    QObject::connect(this->ui->button_subject_math, &QPushButton::clicked, this, [this]{ setIndex(3, 0); });
    //connect physics
    QObject::connect(this->ui->button_subject_physics, &QPushButton::clicked, this, [this]{ setIndex(3, 1); });
    //connect chemistry
    QObject::connect(this->ui->button_subject_chemistry, &QPushButton::clicked, this, [this]{ setIndex(3, 2); });
    //connect biology
    QObject::connect(this->ui->button_subject_biology, &QPushButton::clicked, this, [this]{ setIndex(3, 3); });
    //connect geography
    QObject::connect(this->ui->button_subject_geography, &QPushButton::clicked, this, [this]{ setIndex(3, 4); });
    //connect literature
    QObject::connect(this->ui->button_subject_literature, &QPushButton::clicked, this, [this]{ setIndex(3, 5); });


}

void MainWindow::logIn()
{
    this->user = true;
    if (user){
        this->setIndex(2);
    } else{
        this->ui->email_login->setText(QString("Invalid data"));
    }
}
void MainWindow::signUp()
{
    this->setIndex(0);
}
