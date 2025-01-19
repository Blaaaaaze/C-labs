#include <iostream>

int main()
{
    system("chcp 1251");

    /*int a[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Введите [" << i << "] элемент массива: ";
        std::cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        ans += a[i];
    }

    std::cout << ans;*/

    /*int massLen;
    std::cout << "Введите длину массива: ";
    std::cin >> massLen;
    int* a = new int[massLen];

    for (int i = 0; i < massLen; i++) {
        std::cout << "Введите [" << i << "] элемент массива: ";
        std::cin >> a[i];
    }

    for (int i = 0; i < massLen; i++) {
        if (a[i] < 0) std::cout << a[i] << std::endl;
    }*/

    /*float a[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Введите [" << i << "] элемент массива: ";
        std::cin >> a[i];
    }
    int ans = 1;
    for (int i = 0; i < 10; i++) {
        ans *= a[i];
    }

    std::cout << ans;*/

    int massLen;
    std::cout << "Введите длину массива: ";
    std::cin >> massLen;
    int* a = new int[massLen];

    for (int i = 0; i < massLen; i++) {
        std::cout << "Введите [" << i << "] элемент массива: ";
        std::cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < massLen; i++) {
        if (a[i] < 0) ans += a[i];
    }
    std::cout << ans;
}


