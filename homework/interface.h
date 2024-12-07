#pragma once
#include "contactBook.h"
#include "person.h"
#include <string>

//Класс под интерфейс
class Interface {
private:
	ContactBook book;
public:
	//Конструктор
	Interface(ContactBook);
	//get для объекта book
	ContactBook get_book();
	//Надпись в старте 
	void start_page();
	//Главное меню
	void main_page();
	//Страница добавления контакта
	void add_contact_page();
	//Страница удаления контакта
	void del_contact_page();
	//Страница просмотра всех контактов
	void check_contacts_page();
	//Разграничительные линии
	void line();
	//Парсить информацию о контакте
	std::string parse_info(Person* contact);
	//Проверка на правильный номер (раньше была в классе person)
	bool check_number(std::string new_number);
};