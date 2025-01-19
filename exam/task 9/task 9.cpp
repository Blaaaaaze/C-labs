#include <iostream>

int nod(int a, int b) {
    int ans = 1;
    for (int i = 1; i <= std::min(a, b); i++) {
        if ((a % i == 0) && (b % i == 0)) ans = i;
    }
    return ans;
}

int main()
{
    system("chcp 1251");

    std::cout << nod(93, 48) << std::endl;
    std::cout << nod(12, 60) << std::endl;
}


