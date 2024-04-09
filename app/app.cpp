#include <iostream>
//#include "QtWidgets/QApplication"
//#include "QtWidgets/qapplication.h"
#include "QtWidgets/qapplication.h"
#include "QtWidgets/QMainWindow"
#include "QtWebEngineWidgets/QWebEngineView"


int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QMainWindow window(nullptr);
    //wsetWindowTitle("Simple Web Browser");
    window.setWindowTitle("Test");
    window.show();

    app.exec();

}


