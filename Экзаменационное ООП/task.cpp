#include "task.h"

void Task::Print()
{
	std::cout << "�������� ����: " << this->_name << std::endl;
	std::cout<<"��������� ����: " << this->_prioriti << std::endl;
	std::cout << "�������� ����: " << this->_description << std::endl;
	std::cout << "���� � ����� ���������� ����: " << this->_arrayData << std::endl;

}
//���� ������ ��� ����
Task Task::CreateTask()    
{
	//���������� ��� ���������� ������ �������� ������
	string name;
	cout << "������� �������� ����: " << endl;
	getline(cin, name);                                         

	int prioriti;
	cout << "������� ��������� ����� ������ �� 1 �� 9: " << endl;
	cin >> prioriti;
	cin.ignore();

	string description;
	cout << "������� �������� ������ ����: " << endl;
	getline(cin, description);


	int arrayData[3] = {};
	cout << "������� ����� ��� ���������� ������ : " << endl;
	cin >> arrayData[0];
	cout << "������� ����� ��� ���������� ������ : " << endl;
	cin >> arrayData[1];
	cout << "������� ��� ��� ���������� ������ : " << endl;
	cin >> arrayData[2];
	//������� ��������� ������ (����� ������)
	Task newTask(name, prioriti, description, arrayData);          

	return newTask;
}
