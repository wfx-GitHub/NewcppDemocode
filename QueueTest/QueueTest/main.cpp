#include "QueueTest.h"
#include <QtWidgets/QApplication>
//#include <qRegisterMetaType>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	// ע��int&����
	//qRegisterMetaType<int&>();

    QueueTest w;
    w.show();
    return a.exec();
}
