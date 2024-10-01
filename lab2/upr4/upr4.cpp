// upr4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    system("chcp 1251");

    int k, m, s = 0;

    std::cout << "Введите k: "; std::cin >> k;
    std::cout << "Введите m: "; std::cin >> m;

    for (int i = 1; i <= 100; i++) {
        if ((i > k) && (i < m)) {
            continue;
        }
        s += i;
    }

    std::cout << "Сумма равна " << s << std::endl;
    return 0;
}

