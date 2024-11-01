#include <iostream>
#include <string>

class Time {
public:

    class ExTime {
    public: 
        std::string message;

        ExTime(std::string mes) : message(mes) {};
    };

    Time() : hour(0), minute(0), second(0) {}
    Time(int thour, int tminute, int tsecond) {

        if ((thour < 0) || (tminute < 0) or (tsecond < 0))
            throw ExTime("Время не может быть отрицательным");

        set_hour(thour);
        set_minute(tminute);
        set_second(tsecond);
        CorrectTime();
    }
    

    void set_hour(int thour) {
        hour = thour;
    }

    void set_minute(int tminute) {
        minute = tminute;
    }

    void set_second(int tsecond) {
        second = tsecond;
    }

    int get_hour() const {
        return hour;
    }

    int get_minute() const {
        return minute;
    }

    int get_second() const {
        return second;
    }

    void get_time() const {
        std::cout << get_hour() << ":" << get_minute() << ":" << get_second() << std::endl;
    }

    Time SumTime(Time t2) {
        Time res(get_hour() + t2.get_hour(), get_minute() + t2.get_minute(), get_second() + t2.get_second());
        return res;

    }


private:
    void CorrectTime() {
        while ((second >= 60) || (minute >= 60)) {
            if (second >= 60) {
                second -= 60;
                minute++;
            }
            if (minute >= 60) {
                minute -= 60;
                hour++;
            }
        }
    }

    int second;
    int minute;
    int hour;


};

int main()
{
    system("chcp 1251");
    try {
        Time* t1 = new Time(4, 59, 59);
        Time* t2 = new Time(3, 4, -5);
        Time t3;
        t1->get_time();
        t2->get_time();

        t3 = t1->SumTime(*t2);
        t3.get_time();
    }
    catch (Time::ExTime& ex) {
        std::cout << "ошибка: " << ex.message;
    }
    return 0;
}

