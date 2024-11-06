#include <iostream>
#include <tuple>
#include <vector>

template <class Tuple, std::size_t N>
struct TuplePrinter {
     
        static void print(const Tuple& t) {
            TuplePrinter<Tuple, N - 1>::print(t);
            std::cout << ", " << std::get<N - 1>(t);
        }
    
};

template<class Tuple>
struct TuplePrinter<Tuple, 1> {
    static void print(const Tuple& t) {
        std::cout << std::get<0>(t);
    }
};

template<class... Args>
void printTuple(const std::tuple<Args...>& t) {
    std::cout << "(";
    TuplePrinter<decltype(t), sizeof...(Args)>::print(t);
    std::cout << ")" << std::endl;
}


int main()
{
    system("chcp 1251");

    std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
    std::vector<int> v2 = { 1,2,3,4,5,6 };
    std::vector<float> v3 = { 1.1, 2.2, 3.3, 4.4,5.5,6.6 };

    auto t1 = std::make_tuple(v1[0], v1[1], v3[0]);
    auto t2 = std::make_tuple(v1[0], v1[1], v2[1], v3[0], v1[1]);
    printTuple(t1);
    printTuple(t2);

    return 0;

}
