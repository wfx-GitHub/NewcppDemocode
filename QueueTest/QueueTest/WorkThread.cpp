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
	//发送执行的任务名称
	emit taskFinished(numberTask);

	qDebug() << "正在执行的任务" << topitem;
}

//接收到新task
void WorkThread::RecvNewTask(int Tname)
{
	qDebug() << "子线程收到的任务名称" << Tname;

	TaskTodoqueue.enqueue(Tname);
}
