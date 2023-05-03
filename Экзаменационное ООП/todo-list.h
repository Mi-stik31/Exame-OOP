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
	/// Получить указатель на задачу по её имени
	/// </summary>
	/// <param name="taskName">Название задачи</param>
	/// <returns>Указатель на задачу в списке задач</returns>
	std::list<Task>::iterator SearchTaskIteratorBy(std::string taskName);

	/// <summary>
	/// Получить указатель на задачу по её приоритету
	/// </summary>
	/// <param name="taskName">Приоритет задачи</param>
	/// <returns>Указатель на задачу в списке задач</returns>
	std::list<Task>::iterator SearchTaskIteratorBy(int priority);

	/// <summary>
	/// Проверить существует ли задача в списке
	/// </summary>
	/// <param name="taskName">Название задачи</param>
	/// <returns>Существует ли задача</returns>
	bool ChechTaskIteratorBy(std::string taskName);

	/// <summary>
	/// Проверить существует ли задача в списке
	/// </summary>
	/// <param name="taskName">Приоритет задачи</param>
	/// <returns>Существует ли задача</returns>
	bool ChechTaskIteratorBy(int priority);
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	TaskList();

	/// <summary>
	/// Добавить новое дело
	/// </summary>
	/// <param name="newTask">Новая задача</param>
	void AddTask(Task newTask);

	/// <summary>
	/// Вывести информацию о всех задачах
	/// </summary>
	void Print();

	/// <summary>
	/// Удалить дело
	/// </summary>
	/// <param name="taskName">Название задачи</param>
	bool DeleteTask(std::string taskName);

	/// <summary>
	/// Редактировать дело
	/// </summary>
	/// <param name="taskName">Название задачи</param>
	void EditorTask(std::string taskName);

	/// <summary>
	/// Поиск дела по имени
	/// <param name="taskName">Название задачи</param>	
	/// </summary>	
	void SearchByName(std::string taskName);

	/// <summary>
	/// Поиск дела по приоритету
	/// </summary>
	/// <param name="priority">Приоритет дела</param>
	void SearchByPriority(int priority);

};