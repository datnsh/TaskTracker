#include "TaskManager.h"
#include <iostream>
#include <qapplication.h>

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	std::cout << "This app is running";
	return app.exec();

}