#include <iostream>
#include <random>

int main()
{
    system("chcp 1251");

    std::srand(static_cast<unsigned int>(std::time(0)));

    int ans = std::rand() % 100 + 1;
    int cnt = 0;
    std::cout << "Мое число в диапазоне от 1 до 100." << std::endl;
    int var = 0;
    do {
        cnt++;
        std::cout << "Введите число: ";
        std::cin >> var;
        if (var < ans) std::cout << "Мое число больше" << std::endl;
        if (var > ans) std::cout << "Мое число меньше" << std::endl;
    } while (var != ans);
    std::cout << "Верно! Мое число: " << ans << std::endl;
    if (cnt < 3) std::cout << "мастер";
    else if (cnt < 6) std::cout << "Отличный";
    else if (cnt < 8) std::cout << "Хороший";
    else std::cout << "Плохой";
    return 0;
}


