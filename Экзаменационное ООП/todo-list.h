#pragma once


#include <string>
#include <iostream>
#include <list>
#include "task.h"

class TaskList
{
private:
	/// <summary>
	/// ��� ����
	/// </summary>
	std::list<Task> _allTasks;

	/// <summary>
	/// �������� ��������� �� ������ �� � �����
	/// </summary>
	/// <param name="taskName">�������� ������</param>
	/// <returns>��������� �� ������ � ������ �����</returns>
	std::list<Task>::iterator SearchTaskIteratorBy(std::string taskName);

	/// <summary>
	/// �������� ��������� �� ������ �� � ����������
	/// </summary>
	/// <param name="taskName">��������� ������</param>
	/// <returns>��������� �� ������ � ������ �����</returns>
	std::list<Task>::iterator SearchTaskIteratorBy(int priority);

	/// <summary>
	/// ��������� ���������� �� ������ � ������
	/// </summary>
	/// <param name="taskName">�������� ������</param>
	/// <returns>���������� �� ������</returns>
	bool ChechTaskIteratorBy(std::string taskName);

	/// <summary>
	/// ��������� ���������� �� ������ � ������
	/// </summary>
	/// <param name="taskName">��������� ������</param>
	/// <returns>���������� �� ������</returns>
	bool ChechTaskIteratorBy(int priority);
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	TaskList();

	/// <summary>
	/// �������� ����� ����
	/// </summary>
	/// <param name="newTask">����� ������</param>
	void AddTask(Task newTask);

	/// <summary>
	/// ������� ���������� � ���� �������
	/// </summary>
	void Print();

	/// <summary>
	/// ������� ����
	/// </summary>
	/// <param name="taskName">�������� ������</param>
	bool DeleteTask(std::string taskName);

	/// <summary>
	/// ������������� ����
	/// </summary>
	/// <param name="taskName">�������� ������</param>
	void EditorTask(std::string taskName);

	/// <summary>
	/// ����� ���� �� �����
	/// <param name="taskName">�������� ������</param>	
	/// </summary>	
	void SearchByName(std::string taskName);

	/// <summary>
	/// ����� ���� �� ����������
	/// </summary>
	/// <param name="priority">��������� ����</param>
	void SearchByPriority(int priority);

};