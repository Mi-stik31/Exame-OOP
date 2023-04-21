#pragma once


#include <string>
#include <iostream>
#include <list>
#include "task.h"

class TaskList
{
	/// <summary>
	/// Все дела
	/// </summary>
	std::list<Task> _allTasks;

public:
	TaskList();

	void AddTask(Task newTask);

	void Print();
};