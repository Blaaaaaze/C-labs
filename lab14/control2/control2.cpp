#include <iostream>
#include <vector>
#include <string>

template <class Container>
void Print(const Container& container, const std::string& symb) {
    bool first = true; 
    for (const auto& element : container) {
        if (!first) {
            std::cout << symb; 
        }
        std::cout << element; 
        first = false;
    }
    std::cout << std::endl; 
}

int main() {
    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", "); 
    return 0;
}