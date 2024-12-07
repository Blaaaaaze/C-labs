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
	void del_contact(const std::string& name, const std::string& surname);
	//Записать всё в файл
	void write_file();
	//прочитать из файла
	void read_file();
	//возвращает вектор контактов
	std::vector<Person*> get_contacts();
	//Создание экземпляра контакта
	void create_contact(std::string, std::string, std::string, int);
};