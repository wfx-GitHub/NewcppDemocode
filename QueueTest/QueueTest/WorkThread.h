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

	//��������ź�
	void taskFinished(int FTname);

private:

	//��ִ��
	QQueue<int>TaskTodoqueue;
};
