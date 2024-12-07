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
	void del_contact(const std::string& name, const std::string& surname);
	//�������� �� � ����
	void write_file();
	//��������� �� �����
	void read_file();
	//���������� ������ ���������
	std::vector<Person*> get_contacts();
	//�������� ���������� ��������
	void create_contact(std::string, std::string, std::string, int);
};