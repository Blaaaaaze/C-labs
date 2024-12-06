//Пока не работает
#pragma once
#include <string>
#include <vector>
#include "person.h"
#include <memory>

//Класс книги контактов. здесь реализована ассоциация
// Этот же класс реализует работу c текстовым файлом
class ContactBook {
private:
	std::vector<Person*> contacts;

public:

	//Добавить контакт в книгу
	void add_contact(Person* new_contact);
	//Удалить контакт
	void del_contact(const std::string&);
	//Записать всё в файл
	void write_file();
	//прочитать из файла
	void read_file();

	void show_contacts();

	std::vector<Person*> get_contacts();

};