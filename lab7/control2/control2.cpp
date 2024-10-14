#include <iostream>
#include <windows.h>
#include <string>

struct KvadUr
{
    int x1;
    int x2;
};

KvadUr equation(int a, int b, int c) {
    int D = b * b - 4 * a * c;
    KvadUr ans;
    if (D > 0) {
        ans.x1 = (-b + sqrtf(D)) / (2 * a);
        ans.x2 = (-b - sqrtf(D)) / (2 * a);
    }
    else if (D == 0) {
        ans.x1 = (-b) / (2 * a);
        ans.x2 = ans.x1;
    }
    else {
        ans.x1 = 0;
        ans.x2 = 0;
    }

    return ans;
}

int main()
{
    system("chcp 1251");
    int a, b, c;
    std::cout << "Введите коэффициенты квадратного уравнения через пробел: ";
    std::cin >> a >> b >> c;

    KvadUr res = equation(a, b, c);
    if (res.x1 == 0 && res.x2 == 0) {
        std::cout << "Корней нет";
    }
    else {
        std::cout << "Корни уравнения: " << res.x1 << " и " << res.x2 << std::endl;
    }
    return 0;
}


