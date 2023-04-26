#include "todo-list.h"

std::list<Task>::iterator TaskList::SearchTaskIteratorByName(std::string taskName)
{
	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetTaskName() == taskName)
		{
			return currentTask;
		}
	}
}

TaskList::TaskList()
{
	this->_allTasks = std::list<Task>();
}
//���� ������ �� ���������� ���� �����
void TaskList::AddTask(Task newTask)
{
	this->_allTasks.push_back(newTask);
}
//���� ������ ������ ���� 
void TaskList::Print()
{
	for (auto currentTaskInList = this->_allTasks.begin(); currentTaskInList != this->_allTasks.end(); currentTaskInList++)
	{
		currentTaskInList->Print();
	}
}
//���� ������ �� �������� ����
void TaskList::DeleteTask(std::string taskName)
{
	this->_allTasks.erase(this->SearchTaskIteratorByName(taskName));
}
//���� �� �������������� ����
void TaskList::EditorTask(std::string taskName)
{
	Task editedTask = Task::CreateTask();
	this->_allTasks.emplace(this->SearchTaskIteratorByName(taskName), editedTask);

}
