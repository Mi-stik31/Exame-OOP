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

	/// <summary>
	/// Проверить существует ли задача в списке
	/// </summary>
	/// <param name="taskName"></param>
	/// <returns></returns>
	bool ChechTaskIteratorByName(std::string taskName);
public:
	TaskList();

	void AddTask(Task newTask);

	/// <summary>
	/// Вывести информацию о всех задачах
	/// </summary>
	void Print();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="taskName"></param>
	bool DeleteTask(std::string taskName);

	void EditorTask(std::string taskName);
};