#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QueueTest.h"
#include <QQueue>
#include <QMutex>
#include <QDebug>
#include <QTimer>

#include "WorkThread.h"



class QueueTest : public QMainWindow
{
    Q_OBJECT

public:
    QueueTest(QWidget *parent = nullptr);
    ~QueueTest();

public slots:

	//任务完成后
	void TaskFinished(int taskName);

	//点击按钮-新增任务
	void AddNewTask();

	//把新增的任务列表显示到
	void ShowQueueToTextEdit(const QQueue<int>name);
	//显示到任务完成列表
	void ShowQueueFinTextEdit(const QQueue<int>name);

signals:
	//新增后发送到work线程
	void SendNewTask(int taskName);

private:
    Ui::QueueTestClass ui;

	WorkThread *m_WorkThread = nullptr;

	QTimer *m_Timer;//计时器

	QString NewTaskName;

	int number = 0;

	//待执行
	QQueue<int>TaskNamequeue;

	//执行完成
	QQueue<int>TaskFisishedqueue;
};
