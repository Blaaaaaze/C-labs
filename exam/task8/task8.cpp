#include <iostream>
#include <string>

int revers(int value) {
    int ans = 0;
    while (value > 0) {
        ans = (ans * 10) + (value % 10);
        value /= 10;
    }
    return ans;
}

int main()
{
    system("chcp 1251");
    int numb;
    std::cout << "Введите число: ";
    std::cin >> numb;
    std::cout << revers(numb);

    return 0;
}


