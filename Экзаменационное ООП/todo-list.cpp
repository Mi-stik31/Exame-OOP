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
// Тело проверки существования задачи в списке
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
// Создаем список дел(для записи всех дел)
TaskList::TaskList()
{
	this->_allTasks = std::list<Task>();
}
// Тело метода по добавлению всех задач
void TaskList::AddTask(Task newTask)
{
	this->_allTasks.push_back(newTask);
}
// Тело метода по выводу всех задач
void TaskList::Print()
{
	for (auto currentTaskInList = this->_allTasks.begin(); currentTaskInList != this->_allTasks.end(); currentTaskInList++)
	{
		currentTaskInList->Print();
	}
}
// Тело метода по удалению дела
bool TaskList::DeleteTask(std::string taskName)
{
	// Результат удаления дела
	bool deleteResult = false;

	// Проверяем существует ли дело с таким названием в списке дел
	if(this->ChechTaskIteratorByName(taskName))
	{
		this->_allTasks.erase(this->SearchTaskIteratorByName(taskName));
		deleteResult = true;
	}

	return deleteResult;
}
// Тело по поиску дела по имени и его редактированию 
void TaskList::EditorTask(std::string taskName)
{
	if (this->ChechTaskIteratorByName(taskName))
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
// Тело поиска дела по имени
void TaskList::SearchByName(std::string taskName)
{
	if (this->ChechTaskIteratorByName(taskName)) 
	{

	}

}
