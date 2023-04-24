#pragma once


#include <string>
#include <iostream>
#include <list>
#include "task.h"

class TaskList
{
private:
	/// <summary>
	/// Все дела
	/// </summary>
	std::list<Task> _allTasks;

	/// <summary>
	/// Поиск дела для удаления
	/// </summary>
	/// <param name="taskName"></param>
	/// <returns></returns>
	std::list<Task>::iterator SearchTaskIteratorByName(std::string taskName);
public:
	TaskList();

	void AddTask(Task newTask);

	void Print();

	void DeleteTask(std::string taskName);
};