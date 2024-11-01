#include <iostream>
#include <string>


class Triangle {
public:

    class ExLine {
    public:
        std::string origin;

        ExLine(std::string mes) : origin(mes) {};
    };

    int a, b, c;
    Triangle(int aa, int bb, int cc) {
        a = aa;
        b = bb;
        c = cc;
        if (std::max({ a, b, c }) > a + b + c - std::max({ a, b, c })) { throw ExLine("Треугольник не существует"); }
    };

    float Square() {
        float p = (a + b + c) / 2.0;
        float S = sqrt(p * (p - a) * (p - b) * (p - c));
        return S;
    }


};

int main()
{
    system("chcp 1251");
    try {
        Triangle *t = new Triangle(5, 57, 7);
        double S = t->Square();
        std::cout << "Площадь треугольника равна " << S << std::endl;
        delete t;
    }
    catch (Triangle::ExLine& er) {
        std::cout << "Ошибка: " << er.origin;
        return 1;
    }
    return 0;
}

