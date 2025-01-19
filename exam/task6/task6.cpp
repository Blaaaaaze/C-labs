#include <iostream>

struct task6 {
    float a, b, c;

    float var1() {
        return a + b + c;
    }

    float var2() {
        return a * b * c;
    }

    float var3() {
        return a / b / c;
    }
    
    float var4() {
        return a * (b + c);
    }
};

int main()
{
    task6 p;
    p.a = 6;
    p.b = 2;
    p.c = 3;

    std::cout << p.var1() << std::endl;
    std::cout << p.var2() << std::endl;
    std::cout << p.var3() << std::endl;
    std::cout << p.var4() << std::endl;

    return 0;
}


