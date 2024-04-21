#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QFile>
#include <QString>
#include <QStringLiteral>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setIndex(int index);
    void setIndex(int index, int subject);
    //void adjustWidgets();
    void connectAll();
    void logIn();
    void signUp();
    void chatLoaded();

private:
    Ui::MainWindow *ui;
    bool user = false;
    QUrl chats[6] = {
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/ca95ed6c-31b9-4c20-81a5-743f7a52e6f0/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //math - 1
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/1b465f56-2653-4b76-a142-b5e21ff71df0/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //physics - 2
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/e3e751ab-253b-419b-8d89-dd875bd5580c/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //chemistry - 3
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/dada2986-70c1-4bdd-b4c6-2fba7a1c8414/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //biology - 4
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/db0bd218-6cc6-410a-b60e-07cfb9512d6a/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //geography - 5
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/e4b2e14e-9feb-4b95-8992-e59f630b8104/webchat/bot.html"), QUrl::ParsingMode::TolerantMode)  //history - 6
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/370386eb-f5d6-45b8-be73-0514725848c3/webchat/bot.html"), QUrl::ParsingMode::TolerantMode)  //translator - 7

    };

    QFile * chat = new QFile(QString("math.html"));
    //void resizeEvent(QResizeEvent *e);
};
#endif // MAINWINDOW_H
