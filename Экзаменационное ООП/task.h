#pragma once
#include <string>
#include <iostream>
using namespace std;
//����� ����
class Task
{
	//�������� ������ ����
private:                                                                
	string _name;

	int _priority;

	string _description;

	int* _arrayData;

public:
	// �����������
	Task(string name, int priority, string description, int* arrayData)  
	{
		// ��������
		_name = name;
		//���������
		_priority = priority;                                                
		//��������
		_description = description;                                       
		//���� ���������� ������
		_arrayData = arrayData;                                            
	}
	
	/// <summary>
	/// ������� ��������� � ������
	/// </summary>
	void Print();  

	// ����������� ����� ��� �������� ������
	static Task CreateTask();

	// �������� �������� ������ (��� ���������� ������ � �������� �����)
	string GetTaskName();

	// ������� ��������� ����
	int GetPriority();
};