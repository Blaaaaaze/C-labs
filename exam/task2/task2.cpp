// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int Fact(int a) {
    if (a == 1) return 1;
    else if (a > 1) return a * Fact(a - 1);
}

bool isChet(int a) {
    return (a % 2 == 0);
}

float squareRoot(int a) {
    return sqrt(a);
}

int sumNumbs(int a) {
    int ans = 0;
    for (int i = 0; i <= abs(a); i++) ans += i;
    if (a < 0) ans = -ans;
    return ans;
}

int main()
{
    system("chcp 1251");
    int var;
    std::cout << "Выберите вариант: ";
    std::cin >> var;
    int numb;
    std::cout << "Введите число: ";
    std::cin >> numb;

    switch (var)
    {
    case 1: 
        std::cout << Fact(numb);
        break;
    case 2:
        std::cout << isChet(numb);
        break;
    case 3:
        std::cout << squareRoot(numb);
        break;
    case 4:
        std::cout << sumNumbs(numb);
        break;
    default:
        break;
    }
    return 0;
}


