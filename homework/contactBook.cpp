#include <string>
#include <vector>
#include "person.h"
#include "contactBook.h"
#include <fstream>

void ContactBook::add_contact(std::unique_ptr<Person> new_contact) {
	contacts.push_back(std::move(new_contact));
}

void ContactBook::del_contact(const std::string& name) {
	contacts.erase(std::remove_if(contacts.begin(), contacts.end(),
		[&name](const std::unique_ptr<Person>& old_contact) {
			return old_contact->getName() == name;
		}), contacts.end());
}
};


void ContactBook::write_file() {
	std::ofstream out("contacts", std::ios::out | std::ios::binary);
	if (!out) {
		std::cout << "Файл открыть невозможно";
		return 1; // Тут бы лучше тоже исключение добавить
	}

	out.write((char*)this->contacts, sizeof(contacts));
	out.close;
}

void ContactBook::read_file() {
	std::ifstream in("contacts".std::ios::in | std::ios::binary);
	if (!in) {
		std::count << "Файл открыть невозможно";
		return 1; //Здесь тоже добавить исключение
	}

	in.read((char*)&contacts, sizeof(contacts));
}

std::vector<std::unique_ptr<Person>> ContactBook::get_contacts() {
	return ContactBook::contacts;
}

void ContactBook::show_contacts() {
	for (const auto& contact : contacts) {
		contact->show_info();
	}
}