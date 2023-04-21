#include <iostream>
#include "task.h"
#include "todo-list.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	//создаем новую задачу
	Task tsk = Task::CreateTask();
	//добавляем в список нов задачу 
	TaskList myList = TaskList();
	myList.AddTask(tsk);
	myList.Print();//выводим на экран
}