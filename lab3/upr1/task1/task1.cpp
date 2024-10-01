#include <iostream>
#include <string>

void privet(std::string name) {
    std::cout << name << ", " << "hello!" << std::endl;
}

void privet(std::string name, int k) {
    std::cout << name << ", " << "hello!" << "you input " << k << std::endl;
}

int main()
{
    system("chcp 1251");
    std::string name;
    int k;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;

    std::cout << "Input number^ " << std::endl;
    std::cin >> k;

    privet(name);
    privet(name, k);
    return 0;
}


