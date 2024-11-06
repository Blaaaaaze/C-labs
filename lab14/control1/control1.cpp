#include <iostream>

template<class T>
float sred_znach(T arr, int size) {
    int summa = 0;
    for (int i = 0; i < size; i++) {
        summa += arr[i];
    }
    return ((float) summa / (float) size);
}

int main()
{
    system("chcp 1251");

    int arr1[] = { 3, 6, 2, 9, 6 };
    double arr2[] = { 3.4, 8.3, 1.3, 9.3, 5.5 };
    long arr3[] = { 45, 72, 200, 533, 21 };
    char arr4[] = { 6, 2, 100, 5, 234 };


    int k1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "int: " << sred_znach(arr1, k1) << std::endl;
    int k2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "double: " << sred_znach(arr2, k2) << std::endl;
    int k3 = sizeof(arr3) / sizeof(arr3[0]);
    std::cout << "long: " << sred_znach(arr3, k3) << std::endl;
    int k4 = sizeof(arr4) / sizeof(arr4[0]);
    std::cout << "char: " << sred_znach(arr4, k4) << std::endl;
}
