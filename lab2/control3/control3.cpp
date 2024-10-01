// control3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    system("chcp 1251");

    int money;
    std::cout << "Укажиите сумму: "; std::cin >> money;

    int summ = 0;
    int coins = 0;
    while (summ != money) {
        if (summ + 10 <= money) {
            summ += 10;
            coins++;
        }
        else if (summ + 5 <= money) {
            summ += 5; 
            coins++;
        }
        else if (summ + 2 <= money) {
            summ += 2;
            coins++;
        }
        else {
            summ++;
            coins++;
        }
    }

    std::cout << "Использовано " << coins << " монет";
    return 0;
}

