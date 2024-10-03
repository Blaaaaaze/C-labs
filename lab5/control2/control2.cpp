#include <iostream>

int* max_vect(const int n, int arr1[], int arr2[]) {
    int* mas = new int[n];

    for (int i = 0; i < n; i++) {
        mas[i] = fmax(arr1[i], arr2[i]);
    }

    return mas;
}

int main()
{
    system("chcp 1251");

    int a[] = {1,2,3,4,5,6,7,2};
    int b[] = {7,6,5,4,3,2,1,3};

    int kc = sizeof(a) / sizeof(a[0]);
    int *c;
    c = max_vect(kc, a, b);

    for (int i = 0; i < kc; i++) {
        std::cout << c[i] << " ";
        std::cout << std::endl;
    }
    delete[]c;
    return 0;
}



