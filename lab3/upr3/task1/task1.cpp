#include <iostream>


long double firBinSearch(double a, int n) {
    double L = 0;
    double R = a;
    while (R - L > 1e-10) {
        double M = (L + R) / 2;
        if (pow(M, n) < a) {
            L = M;
        }
        else {
            R = M;
        }
    }
    return R;
}


int main()
{
    system("chcp 1251");

    double a;
    int n;

    std::cout << "Введите действительное число (6 знаков после запятой) от 1 до 1000: "; std::cin >> a;
    std::cout << "Введите натуральное число меньше 10: "; std::cin >> n;

    long double ans = firBinSearch(a, n);
    std::cout << "Результат: " << ans << std::endl;

    return 0;
}

