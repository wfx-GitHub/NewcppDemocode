#include "QueueTest.h"


#pragma execution_character_set("utf-8")


QueueTest::QueueTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	m_WorkThread = new WorkThread(this);

	m_Timer = new QTimer(this);

	connect(ui.BtnAddTask,&QPushButton::clicked,this,&QueueTest::AddNewTask);
	//新增任务后发送
	connect(this,&QueueTest::SendNewTask,m_WorkThread,&WorkThread::RecvNewTask);
	//任务完成后
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


//点击按钮-新增任务
void QueueTest::AddNewTask()
{
	qDebug() << "新增任务";
	//int number = TaskNamequeue.size() +1;
	number++;

	NewTaskName = "task" + QString::number(number);
	//判断queue的长度，确定number值
	TaskNamequeue.enqueue(number);

	ui.textEditTaskqueue->clear();
	ShowQueueToTextEdit(TaskNamequeue);

	emit SendNewTask(number);


}

//把新增的任务列表显示到待完成
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

//显示到任务完成列表
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

//任务完成后
void QueueTest::TaskFinished(int taskName) 
{
	qDebug() << "主线程收到的完成任务" << taskName;

	TaskNamequeue.dequeue();

	//更新ui
	ui.textEditTaskqueue->clear();
	ShowQueueToTextEdit(TaskNamequeue);

	//完成列表
	TaskFisishedqueue.enqueue(taskName);

	ui.textEditFinished->clear();
	ShowQueueFinTextEdit(TaskFisishedqueue);
}