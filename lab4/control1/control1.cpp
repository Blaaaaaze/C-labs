#include <iostream>

int myRoot(double a, double b, double c, double &x1, double &x2) {
    double D = b * b - 4 * a * c;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0) {
        x1 = (-b) / (2 * a);
        
        return 0;
    }
    else {
        return -1;
    }
}

int main()
{
    system("chcp 1251");

    double a, b, c, x1 = 0., x2 = 0.;
    
    std::cout << "Введите через пробел коэффициенты квадратного уравнения: "; std::cin >> a >> b >> c;
    int flag = myRoot(a, b, c, x1, x2);

    switch (flag)
    {
    case 1:
        std::cout << "Корни уравнения x1 = " << x1 << " и x2 = " << x2 << std::endl; //x^2 - 15x - 16
        break;
    case 0:
        std::cout << "Корень уравнения x1 = x2 = " << x1 << std::endl; //x^2 - 6x + 9
        break;
    case -1:
        std::cout << "Корней уравнения нет"; //10x^2 + 4x + 5 
        break;
    default:
        break;
    }

    return 0;
}


