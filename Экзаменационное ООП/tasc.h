#pragma once
#include <string>
#include <iostream>
using namespace std;

class Task
{
	//свойства класса дело
private:                                                                
	string _name;

	int _prioriti;

	string _description;

	int* _arrayData;



public:

	Task(string name, int prioriti, string description, int* arrayData)   // конструктор
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
	//метод вывода инф
	void Print();  

	//статический метод для создания задачи
	static Task CreateTask();
};
	                                                

