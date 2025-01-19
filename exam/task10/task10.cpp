#include <iostream>

int srMark(int numb[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += numb[i];
    }
    int a = res / n;

    if ((a >= 90) && (a < 100)) return 4;
    if ((a >= 80) && (a < 90)) return 3;
    if ((a >= 70) && (a < 80)) return 2;
    if ((a >= 60) && (a < 70)) return 1;
    if (a < 60) return 0;
}

int main()
{
    system("chcp 1251");
    const int n = 4;
    int marks[n];
    marks[0] = 79;
    marks[1] = 90;
    marks[2] = 85;
    marks[3] = 82;
    std::cout << srMark(marks, n);

}


