#pragma once
#include <string>
#include "person.h"

class Colleague : public Person {
private:
	std::string role;
public:
	//Конструкторы
	Colleague(std::string, std::string, std::string);
	Colleague(std::string, std::string);

	std::string show_info() override;

	std::string get_role();
};