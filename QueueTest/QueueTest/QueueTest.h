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

	//������ɺ�
	void TaskFinished(int taskName);

	//�����ť-��������
	void AddNewTask();

	//�������������б���ʾ��
	void ShowQueueToTextEdit(const QQueue<int>name);
	//��ʾ����������б�
	void ShowQueueFinTextEdit(const QQueue<int>name);

signals:
	//�������͵�work�߳�
	void SendNewTask(int taskName);

private:
    Ui::QueueTestClass ui;

	WorkThread *m_WorkThread = nullptr;

	QTimer *m_Timer;//��ʱ��

	QString NewTaskName;

	int number = 0;

	//��ִ��
	QQueue<int>TaskNamequeue;

	//ִ�����
	QQueue<int>TaskFisishedqueue;
};
