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

	int _prioriti;

	string _description;

	int* _arrayData;



public:
	// конструктор
	Task(string name, int prioriti, string description, int* arrayData)  
	{
		// название
		_name = name;
		//приоритет
		_prioriti = prioriti;                                                
		//описание
		_description = description;                                       
		//дата выполнения задачи
		_arrayData = arrayData;                                            
	}
	
	/// <summary>
	/// Вывести инфомацию о задаче
	/// </summary>
	void Print();  

	//статический метод для создания задачи
	static Task CreateTask();


	string GetTaskName();
};