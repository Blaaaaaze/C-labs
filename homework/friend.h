#pragma once
#include <string>
#include "person.h"

class Friend : public Person {
private:
	std::string role;
public:
	//Конструкторы
	Friend(std::string, std::string, std::string);
	Friend(std::string, std::string);

	std::string show_info() override;

	std::string get_role();
};