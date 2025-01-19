#include <iostream>

class Person {
public:
    std::string name, second_name, last_name;
};

int main()
{
    system("chcp 1251");

    Person p;
    std::string a, b, c;
    std::cout << "Введите имя: ";
    std::cin >> p.name;
    std::cout << "Введите фамилию: ";
    std::cin >> p.second_name;
    std::cout << "Введите отчество: ";
    std::cin >> p.last_name;
    
    std::cout << "ФИО: " << p.second_name<< " " << p.name << " " << p.last_name << std::endl;
    return 0;
}
