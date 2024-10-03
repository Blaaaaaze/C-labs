#include <iostream>

int search(int arr[], const int n, int key) {
    int temp;
    for (int i = 0; i < n; i++) {
        if (key == arr[i]) {
            if (i != 0) {
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }

            return i;
        }
    }

    return -10;
}

int main()
{
    system("chcp 1251");

    int n;
    std::cout << "Введите длину массива: "; std::cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Введите a[" << i << "]= "; std::cin >> a[i];
    }

    int key;
    char flag;
    while (true) {
        std::cout << "Введите элемент, который хотите найти: "; std::cin >> key;
        int res = search(a, n, key);
        if (res != -10) std::cout << "Элемент находится под индексом " << res << std::endl;
        else std::cout << "Элемента нет в массиве";

        std::cout << "Хотите продолжить? Y/N: "; std::cin >> flag;
        if (flag == 'N') break;
    }
    
    return 0;
}

