#include <iostream>
#include "task.h"
#include "todo-list.h"
# include< Windows.h >
using namespace std;

int main()

{
	int actionChoice = 0;
	//ф-я использующая кодовую страницу для ввода данных(у нас русских букв)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\t\t\t\t Cписок дел" << endl;
	cout << " " << endl;
	cout << "Если вы хотите добавить новое дело нажмите 1. " << endl;
	cout << " " << endl;
	cout << "Если вы хотите удалить дело нажмите 2." << endl;
	cout << " " << endl;


	switch (actionChoice)
	{//добавить дело
	case 1:
	{
		//создаем новое дело
		Task tsk = Task::CreateTask();
	}
	//удалление дела
	case 2: 
	{

	}
	default:
		break;
	}
	
	//добавляем в список нов задачу 
	TaskList myList = TaskList();
	myList.AddTask(tsk);
	myList.Print();//выводим на экран
	}


}
