#include "QueueTest.h"
#include <QtWidgets/QApplication>
//#include <qRegisterMetaType>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	// ×¢²áint&ÀàÐÍ
	//qRegisterMetaType<int&>();

    QueueTest w;
    w.show();
    return a.exec();
}
