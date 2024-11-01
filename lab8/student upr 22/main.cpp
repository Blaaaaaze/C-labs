//¬ этом проекте работа по всем не контрольным задани€м, начина€ со второго задани€

#include <iostream>
#include <string>
#include "student.h"
#include <fstream>


int main()
{
    system("chcp 1251");

    //Student student01;
    //Student* student02 = new Student;



    std::string name;
    std::string last_name;
    int scores[5];

    std::cout << "Name: ";
    getline(std::cin, name);

    std::cout << "last name: ";
    getline(std::cin, last_name);

    Student *student02 = new Student(name, last_name);

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

    std::cout << "—редний балл у " << student02->get_name()
        << " " << student02->get_last_name() << " равен "
        << student02->get_average_score() << std::endl;

    delete student02;
    return 0;
}