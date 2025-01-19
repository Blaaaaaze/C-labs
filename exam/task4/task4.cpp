#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h> // Для использования функции sin и константы M_PI

int main() {

    /*double x = 0.0;

    double end = M_PI;

    double step = M_PI / 4;


     while (x <= end) {
        std::cout << "sin(" << x << ") = " << std::round(sin(x)*100)/100 << std::endl;
        x += step;
     } 

     return 0;*/

    /*double x = 0.0;

    double end = M_PI*2;

    double step = M_PI / 2;


    do {
        std::cout << "sin(" << x << ") = " << std::round(sin(x) * 100) / 100 << std::endl;
        x += step;
    } while (x <= end);

    return 0;*/

    /*for (int i = 0; i <= 10; i+=2 ) {
        std::cout << i * i * i << std::endl;
    }

    return 0;*/
    float x = 10;
    do {
        std::cout << x * x * x << std::endl;
        x += 0.5;
    } while (x <= 12);

    return 0;
}  
