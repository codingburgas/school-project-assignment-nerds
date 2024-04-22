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
    MainWindow(QWidget* parent = nullptr);
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
    Ui::MainWindow* ui;
    bool user = false;
    QUrl chats[7] = {
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/4005a4a3-6390-491c-a049-c191fda77a77/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //math - 1
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/80fe8867-0703-49f0-818f-3e73e5894f59/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //physics - 2
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/adeac89f-7848-4982-94a0-55e5a960de4c/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //chemistry - 3
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/dada2986-70c1-4bdd-b4c6-2fba7a1c8414/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //biology - 4
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/db0bd218-6cc6-410a-b60e-07cfb9512d6a/webchat/bot.html"), QUrl::ParsingMode::TolerantMode), //geography - 5
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/e4b2e14e-9feb-4b95-8992-e59f630b8104/webchat/bot.html"), QUrl::ParsingMode::TolerantMode),  //history - 6
        QUrl(QStringLiteral("https://mediafiles.botpress.cloud/370386eb-f5d6-45b8-be73-0514725848c3/webchat/bot.html"), QUrl::ParsingMode::TolerantMode)  //translator - 7
    };
};
#endif // MAINWINDOW_H
