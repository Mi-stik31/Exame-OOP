#include <iostream>
#include "task.h"
#include "todo-list.h"
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int actionChoice = 0;


	//ф-я использующая кодовую страницу для ввода данных(у нас русских букв)+изменение шрифта(для корректнй работы)
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//создаем список дел для записи новых дел
	TaskList myList = TaskList();

	while (actionChoice != 7)
	{
		cout << "\t\t\t\t Cписок дел" << endl;
		cout << " " << endl;
		cout << "Если вы хотите добавить новое дело нажмите 1. " << endl;
		cout << " " << endl;
		cout << "Если вы хотите удалить дело нажмите 2." << endl;
		cout << " " << endl;
		cout << "Если вы хотите редактировать дело нажмите 3." << endl;
		cout << " " << endl;
		cout << "Если вы хотите найти дело нажмите 4." << endl;
		cout << " " << endl;

		cin >> actionChoice;

		switch (actionChoice)
		{
			// Добавить новое дело
		case 1:
		{
			cin.ignore();

			// Создать новое дело
			Task newTask = Task::CreateTask();

			// Добавляем в список дел новую задачу 
			myList.AddTask(newTask);

			// Очищаем консоль
			system("cls");

			// Выводим на экран информацию о всех задачах
			myList.Print();
			break;
		}
		// Удалить дело из списка задач
		case 2:
		{
			cin.ignore();

			string nameTaskForSearch = "";
			cout << "Введите название дела для удаления: " << endl;
			getline(cin, nameTaskForSearch);

			// Очищаем консоль
			system("cls");

			if (!myList.DeleteTask(nameTaskForSearch))
			{
				std::cout << "Дело не было удалено" << std::endl;
			}

			break;
		}
		case 3:
		{
			cin.ignore();

			string nameTaskForSearch = "";
			cout << "Введите название дела для редактирования: " << endl;
			getline(cin, nameTaskForSearch);

			// Очищаем консоль
			system("cls");

			myList.EditorTask(nameTaskForSearch);

			// Очищаем консоль
			system("cls");

			myList.Print();
			break;
		}
		case 4:
		{// Выбор поиска
			int searchSelection = 0;
			cout << "Выберите пункт по которому вы хотите осуществить поиск дела: " << endl;
			cout << " " << endl;
			cout << "Если вы хотите найти дело по имени нажмите 1. " << endl;
			cout << " " << endl;
			cout << "Если вы хотите найти дело по приоритету нажмите 2." << endl;
			cout << " " << endl;
			cout << "Если вы хотите найти дело по описанию нажмите 3." << endl;
			cout << " " << endl;
			cout << "Если вы хотите найти дело по дате нажмите 4." << endl;
			cin >> searchSelection;

			switch (searchSelection)
			{
			case 1:
			{
				cin.ignore();
				string searchTaskName = "";
				cout << "Введите название дела котрое вы хотите найти: " << endl;
				getline(cin, searchTaskName);
				system("cls");
				myList.SearchByName(searchTaskName);
				break;
			}
			case 2:
			{
				cin.ignore();
				int priority = 0;
				cout << "Введите цифу приоритета дела для поиска: " << endl;
				cin >> priority;
				system("cls");
				myList.SearchByPriority(priority);
				break;
			}
			case 3:
			{
				cin.ignore();
				string searchDescription = "";
				cout << "Введите слово или фразу для поиска: " << endl;
				getline(cin, searchDescription);
				system("cls");
				myList.SearchByDescription(searchDescription);
				break;
			}
			case 4:
			{
				cin.ignore();
				int date[3] = {};
				cout << "Введите дату дела для поиска: " << endl;
				cout << "Введите день: ";
				cin >> date[0];
				cout << "Введите месяц: ";
				cin >> date[1];
				cout << "Введите год: ";
				cin >> date[2];
				system("cls");
				myList.SearchDate(date);
				break;
			}
			}
		}
		}
		}
	}