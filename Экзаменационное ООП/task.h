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

	int _prioriti;

	string _description;

	int* _arrayData;



public:
	// �����������
	Task(string name, int prioriti, string description, int* arrayData)  
	{
		// ��������
		_name = name;
		//���������
		_prioriti = prioriti;                                                
		//��������
		_description = description;                                       
		//���� ���������� ������
		_arrayData = arrayData;                                            
	}
	
	/// <summary>
	/// ������� ��������� � ������
	/// </summary>
	void Print();  

	//����������� ����� ��� �������� ������
	static Task CreateTask();


	string GetTaskName();
};