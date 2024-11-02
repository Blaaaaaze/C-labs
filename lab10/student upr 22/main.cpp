//Задание не контрольное, почему-то не работало, решил не париться и скипнуть, control работает как надо
//ЭТО ЗАДАНИЕ НЕ РАБОЧЕЕ

#include <iostream>
#include <string>
#include "student.h"
#include <fstream>
#include "IdCard.h"


int main()
{
    system("chcp 1251");

    //Student student01;
    //Student* student02 = new Student;

    IdCard idc(123, "Базовый"); 

    std::string name;
    std::string last_name;
    int scores[5];

    std::cout << "Name: ";
    getline(std::cin, name);

    std::cout << "last name: ";
    getline(std::cin, last_name);

    Student *student02 = new Student(name, last_name, idc);

    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i + 1 << ": ";
        std::cin >> scores[i];
        sum += scores[i];
    }

    student02->set_name(name);
    student02->set_last_name(last_name);
    student02->set_scores(scores);

    double average_score = sum / 5.0;
    student02->set_average_score(average_score);

    std::cout << "Средний балл у " << student02->get_name()
        << " " << student02->get_last_name() << " равен "
        << student02->get_average_score() << std::endl;
    std::cout << "Idcard" << student02->getIdCard().getNumber() << std::endl;
    std::cout << "category" << student02->getIdCard().getCategory() << std::endl;

    delete student02;
    return 0;
}