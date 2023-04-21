#include "todo-list.h"

TaskList::TaskList()
{
	this->_allTasks = std::list<Task>();
}
//тело метода по добавлению всех задач
void TaskList::AddTask(Task newTask)
{
	this->_allTasks.push_back(newTask);
}

void TaskList::Print()
{
	for (auto currentTaskInList = this->_allTasks.begin(); currentTaskInList != this->_allTasks.end(); currentTaskInList++)
	{
		currentTaskInList->Print();
	}
}