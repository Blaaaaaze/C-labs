#include <iostream>
#include <cmath>

double triangle(double a) {
    return ((a * a * sqrt(3))/4.);
}

double triangle(double a, double b, double c) {
    double P = a + b + c;
    double p = P / 2.;

    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    return S;
}

int main()
{
    system("chcp 1251");

    int choice;
    std::cout << "Выберите тип треугольника. 1 - равносторонний, 2 - разносторонний: ";
    std::cin >> choice;


    double square;
    double a, b, c;
    switch (choice)
    {
    case 1:
        std::cout << "Введите длину стороны: "; std::cin >> a;
        square = triangle(a);
        break;
    case 2:
        std::cout << "Введите длину 3 сторон: "; 
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        square = triangle(a, b, c);
        break;
    default:
        
        std::cout << "Такого варианта не было";
        return 0;
    }

    std::cout << "Площадь вашего треугольника: " << square << std::endl;
    return 0;
}



