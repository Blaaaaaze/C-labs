#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    system("chcp 1251");
    double P;
    cout << "Введите периметр равностороннего треугольника: ";
    cin >> P;

    double a = P / 3;
    double p = P / 2;
    double S = sqrt(p * (p - a) * (p - a) * (p - a));

    cout.precision(3);

    cout << "Сторона\tПлощадь\n";
    cout << a << '\t' << S;
    return 0;
}


