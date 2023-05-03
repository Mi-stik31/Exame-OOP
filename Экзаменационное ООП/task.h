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
		//дата выполнени€ задачи
		_arrayData = arrayData;                                            
	}
	
	/// <summary>
	/// ¬ывести инфомацию о задаче
	/// </summary>
	void Print();  

	// —татический метод дл€ создани€ задачи
	static Task CreateTask();

	// ѕолучить название задачи (дл€ дальнейшей работы с выбанным делом)
	string GetTaskName();

	// ѕолуить приоритет дела
	int GetPriority();
};