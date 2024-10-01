

#include <iostream>
#include <ctime>
#include <math.h>

int main()
{
    system("chcp 1251");
    srand(time(NULL));

    double x, y;
    int score = 0;

    double x0, y0;

    x0 = rand() % 10 - 5;
    y0 = rand() % 10 - 5;
    int cnt = 0;

    

    std::cout << "Центр мишени: " << x0 << '\t' << y0 << std::endl;

    while (score < 50) {
        cnt++;
        std::cout << "Введите пару чисел x и y: "; std::cin >> x >> y;
        
        if ((x0 - x) * (x0 - x) + (y0 - y) * (y0 - y) <= 1) { score += 10; std::cout << "Вы заработали 10 очков! Ваш счёт: " << score << std::endl; }
        else if ((x0 - x) * (x0 - x) + (y0 - y) * (y0 - y) <= 4) { score += 5; std::cout << "Вы заработали 5 очков! Ваш счёт: " << score << std::endl; }
        else if ((x0 - x) * (x0 - x) + (y0 - y) * (y0 - y) <= 9) { score += 1; std::cout << "Вы заработали 1 очко! Ваш счёт: " << score << std::endl; }
        else { std::cout << "Вы не попали в мишень. 0 очков. Ваш счёт: " << score << std::endl; }
    }

    if (cnt <= 7) std::cout << "Совершено " << cnt << "Выстрелов. Хорошая работа, Снайпер";
    else if (cnt <= 13) std::cout << "Совершено " << cnt << "Выстрелов. Вы хороший стрелок";
    else std::cout << "Совершено " << cnt << "Выстрелов. Учись стрелять, новичок";
}

