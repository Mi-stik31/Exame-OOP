#include <iostream>
#include "task.h"
#include "todo-list.h"
# include< Windows.h >
using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
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

	//создаем список дел для записи новых дел
	TaskList myList = TaskList();
	cin >> actionChoice;

	switch (actionChoice)
	{
	case 1: 
	{
		//создаем новое дело
		Task newTask = Task::CreateTask();
		//добавляем в список нов задачу 
		myList.AddTask(newTask);
		break;
	}
	//удалление дела
	case 2: 
	{

		string	taskName = 0;
		cout << "Введите название дела для удаления." << endl;
		cin >> taskName;
		myList.DeleteTask(taskName);
		myList.Print();//выводим на экран
		break;
	}
	case 3: 
	{


		string	changedTasc = 0;
		cout << "Введите название дела для редактирования." << endl;
		cin >> changedTasc;
		myList.EditorTask(changedTasc);
		break;
	}
	}
}
