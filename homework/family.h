#pragma once
#include <string>
#include "person.h"

class Family : public Person {
private:
	std::string role;
public:
	//Конструкторы
	Family(std::string, std::string, std::string);
	Family(std::string, std::string);

	std::string show_info() override;

	std::string get_role();
};