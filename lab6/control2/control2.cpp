#include <iostream>
#include <fstream>

int main() {
    system("chcp 1251");

    int N;
    std::cout << "Введите длину массива: ";
    std::cin >> N;
    int* a = new int[N];

    
    for (int i = 0; i < N; i++) {
        std::cout << "Введите элемент a[" << i << "]=";
        std::cin >> a[i];
    }

    
    std::ofstream out("control", std::ios::out | std::ios::binary);
    if (!out) {
        std::cout << "Файл открыть невозможноn";
        delete[] a; 
        return 1;
    }

    
    out.write((char*)a, sizeof(int) * N);

    
    int min, buf;
    for (int i = 0; i < N; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            min = (a[j] < a[min]) ? j : min;
        }
        if (i != min) {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    
    out.write((char*)a, sizeof(int) * N);
    out.close();

    
    int* originalArray = new int[N];
    int* sortedArray = new int[N];

    std::ifstream in("control", std::ios::in | std::ios::binary);
    if (!in) {
        std::cout << "Файл открыть невозможноn";
        delete[] a; 
        delete[] originalArray; 
        delete[] sortedArray; 
        return 1;
    }

    
    in.read((char*)originalArray, sizeof(int) * N);

    
    in.read((char*)sortedArray, sizeof(int) * N);
    in.close();

    
    std::cout << "Изначальный массив: ";
    for (int i = 0; i < N; i++) {
        std::cout << originalArray[i] << ' ';
    }
    std::cout << std::endl;

    
    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < N; i++) {
        std::cout << sortedArray[i] << ' ';
    }
    std::cout << std::endl;

    
    delete[] a;
    delete[] originalArray;
    delete[] sortedArray;

    return 0;
}
