#include <iostream>
#include <math.h>

int main()
{
    system("chcp 1251");

    int n; /*Взял int, так как число простое => целое*/
    std::cout << "Введите ваше число: "; std::cin >> n;


    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            std::cout << "Число не является суперпростым";
            return 0;
        }
    }
    /*Здесь остаются уже минимум простые числа*/
    int cnt = 0;
    
    for (int i = 2; i <= n; i++) {
        bool flag = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) { flag = false; break; }
        }
        if (flag) { 
            cnt++;
        }
    }

    for (int i = 2; i <= sqrt(cnt); i++) {
        if (cnt % i == 0) {
            std::cout << "Число не является суперпростым";
            return 0;
        }
    }

    if (cnt != 1) std::cout << "Число суперпростое"; 
    else std::cout << "Число не является суперпростым";
    return 0;
}

