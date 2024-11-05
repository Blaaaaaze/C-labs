#include <iostream>
#include <string>

class Time {
public:

    Time() : hour(0), minute(0), second(0) {}
    Time(int thour, int tminute, int tsecond) {
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

    Time operator+ (const Time&) const;
    Time operator+ (const float) const;
    friend Time operator+ (const float, const Time&);
    Time operator- (const Time&) const;

    bool operator< (const Time&) const;
    bool operator> (const Time&) const;
    bool operator<= (const Time&) const;
    bool operator>= (const Time&) const;
    bool operator== (const Time&) const;
    bool operator!= (const Time&) const;

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

Time Time::operator+ (const Time& t2) const {
    int hours = hour + t2.hour;
    int minutes = minute + t2.minute;
    int seconds = second + t2.second;

    return Time(hours, minutes, seconds);
}

Time Time::operator+ (const float seconds) const {
    int total_seconds = static_cast<int>(seconds);

    return Time(hour, minute, second + total_seconds);
}

Time operator+ (const float seconds, const Time& t2) {
    return t2 + seconds;
}

Time Time::operator- (const Time& t2) const {
    int hours = hour - t2.get_hour();
    int minutes = minute - t2.get_minute();
    int seconds = second - t2.get_second();

    if (seconds < 0) {
        if (minutes > 0) {
            minutes -= 1;
            seconds += 60;
        }
        else if ((minutes <= 0) && (hours > 0)) {
            hours -= 1;
            minutes += 59;
            seconds += 60;
        }
        else {
            return Time();
        }
    }
    if (minutes < 0) {
        if (hours > 0) {
            hours -= 1;
            minutes += 60;
        }
        else {
            return Time();
        }
    }
    if (hours < 0) {
        return Time();
    }
    return Time(hours, minutes, seconds);
}

bool Time::operator< (const Time& t2) const {
    if (hour > t2.hour) return false;
    else if ((hour == t2.get_hour()) && (minute > t2.get_minute())) return false;
    else if ((hour == t2.get_hour()) && (minute == t2.get_minute()) && (second > t2.get_second())) return false;
    else if ((hour == t2.get_hour()) && (minute == t2.get_minute()) && (second == t2.get_second())) return false;
    else return true;
}

bool Time::operator> (const Time& t2) const {
    if (hour < t2.hour) return false;
    else if ((hour == t2.get_hour()) && (minute < t2.get_minute())) return false;
    else if ((hour == t2.get_hour()) && (minute == t2.get_minute()) && (second < t2.get_second())) return false;
    else if ((hour == t2.get_hour()) && (minute == t2.get_minute()) && (second == t2.get_second())) return false;
    else return true;
}

bool Time::operator<= (const Time& t2) const {
    return !(*this > t2);
}

bool Time::operator>= (const Time& t2) const {
    return !(*this < t2);
}

bool Time::operator== (const Time& t2) const {
    return ((hour == t2.get_hour()) && (minute == t2.get_minute()) && (second == t2.get_second()));
}

bool Time::operator!= (const Time & t2) const {
    return !(*this == t2);
}

int main()
{
    system("chcp 1251");

    Time *t1 = new Time(4, 59, 59);
    Time *t2 = new Time(3, 4, 5);
    Time t3, t4;
    float sec = 23.4f;
    
    
    t3 = *t1 + *t2;
    
    t4 = *t1 - *t2;
    Time t5 = *t1 + sec;
    Time t6 = sec + *t1;

    t1->get_time();
    t2->get_time();
    t3.get_time();
    t4.get_time();
    t5.get_time();
    t6.get_time();

    std::cout << "Сравнения объектов Time\n";

    Time t7(12, 34, 23);
    Time t8(12, 34, 23);
    Time t9(10, 10, 10);

    std::cout << (t7 == t8) << std::endl;
    std::cout << (t7 != t8) << std::endl;
    std::cout << (t7 <= t9) << std::endl;
    std::cout << (t8 >= t7) << std::endl;
    std::cout << (t9 > t8) << std::endl;
    std::cout << (t9 < t8) << std::endl;


    delete t1;
    delete t2;
    return 0;

}

