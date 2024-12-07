#pragma once
#include "contactBook.h"
#include "person.h"
#include <string>

//����� ��� ���������
class Interface {
private:
	ContactBook book;
public:
	//�����������
	Interface(ContactBook);
	//get ��� ������� book
	ContactBook get_book();
	//������� � ������ 
	void start_page();
	//������� ����
	void main_page();
	//�������� ���������� ��������
	void add_contact_page();
	//�������� �������� ��������
	void del_contact_page();
	//�������� ��������� ���� ���������
	void check_contacts_page();
	//����������������� �����
	void line();
	//������� ���������� � ��������
	std::string parse_info(Person* contact);
	//�������� �� ���������� ����� (������ ���� � ������ person)
	bool check_number(std::string new_number);
};