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
	/// <summary>
	/// добавить новое дело
	/// </summary>
	/// <param name="newTask"></param>
	void AddTask(Task newTask);

	/// <summary>
	/// Вывести информацию о всех задачах
	/// </summary>
	void Print();

	/// <summary>
	/// Удалть дело
	/// </summary>
	/// <param name="taskName"></param>
	bool DeleteTask(std::string taskName);
	/// <summary>
	/// Редактировать дело
	/// </summary>
	/// <param name="taskName"></param>
	void EditorTask(std::string taskName);
	/// <summary>
	/// Поиск дела по имени
    /// <param name="taskName"></param>	
	/// </summary>	
	void SearchByName(std::string taskName);