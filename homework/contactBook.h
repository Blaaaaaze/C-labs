//���� �� ��������
#pragma once
#include <string>
#include <vector>
#include "person.h"
#include <memory>

//����� ����� ���������. ����� ����������� ����������
// ���� �� ����� ��������� ������ c ��������� ������
class ContactBook {

	
public:
	std::vector<Person*> contacts;
	//�������� ������� � �����
	void add_contact(Person* new_contact); 
	//������� �������
	void del_contact(Person* old_contact);
	//�������� �� � ����
	void write_file();
	//��������� �� �����
	void read_file();

	void show_contacts();

	std::vector<std::unique_ptr<Person>> get_contacts();

};