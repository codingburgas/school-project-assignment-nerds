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
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/ca95ed6c-31b9-4c20-81a5-743f7a52e6f0/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //math - 0
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/1b465f56-2653-4b76-a142-b5e21ff71df0/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //physics - 1
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/e3e751ab-253b-419b-8d89-dd875bd5580c/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //chemistry - 2
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/44303fab-5fce-4c0b-a87b-3f634f148908/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //biology - 3
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/db0bd218-6cc6-410a-b60e-07cfb9512d6a/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //geography - 4
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/ff1d9967-763f-4201-86ce-8142a56d5d71/webchat/bot.html"), QUrl::ParsingMode::TolerantMode)  //history - 5

    };

    QFile * chat = new QFile(QString("math.html"));
    //void resizeEvent(QResizeEvent *e);
};
#endif // MAINWINDOW_H
