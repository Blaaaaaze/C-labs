#pragma once
#include <string>

//Родительский класс для других типов контактов. 
//Класс абстрактный - есть виртуальный метод
class Person{
	private:
		std::string name;
		std::string second_name;
		std::string phone_number;

	public:
		//Класс исключения
		class phoneError {
		public:
			std::string origin;
			std::string strvalue;

			phoneError(std::string orig, std::string number) {
				origin = orig;
				strvalue = number;
			}
		};
		//Конструкторы
		Person(std::string, std::string, std::string);
		Person(std::string, std::string);

		//setы
		void set_name(std::string);

		void set_second_name(std::string);

		void set_phone_number(std::string);

		//getы
		std::string get_name();

		std::string get_second_name();

		std::string get_phone_number();

		//Проверка корректности номера телефона
		bool check_number(std::string);

		//Виртуальный метод
		virtual std::string show_info() = 0;
		//Перегрузка оператора, чтобы сортировалось в алфавитном порядке
		bool operator< (const Person& pers2) const;
};
