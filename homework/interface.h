#pragma once

//Класс под интерфейс
class Interface {
	//Надпись в старте 
	void start_page();
	//Главное меню
	void main_page();
	//страница добавления контакта
	void add_contact_page();
	//страница удаления контакта
	void del_contact_page();
	//страница просмотра всех контактов
	void check_contacts_page();
};