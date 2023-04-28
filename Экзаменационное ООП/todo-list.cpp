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

bool TaskList::ChechTaskIteratorByName(std::string taskName)
{
	bool resultSearch = false;

	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetTaskName() == taskName)
		{
			resultSearch = true;
			break;
		}
	}

	return resultSearch;
}

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
//тело метода по удалению дела
bool TaskList::DeleteTask(std::string taskName)
{
	// Результат удаления дела
	bool deleteResult = false;

	if(this->ChechTaskIteratorByName(taskName))
	{
		this->_allTasks.erase(this->SearchTaskIteratorByName(taskName));
		deleteResult = true;
	}

	return deleteResult;
}
//тело по редактированию дела
void TaskList::EditorTask(std::string taskName)
{
	Task editedTask = Task::CreateTask();
	this->_allTasks.emplace(this->SearchTaskIteratorByName(taskName), editedTask);

}
