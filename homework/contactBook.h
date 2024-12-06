//Пока не работает
#pragma once
#include <string>
#include <vector>
#include "person.h"
#include <memory>

//Класс книги контактов. здесь реализована ассоциация
// Этот же класс реализует работу c текстовым файлом
class ContactBook {

	
public:
	std::vector<Person*> contacts;
	//Добавить контакт в книгу
	void add_contact(Person* new_contact); 
	//Удалить контакт
	void del_contact(Person* old_contact);
	//Записать всё в файл
	void write_file();
	//прочитать из файла
	void read_file();

	void show_contacts();

	std::vector<std::unique_ptr<Person>> get_contacts();

};