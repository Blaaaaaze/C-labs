#include <iostream>

int addNumbers(int n) {
    if (n == 1) return 1;
    else return (n + addNumbers(n - 1));
}

int addNumbers(int n, int m) {
    int minimal = fmin(n, m);
    int maximal = fmax(n, m);

    int ans = 0;
    for (int i = minimal; i <= maximal; i++) {
        ans += i;
    }

    return ans;
}

int gcd(int m, int n) {
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main()
{
    system("chcp 1251");

    int n,m;
    std::cout << "Введите первое число: "; std::cin >> n;
    std::cout << "Введите второе число: "; std::cin >> m;

    int res = addNumbers(n);
    int res2 = addNumbers(n, m);
    int res3 = gcd(n, m);
    std::cout << "Ответ: " << res << std::endl;
    std::cout << "Ответ 2: " << res2 << std::endl;
    std::cout << "Ответ 3: " << res3 << std::endl;
    return 0;
}

