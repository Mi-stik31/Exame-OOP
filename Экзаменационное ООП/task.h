#pragma once
#include <string>
#include <iostream>
using namespace std;
//класс дело
class Task
{
	//свойства класса дело
private:                                                                
	string _name;

	int _priority;

	string _description;

	int* _arrayData;

public:
	// конструктор
	Task(string name, int priority, string description, int* arrayData)  
	{
		// название
		_name = name;
		//приоритет
		_priority = priority;                                                
		//описание
		_description = description;                                       
		//дата выполнения задачи
		_arrayData = arrayData;                                            
	}
	
	/// <summary>
	/// Вывести инфомацию о задаче
	/// </summary>
	void Print();  

	// Статический метод для создания задачи
	static Task CreateTask();

	// Получить название задачи (для дальнейшей работы с выбанным делом)
	string GetTaskName();

	// Полуить приоритет дела
	int GetPriority();

	// Получить описание дела
	string GetDescription();

	// Полуить дату дела
	int* GetArrayData();
};