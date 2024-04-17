#include "qapplication.h"
#include "qmainwindow.h"

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	QMainWindow w(0);

	w.show();
	a.exec();
	
}