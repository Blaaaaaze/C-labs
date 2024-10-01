#include <iostream>

void swap(int*, int*);
void swap(int&, int&);

int main()
{
    int x = 5, y = 10;
    swap(&x, &y);
    std::cout << "x = " << x << "; y = " << y << std::endl;
    swap(x, y);
    std::cout << "x = " << x << "; y = " << y << std::endl;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}