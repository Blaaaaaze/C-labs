#include <string>
#include "person.h"

//Конструкторы
Person::Person(std::string contact_name, std::string contact_second_name,  std::string contact_phone_number) {
	if (!(check_number(contact_phone_number)))
		throw phoneError("В конструкторе", this->phone_number);

	this->name = contact_name;
	this->second_name = contact_second_name;
	this->phone_number = contact_phone_number;
	
}


Person::Person(std::string contact_name, std::string contact_phone_number) {
	this->name = contact_name;
	this->second_name = "";
	this->phone_number = contact_phone_number;
}

//setы

void Person::set_name(std::string new_name) {
	Person::name = new_name;
}

void Person::set_second_name(std::string new_second_name) {
	Person::second_name = new_second_name;
}



void Person::set_phone_number(std::string new_phone_number) {
	Person::phone_number = new_phone_number;
}

//getы

std::string Person::get_name() {
	return Person::name;
}

std::string Person::get_second_name() {
	return Person::second_name;
}



std::string Person::get_phone_number() {
	return Person::phone_number;
}

bool Person::check_number(std::string new_number) {
	//учитывая символ переноса
	return ((new_number.length() == 12 && new_number.substr(0, 2) == "+7") || (new_number.length() == 11 && new_number[0] == '8'));
}


bool Person::operator< (const Person& pers2) const {
	if (this->name == pers2.name) {
		return (this->second_name < pers2.second_name);
	}
	return (this->name < pers2.name);
}