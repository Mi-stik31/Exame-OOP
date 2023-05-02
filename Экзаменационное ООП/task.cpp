#include "task.h"

void Task::Print()
{
	std::cout << "Название дела: " << this->_name << std::endl;
	std::cout<<"Приоритет дела: " << this->_prioriti << std::endl;
	std::cout << "Описание дела: " << this->_description << std::endl;
	std::cout << "Дата исполнения дела: " <<  std::endl;
	std::cout << "День: " << this->_arrayData[0] << std::endl;
	std::cout << "Месяц: " << this->_arrayData[1] << std::endl;
	std::cout << "Год: " << this->_arrayData[2] << std::endl;

}
//тело метода нов дело
Task Task::CreateTask()    
{
	//библиотека для считывания строки входного потока
	string name;
	cout << "Введите название дела: " << endl;
	getline(cin, name);                                        

	int prioriti;
	cout << "Введите приоритет вашей задачи от 1 до 9: " << endl;
	cin >> prioriti;
	cin.ignore();

	string description;
	cout << "Введите описание вашего дела: " << endl;
	getline(cin, description);


	int* arrayData = new int[3];
	cout << "Введите число для выполнения задачи : " << endl;
	cin >> arrayData[0];
	cout << "Введите месяц для выполнения задачи : " << endl;
	cin >> arrayData[1];
	cout << "Введите год для выполнения задачи : " << endl;
	cin >> arrayData[2];

	// Создаем объект (новая задача)
	Task newTask(name, prioriti, description, arrayData);

	return newTask;
}
//
string Task::GetTaskName()
{
	return this->_name;
}
