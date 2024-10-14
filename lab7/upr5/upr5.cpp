#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>

using Tuple = std::tuple<std::string, int, double>;
using Tuple1 = std::tuple<std::string, double>;

void printTupleOfThree(Tuple t) {
    std::cout << "("
        << std::get<0>(t) << ", "
        << std::get<1>(t) << ", "
        << std::get<2>(t) << ")" << std::endl;
}

Tuple funtup(std::string s, int a, double d) {
    s.append("!");
    return make_tuple(s, a, d * 10);
}

Tuple1 func3(Tuple t) {
    double sum = std::get<1>(t) + std::get<2>(t);
    
    return make_tuple(std::get<0>(t), sum);
}

void printTupleOfTwo(Tuple1 t) {
    std::cout << "("
        << std::get<0>(t) << ", "
        << std::get<1>(t) << ")" << std::endl;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
    std::vector<int> v2{ 1,2,3,4,5,6 };
    std::vector<double> v3{ 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t0 = std::make_tuple(v1[0], v2[0], v3[0]);
    auto t1 = funtup(v1[1], v2[1], v3[1]);
    auto t2 = std::make_tuple(v1[2], v2[2], v3[2]);
    auto t3 = func3(t2);
    printTupleOfThree(t0);
    printTupleOfThree(t1);
    printTupleOfTwo(t3);
    return 0;
}


