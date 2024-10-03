//Упражнение 4 выполнено в первых 3 упражнениях. Условие задания 4: Требуется в программах предыдущих упражнений вместо заранее
//инициализированного массива реализовать возможность пользователю ввести
//необходимый размер массива, а затем заполнить его.

#include <iostream>

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

    int min = 0;
    int buf = 0;

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
    //for (int i : a) 
    for (int i = 0; i < N; i++) {
        std::cout << i << '\t';
    }
    delete a;
    return 0;
}


