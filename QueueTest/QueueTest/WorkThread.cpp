#include "WorkThread.h"


#pragma execution_character_set("utf-8")


WorkThread::WorkThread(QObject *parent)
	: QThread(parent)
{}

WorkThread::~WorkThread()
{}


void WorkThread::run()
{
	if (TaskTodoqueue.isEmpty())
	{
		return;
	}

	int topitem = TaskTodoqueue.dequeue();

	int numberTask = topitem;
	//����ִ�е���������
	emit taskFinished(numberTask);

	qDebug() << "����ִ�е�����" << topitem;
}

//���յ���task
void WorkThread::RecvNewTask(int Tname)
{
	qDebug() << "���߳��յ�����������" << Tname;

	TaskTodoqueue.enqueue(Tname);
}
