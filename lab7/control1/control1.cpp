﻿#include <iostream>
#include <Windows.h>
#include <string>

struct Time
{
    int seconds;
    int minutes;
    int hours;

    void ShowSeconds() {
        std::cout << seconds << std::endl;
    }
};

Time CreateTime() {
    Time t;
    std::cout << "Введите время (часы минуты секунды через пробел): ";
    std::cin >> t.hours >> t.minutes >> t.seconds;

    if (t.seconds >= 60) {
        t.seconds -= 60;
        t.minutes++;
    }
    if (t.minutes >= 60) {
        t.minutes -= 60;
        t.hours++;
    }

    return t;
}

void ShowTime(Time t) {
    std::cout << t.hours << ":"
        << t.minutes << ":"
        << t.seconds << std::endl;
}

int FromTimeToSeconds(Time t) {
    return t.seconds + t.minutes * 60 + t.hours * 3600;
}

Time FromSecondsToTime(int s) {
    Time t;
    t.seconds = s % 60;
    t.minutes = (s / 60) % 60;
    t.hours = (s / 3600) % 3600;

    return t;
}

Time SumTime(Time t1, Time t2) {
    int res_sec = FromTimeToSeconds(t1) + FromTimeToSeconds(t2);
    return FromSecondsToTime(res_sec);

}
// Может быть отрицательным в каждом измерении (час, минута, секунда)
Time RaznTime(Time t1, Time t2) {
    int res_sec = FromTimeToSeconds(t1) - FromTimeToSeconds(t2);
    return FromSecondsToTime(res_sec);

}

int main()
{
    system("chcp 1251");

    Time t0 = CreateTime();
    Time t1 = CreateTime();

    t0.ShowSeconds();
    t1.ShowSeconds();

    Time t2 = SumTime(t0, t1);
    Time t3 = RaznTime(t0, t1);

    ShowTime(t2);
    ShowTime(t3);
    return 0;
}

