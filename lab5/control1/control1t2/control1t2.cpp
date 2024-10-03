#include <iostream>

void task2(int Arr[], const int n) {
    int min = 0;
    int buf = 0;

    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            min = (Arr[j] < Arr[min]) ? j : min;

        }

        if (i != min) {
            buf = Arr[i];
            Arr[i] = Arr[min];
            Arr[min] = buf;
        }
    }
    //for (int i : a) 
    for (int i = 0; i < n; i++) {
        std::cout << i << '\t';
    }
}


int main()
{
    system("chcp 1251");

    int N;
    std::cout << "Введите длину массива: "; std::cin >> N;
    int* a = new int[N];

    for (int i = 0; i < N; i++) {
        std::cout << "Введите элемент a[" << i << "]=";
        std::cin >> a[i];
    }

    task2(a, N);

    delete a;
    return 0;
}


