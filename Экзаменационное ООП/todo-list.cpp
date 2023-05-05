#include "todo-list.h"

std::list<Task>::iterator TaskList::SearchTaskIteratorBy(std::string taskName)
{
	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetTaskName().find(taskName))
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

std::list<Task>::iterator TaskList::SearchTaskIteratorByDescription(std::string description)
{
	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetTaskName().find(description))
		{
			return currentTask;
		}
	}
}

std::list<Task>::iterator TaskList::SearchTaskIteratorByData(int* arrayData)
{
	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetArrayData()[0] == arrayData[0] && 
			currentTask->GetArrayData()[1] == arrayData[1] &&
			currentTask->GetArrayData()[2] == arrayData[2])
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
		if (currentTask->GetTaskName().find(taskName))
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

bool TaskList::ChechTaskIteratorByDescription(std::string description)
{
	bool resultSearch = false;

	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetTaskName().find(description))
		{
			resultSearch = true;
			break;
		}
	}

	return resultSearch;
}

bool TaskList::ChechTaskIteratorByData(int* arrayData)
{
	bool resultSearch = false;

	for (auto currentTask = this->_allTasks.begin(); currentTask != this->_allTasks.end(); currentTask++)
	{
		if (currentTask->GetArrayData()[0] == arrayData[0] &&
			currentTask->GetArrayData()[1] == arrayData[1] &&
			currentTask->GetArrayData()[2] == arrayData[2])
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
		std::cout << "Такого приоритета не найдено, введите приоритет еще раз" << std::endl;
	}
}

void TaskList::SearchByDescription(std::string description)
{
	if (this->ChechTaskIteratorByDescription(description))
	{
		this->SearchTaskIteratorByDescription(description)->Print();
	}
	else
	{
		std::cout << "Такого описания не найдено, введите описание еще раз" << std::endl;
	}
}

void TaskList::SearchDate(int* arrayData)
{
		if (this->ChechTaskIteratorByData(arrayData))
		{
			this->SearchTaskIteratorByData(arrayData)->Print();
		}
		else
		{
			std::cout << "Такой  даты не найдено, введите дату еще раз" << std::endl;
		}
	
}
