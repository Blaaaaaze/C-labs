#include "colleague.h"
#include "person.h"
#include <string>

Colleague::Colleague(std::string contact_name, std::string contact_second_name, std::string contact_phone_number) :
	Person::Person(contact_name, contact_second_name, contact_phone_number) {
	this->role = "�������";
}

Colleague::Colleague(std::string contact_name, std::string contact_phone_number) :
	Person::Person(contact_name, contact_phone_number) {
	this->role = "�������";
}

std::string Colleague::get_role() {
	return this->role;
}

std::string Colleague::show_info() {
	return this->get_name() + " " + this->get_second_name() + " ����� ��������: " + this->get_phone_number() + '\n' + "���������: " + this->get_role() + '.';
}