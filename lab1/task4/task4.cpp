#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");

    double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
    cout << "Введите координаты следующих 5 точек - вершин\n";
    cout << "Первая точка (x и y):";
    cin >> x1 >> y1;
    cout << "Вторая точка (x и y):";
    cin >> x2 >> y2;
    cout << "Третья точка (x и y):";
    cin >> x3 >> y3;
    cout << "Четвёртая точка (x и y):";
    cin >> x4 >> y4;
    cout << "Пятая точка (x и y):";
    cin >> x5 >> y5;


    double sum1 = x1 * x2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1;
    double sum2 = y1 * x2 + y2 * x3 + y3 * x4 + y4 * x5 + y5 * x1;
    double S = 0.5 * abs(sum1 - sum2);

    cout << "Площадь:" << S;
    return 0;
}

