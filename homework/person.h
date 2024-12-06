#pragma once
#include <string>

//������������ ����� ��� ������ ����� ���������. 
//����� ����������� - ���� ����������� �����
class Person{
	private:
		std::string name;
		std::string second_name;
		std::string phone_number;

	public:
		//����� ����������
		class phoneError {
		public:
			std::string origin;
			std::string strvalue;

			phoneError(std::string orig, std::string number) {
				origin = orig;
				strvalue = number;
			}
		};
		//������������
		Person(std::string, std::string, std::string);
		Person(std::string, std::string);

		//set�
		void set_name(std::string);

		void set_second_name(std::string);

		void set_phone_number(std::string);

		//get�
		std::string get_name();

		std::string get_second_name();

		std::string get_phone_number();

		//�������� ������������ ������ ��������
		bool check_number(std::string);

		//����������� �����
		virtual std::string show_info() = 0;
		//���������� ���������, ����� ������������� � ���������� �������
		bool operator< (const Person& pers2) const;
};
