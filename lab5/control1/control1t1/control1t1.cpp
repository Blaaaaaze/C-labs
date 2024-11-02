#include <iostream>

void task1(int Arr[], const int n) {
    int s = 0, s_plus = 0, s_minus = 0, s_chet = 0, s_nechet = 0;
    int a_max = -10000, a_min = 10000, p = 1, max_i = 0, min_i = 0;
    for (int i = 0; i < n; i++) {
        s += Arr[i];

        if (Arr[i] > 0) s_plus += Arr[i];
        if (Arr[i] < 0) s_minus += Arr[i];
        if (i % 2 == 0) s_chet += Arr[i];
        if (i % 2 == 1) s_nechet += Arr[i];

        if (Arr[i] > a_max) { a_max = Arr[i]; max_i = i; }
        if (Arr[i] < a_min) { a_min = Arr[i]; min_i = i; }

    }

    int start = fmin(max_i, min_i);
    int finish = fmax(max_i, min_i);

    while (start < finish - 1) {
        start++;
        p *= Arr[start];

    }

    
    double sr_znach = double(s) / n;

    std::cout << "Сумма элементов массива равна " << s << std::endl;
    std::cout << "Среднее значение элементов массива равно " << sr_znach << std::endl;
    std::cout << "Сумма положительных элементов массива равна " << s_plus << std::endl;
    std::cout << "Сумма отрицательных элементов массива равна " << s_minus << std::endl;
    std::cout << "Сумма элементов массива с чётными индексами равна " << s_chet << std::endl;
    std::cout << "Сумма элементов массива с нечётными индексами равна " << s_nechet << std::endl;
    std::cout << "Максимальный элемент " << a_max << " Минимальный элемент " << a_min << std::endl;
    std::cout << "Произведение элементов между макс и мин элементами " << p << std::endl;

}

int main()
{
    system("chcp 1251");


    int n;
    std::cout << "Введите длину массива: "; std::cin >> n;

    int* mas = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "mas[" << i << "]=";
        std::cin >> mas[i];
    }

    task1(mas, n);
    
    delete mas;
    return 0;
}

