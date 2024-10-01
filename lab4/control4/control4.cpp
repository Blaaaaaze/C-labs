#include <iostream>

bool Input(int &a, int &b) {
    std::cout << "Введите через пробел 2 числа (первое меньше второго): "; std::cin >> a >> b;

    if (a < b) return true;
    return false;
}   


int main()
{
    system("chcp 1251");
    int a, b;

    if (Input(a, b) == false) {
        std::cerr << "error";
        return 1;
    }
    int s = a + b;
    std::cout << s;
    return 0;
}

