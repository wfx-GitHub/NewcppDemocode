#include "QueueTest.h"


#pragma execution_character_set("utf-8")


QueueTest::QueueTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	m_WorkThread = new WorkThread(this);

	m_Timer = new QTimer(this);

	connect(ui.BtnAddTask,&QPushButton::clicked,this,&QueueTest::AddNewTask);
	//�����������
	connect(this,&QueueTest::SendNewTask,m_WorkThread,&WorkThread::RecvNewTask);
	//������ɺ�
	connect(m_WorkThread,&WorkThread::taskFinished,this,&QueueTest::TaskFinished);

	connect(m_Timer, &QTimer::timeout, [=]() 
	{
		m_WorkThread->start();
		m_WorkThread->wait();
	});
	m_Timer->start(2000);
}

QueueTest::~QueueTest()
{}


//�����ť-��������
void QueueTest::AddNewTask()
{
	qDebug() << "��������";
	//int number = TaskNamequeue.size() +1;
	number++;

	NewTaskName = "task" + QString::number(number);
	//�ж�queue�ĳ��ȣ�ȷ��numberֵ
	TaskNamequeue.enqueue(number);

	ui.textEditTaskqueue->clear();
	ShowQueueToTextEdit(TaskNamequeue);

	emit SendNewTask(number);


}

//�������������б���ʾ�������
void QueueTest::ShowQueueToTextEdit(const QQueue<int> name)
{
	if (name.size() == 0)
	{
		return;
	}
	for (int i = 0; i < name.size(); ++i) {
		QString value = "task:" + QString::number(name.at(i));
		ui.textEditTaskqueue->append(value);
	}
}

//��ʾ����������б�
void QueueTest::ShowQueueFinTextEdit(const QQueue<int> name)
{
	if (name.size() == 0)
	{
		return;
	}
	for (int i = 0; i < name.size(); ++i) {
		QString value = "task:" + QString::number(name.at(i));
		ui.textEditFinished->append(value);
	}
}

//������ɺ�
void QueueTest::TaskFinished(int taskName) 
{
	qDebug() << "���߳��յ����������" << taskName;

	TaskNamequeue.dequeue();

	//����ui
	ui.textEditTaskqueue->clear();
	ShowQueueToTextEdit(TaskNamequeue);

	//����б�
	TaskFisishedqueue.enqueue(taskName);

	ui.textEditFinished->clear();
	ShowQueueFinTextEdit(TaskFisishedqueue);
}