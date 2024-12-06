#include "family.h"
#include "person.h"
#include <string>

Family::Family(std::string contact_name, std::string contact_second_name, std::string contact_phone_number) :
	Person::Person(contact_name, contact_second_name, contact_phone_number) {
	this->role = "Родственники";
}

Family::Family(std::string contact_name, std::string contact_phone_number) :
	Person::Person(contact_name, contact_phone_number) {
	this->role = "Родственники";
}

std::string Family::get_role() {
	return this->role;
}

std::string Family::show_info() {
	return this->get_name() + ',' + this->get_second_name() + ',' + this->get_phone_number() + ',' + this->get_role();
}