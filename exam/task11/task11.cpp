#include <iostream>

bool isProst(int numb) {
    if (numb == 1) return false;
    for (int i = 2; i <= sqrt(numb); i++) {
        if (numb % i == 0) return false;
    }
    return true;
}

int main()
{
    system("chcp 1251");
    for (int i = 1; i <= 10000; i++) {
        if (isProst(i)) std::cout << i << std::endl;
    }

}

