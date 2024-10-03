//Упражнение 4 выполнено в первых 3 упражнениях. Условие задания: Требуется в программах предыдущих упражнений вместо заранее
//инициализированного массива реализовать возможность пользователю ввести
//необходимый размер массива, а затем заполнить его.

#include <iostream>

void show_array(const int Arr[], const int N);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b));

int main()
{
    system("chcp 1251");
    // const int N = 10;
    // int a = {9, 8, 7, 1, 2, 3, 4, 5, 9, 3}
    bool (*from_f[2])(int, int) = { from_min, from_max };
    int N;
    int flag = 0;

    std::cout << "Введите длину массива: "; std::cin >> N;
    int* a = new int[N];
    for (int i = 0; i < N; i++) {
        std::cout << "введите элемент a[" << i << "]=";
        std::cin >> a[i];
    }

    std::cout << "1. Сортировать по возрастанию\n 2. Сортировать по убыванию\n";
    std::cin >> flag;
    std::cout << "Исходные данные: \n";

    show_array(a, N);

    bubble_sort(a, N, (*from_f[flag - 1]));
    std::cout << "После сортировки: \n";
    show_array(a, N);
    delete a; // Очистка динамической памяти
    return 0;
}

void show_array(const int Arr[], const int N) {
    for (int i = 0; i < N; i++) {
        std::cout << Arr[i] << " ";
        std::cout << "\n";
    }
}

bool from_min(const int a, const int b) {
    return a > b;
}

bool from_max(const int a, const int b) {
    return a < b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b)) {

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if ((*compare)(Arr[j], Arr[j + 1])) std::swap(Arr[j], Arr[j + 1]);
        }
    }
}
