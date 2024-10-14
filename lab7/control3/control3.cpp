#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>


struct KvadUr
{
    int x1;
    int x2;
};

using Tuple = std::tuple<KvadUr, bool>;

Tuple equation(int a, int b, int c) {
    bool flag;
    int D = b * b - 4 * a * c;
    KvadUr ans;
    if (D > 0) {
        ans.x1 = (-b + sqrtf(D)) / (2 * a);
        ans.x2 = (-b - sqrtf(D)) / (2 * a);
        flag = true;
    }
    else if (D == 0) {
        ans.x1 = (-b) / (2 * a);
        ans.x2 = ans.x1;
        flag = true;
    }
    else {
        ans.x1 = 0;
        ans.x2 = 0;
        flag = false;
    }
    Tuple res = std::make_tuple(ans, flag);
    return res;
}

int main()
{
    system("chcp 1251");
    int a, b, c;
    std::cout << "Введите коэффициенты квадратного уравнения через пробел: ";
    std::cin >> a >> b >> c;

    Tuple res = equation(a, b, c);
    if (!std::get<1>(res)) {
        std::cout << "Корней нет";
    }
    else {
        std::cout << "Корни уравнения: " << std::get<0>(res).x1 << " и " << std::get<0>(res).x2 << std::endl;
    }
    return 0;
}