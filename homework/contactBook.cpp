#include <string>
#include <vector>
#include "person.h"
#include "student.h"
#include "family.h"
#include "friend.h"
#include "colleague.h"
#include "contactBook.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>

void ContactBook::add_contact(Person* new_contact) {
	contacts.push_back(std::move(new_contact));
	write_file();
}



//void ContactBook::del_contact(const std::string& name, const std::string& surname) {
//	// Используем std::remove_if для удаления контактов с заданным именем и фамилией
//	contacts.erase(std::remove_if(contacts.begin(), contacts.end(),
//		[&name, &surname](Person* old_contact) {
//			return old_contact->get_name() == name && old_contact->get_second_name() == surname;
//		}), get_contacts().end());
//}

void ContactBook::del_contact(const std::string& name, const std::string& surname) {

	auto new_end = std::remove_if(contacts.begin(), contacts.end(),
		[&name, &surname](Person* old_contact) {
			
			if (old_contact == nullptr) return false; 

			
			/*if (!surname.empty()) {
				return old_contact->get_name() == name && old_contact->get_second_name() == surname;
			}*/
			
			return old_contact->get_name() == name && old_contact->get_second_name() == surname;
		});

	contacts.erase(new_end, contacts.end());
	write_file();
}




void ContactBook::write_file() {
	std::ofstream out("contacts", std::ios::out | std::ios::binary);
	if (!out) {
		std::cout << "Файл открыть невозможно";
		return; // Тут бы лучше тоже исключение добавить
	}

	for (const auto& contact : contacts) {
		out << contact->show_info() << std::endl;
	}
	
	out.close();
}

void ContactBook::read_file() {
	std::ifstream in("contacts", std::ios::in | std::ios::binary);
	if (!in) {
		std::cout << "Файл открыть невозможно";
		return; //Здесь тоже добавить исключение
	}

	contacts.clear();

	std::string line;
	while (std::getline(in, line)) {
		if (!line.empty()) {
			char delimiter = ',';
			std::vector<std::string> tokens;
			std::stringstream ss(line);
			std::string token;

			while (std::getline(ss, token, delimiter)) {
				tokens.push_back(token);
			}
			
			int size = tokens.size();
			
			if (tokens.back() == "Друзья по ВУЗу") {
				Person* obj = (tokens[1] != "") ? new Student(tokens[0], tokens[1], tokens[2]) : new Student(tokens[0], tokens[2]);
				contacts.push_back(obj);
			}
			else if (tokens.back() == "Родственники") {
				Person* obj = (tokens[1] != "") ? new Family(tokens[0], tokens[1], tokens[2]) : new Family(tokens[0], tokens[2]);
				contacts.push_back(obj);
			}
			else if (tokens.back() == "Коллеги") {
				Person* obj = (tokens[1] != "") ? new Colleague(tokens[0], tokens[1], tokens[2]) : new Colleague(tokens[0], tokens[2]);
				contacts.push_back(obj);
			}
			else if (tokens.back() == "Лучшие друзья") {
				Person* obj = (tokens[1] != "") ? new Friend(tokens[0], tokens[1], tokens[2]) : new Friend(tokens[0], tokens[2]);
				contacts.push_back(obj);
			}
		}
	}

	in.close();
}

std::vector<Person*> ContactBook::get_contacts() {
	return ContactBook::contacts;
}

void ContactBook::create_contact(std::string name, std::string second_name, std::string phone_number, int category) {
	if (category == 1) {
		Person* obj1 = new Student(name, second_name, phone_number);
		add_contact(obj1);
	}
	else if (category == 2) {
		Person* obj2 = new Family(name, second_name, phone_number);
		add_contact(obj2);
	}
	else if (category == 3) {
		Person* obj3 = new Friend(name, second_name, phone_number);
		add_contact(obj3);
	}
	else if (category == 4) {
		Person* obj4 = new Colleague(name, second_name, phone_number);
		add_contact(obj4);
	}
}
