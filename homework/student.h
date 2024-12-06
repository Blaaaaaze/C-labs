#pragma once
#include <string>
#include "person.h"

class Student: public Person {
private:

	std::string role;
public:
	//Конструкторы
	Student(std::string, std::string, std::string);
	Student(std::string, std::string);

	std::string show_info() override;

	std::string get_role();
};