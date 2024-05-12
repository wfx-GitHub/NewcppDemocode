#pragma once

#include <QObject>
#include <QThread>
#include <QQueue>
#include <QMutex>
#include <QDebug>


class WorkThread  : public QThread
{
	Q_OBJECT

public:
	WorkThread(QObject *parent);
	~WorkThread();

	void run() override;

	void RecvNewTask(int Tname);

signals:

	//完成任务信号
	void taskFinished(int FTname);

private:

	//待执行
	QQueue<int>TaskTodoqueue;
};
