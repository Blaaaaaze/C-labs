//���� �� ��������
#pragma once
#include <string>
#include <vector>
#include "person.h"
#include <memory>

//����� ����� ���������. ����� ����������� ����������
// ���� �� ����� ��������� ������ c ��������� ������
class ContactBook {
private:
	std::vector<Person*> contacts;

public:

	//�������� ������� � �����
	void add_contact(Person* new_contact);
	//������� �������
	void del_contact(const std::string&);
	//�������� �� � ����
	void write_file();
	//��������� �� �����
	void read_file();

	void show_contacts();

	std::vector<Person*> get_contacts();

};