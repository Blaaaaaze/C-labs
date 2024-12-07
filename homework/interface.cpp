#include <iostream>
#include "interface.h"
#include <string>
#include <vector>
#include "contactBook.h"
#include "person.h"
#include "student.h"
#include "friend.h"
#include "colleague.h"
#include "family.h"
#include <sstream>
#include <limits>


Interface::Interface(ContactBook new_book) {
	this->book = new_book;
}

void Interface::start_page() {
	std::cout << "Добро пожаловать в телефонную книгу!\n";
	this->book.read_file();
	main_page();
}

ContactBook Interface::get_book() {
	return book;
}

void Interface::main_page() {
	std::cout << "Доступные действия:\n";
	std::cout << "1. Просмотреть контакты;\n" <<
		"2. Добавить контакт;\n" <<
		"3. Удалить контакт;\n" <<
		"4. Выйти." << std::endl;
	line();
	std::cout << "Введите номер команды: \n";
	int choice;
	std::cin >> choice;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	switch (choice)
	{
	case 1: 
		check_contacts_page();
		break;
	case 2:
		add_contact_page();
		break;
	case 3: 
		del_contact_page();
		break;
	case 4:
		std::cout << "Вы вышли из системы";
		exit(0);
	default:
		std::cout << "Ошибка! Такой команды нет. Повторите попытку\n \n";
		main_page();
	}
}

void Interface::line() {
	std::cout << '\n';
	std::cout << "----------------------------------------------------------------------------------------";
	std::cout << '\n';
}

void Interface::check_contacts_page() {
	int size = this->book.get_contacts().size();
	for (int i = 0; i < size; i++) {
		std::cout << this->parse_info(this->book.get_contacts()[i]);
		line();
	}
	std::cout << "Нажмите Enter, чтобы вернуться в главное меню\n";
	std::string a;
	getline(std::cin, a);
	line();
	main_page();
}

std::string Interface::parse_info(Person* contact) {
	std::string info = contact->show_info();
	char delimiter = ',';
	std::vector<std::string> tokens;
	std::stringstream ss(info);
	std::string token;

	while (std::getline(ss, token, delimiter)) {
		tokens.push_back(token);
	}
	
	return tokens[0] + " " + tokens[1] + "\n Номер телефона: " + tokens[2] + "\n Категория: " + tokens[3];
}

void Interface::add_contact_page() {
	
	std::string name, second_name, phone_number;
	int cat = 0;
	do {
		std::cout << "Введите имя: ";
		std::cin >> name;
		if (name.empty()) std::cout << "Имя должно быть заполнено обязательно. Повторите попытку\n";
	} while (name.empty());
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Введите фамилию: ";
	getline(std::cin, second_name);

	do {
		std::cout << "Введите номер телефона: ";
		getline(std::cin, phone_number);
		if (phone_number.empty()) std::cout << "Номер телефона должен быть заполнен обязательно. Повторите попытку\n";
		if (!(check_number(phone_number))) {
			phone_number = "";
			std::cout << "Неподдерживаемый формат номера. Повторите попытку\n";
		}
	} while (phone_number.empty());

	do {
		std::cout << "1. Друзья по ВУЗу\n" <<
			"2. Родственники\n" <<
			"3. Лучшие друзья\n" <<
			"4. Коллеги\n";
		std::cin >> cat;
		if (cat < 0 || cat > 4) {
			std::cout << "Такого варианта нет. Повторите попытку\n";
			cat = 0;
		}
	} while (cat == 0);

	this->book.create_contact(name, second_name, phone_number, cat);

	std::cout << "Контакт создан\n" << "Возвращение в главное меню";
	line();
	main_page();
}

void Interface::del_contact_page() {
	std::string name, second_name;
	do {
		std::cout << "Введите имя контакта, который хотите удалить: ";
		std::cin >> name;
		if (name.empty()) std::cout << "Обязательно введите имя контакта, который хотите удалить\n";
		if (name == "-") {
			std::cout << "Вы вышли в главное меню\n";
			line();
			main_page();
			return;
		}
	} while (name.empty());
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	std::cout << "Введите фамилию контакта, который хотите удалить (если её нет, просто нажмите enter): ";
	getline(std::cin, second_name);

	this->book.del_contact(name, second_name);
	std::cout << "Операция успешно произведена\n";
	std::cout << "Переход в главное меню\n";
	line();
	main_page();
}

bool Interface::check_number(std::string new_number) {
	return ((new_number.length() == 12 && new_number.substr(0, 2) == "+7") || (new_number.length() == 11 && new_number[0] == '8'));
}