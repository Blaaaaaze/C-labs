#include "friend.h"
#include "person.h"
#include <string>

Friend::Friend(std::string contact_name, std::string contact_second_name, std::string contact_phone_number) :
	Person::Person(contact_name, contact_second_name, contact_phone_number) {
	this->role = "������ ������";
}

Friend::Friend(std::string contact_name, std::string contact_phone_number) :
	Person::Person(contact_name, contact_phone_number) {
	this->role = "������ ������";
}

std::string Friend::get_role() {
	return this->role;
}

std::string Friend::show_info() {
	return this->get_name() + ',' + this->get_second_name() + ',' + this->get_phone_number() + ',' + this->get_role();
}