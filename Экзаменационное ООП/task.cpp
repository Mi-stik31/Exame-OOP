#include "task.h"

void Task::Print()
{
	
	std::cout << "Ќазвание задачи: " << this->_name << std::endl;
}
//тело метода нов задача
Task Task::CreateTask()    
{
	//библиотека дл€ считывани€ строки входного потока
	string name;
	cout << "¬ведите название дела: " << endl;
	getline(cin, name);                                         

	int prioriti;
	cout << "¬ведите приоритет вашей задачи от 1 до 9: " << endl;
	cin >> prioriti;
	cin.ignore();

	string description;
	cout << "¬ведите описание вашего дела: " << endl;
	getline(cin, description);


	int arrayData[3] = {};
	cout << "¬ведите число дл€ выполнени€ задачи : " << endl;
	cin >> arrayData[0];
	cout << "¬ведите мес€ц дл€ выполнени€ задачи : " << endl;
	cin >> arrayData[1];
	cout << "¬ведите год дл€ выполнени€ задачи : " << endl;
	cin >> arrayData[2];
	//создаем экземпл€р класса (нова€ задача)
	Task newTask(name, prioriti, description, arrayData);          

	return newTask;
}
