#include "todo-list.h"

std::list<Task>::iterator TaskList::SearchTaskIteratorBy(std::string taskName)
{
	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetTaskName() == taskName)
		{
			return currentTask;
		}
	}
}

std::list<Task>::iterator TaskList::SearchTaskIteratorBy(int priority)
{
	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetPriority() == priority)
		{
			return currentTask;
		}
	}
}

bool TaskList::ChechTaskIteratorBy(std::string taskName)
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

bool TaskList::ChechTaskIteratorBy(int priority)
{
	bool resultSearch = false;

	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetPriority() == priority)
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

bool TaskList::DeleteTask(std::string taskName)
{
	// Результат удаления дела
	bool deleteResult = false;

	// Проверяем существует ли дело с таким названием в списке дел
	if(this->ChechTaskIteratorBy(taskName))
	{
		this->_allTasks.erase(this->SearchTaskIteratorBy(taskName));
		deleteResult = true;
	}

	return deleteResult;
}

void TaskList::EditorTask(std::string taskName)
{
	if (this->ChechTaskIteratorBy(taskName))
	{
		Task editedTask = Task::CreateTask();
		this->DeleteTask(taskName);
		this->AddTask(editedTask);
	}
	else
	{
		std::cout << "Такого дела не найдено, введите дело еще раз" << std::endl;
	}
}

void TaskList::SearchByName(std::string taskName)
{
	if (this->ChechTaskIteratorBy(taskName)) 
	{
		this->SearchTaskIteratorBy(taskName)->Print();
	}
	else
	{
		std::cout << "Такого дела не найдено, введите дело еще раз" << std::endl;
	}
}

void TaskList::SearchByPriority(int priority)
{
	if (this->ChechTaskIteratorBy(priority))
	{
		this->SearchTaskIteratorBy(priority)->Print();
	}
	else
	{
		std::cout << "Такого дела не найдено, введите дело еще раз" << std::endl;
	}
}
