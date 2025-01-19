#include <iostream>

std::string week(int numb) {
    switch (numb)
    {
    case 1:
        return "Понедельник";
    case 2: 
        return "Вторник";
    case 3: 
        return "Среда";
    case 4: 
        return "Четверг";
    case 5:
        return "Пятница";
    case 6:
        return "Суббота";
    case 7: 
        return "Воскресенье";
    default:
        return "Такого дня недели нет";
    }
}

std::string month(int numb) {
    switch (numb)
    {
    case 1:
        return "Январь";
    case 2:
        return "Февраль";
    case 3:
        return "Март";
    case 4:
        return "Апрель";
    case 5:
        return "Май";
    case 6:
        return "Июнь";
    case 7:
        return "Июль";
    case 8:
        return "Август";
    case 9:
        return "Сентябрь";
    case 10:
        return "Октябрь";
    case 11:
        return "Ноябрь";
    case 12:
        return "Декабрь";
    default:
        return "Нет такого месяца";
    }
}

std::string rainbow(int numb) {
    switch (numb)
    {
    case 1:
        return "Красный";
    case 2:
        return "Оранжевый";
    case 3:
        return "Желтый";
    case 4:
        return "Зеленый";
    case 5:
        return "Голубой";
    case 6:
        return "Синий";
    case 7:
        return "Фиолетовый";
    default:
        return "Такого цвета нет";
    }
}

std::string groupmates(int numb) {
    switch (numb)
    {
    case 1:
        return "Абдулов";
    case 2:
        return "Абоимов";
    case 3:
        return "Авокадо";
    case 4:
        return "Адрат";
    case 5:
        return "Алексеев";
    default:
        return "какой-то одногруппник";
    }
}

int main()
{
    system("chcp 1251");
    int var, numb;
    std::cout << "Введите номер варианта: ";
    std::cin >> var;

    std::cout << "Введите число: ";
    std::cin >> numb;

    switch (var)
    {
    case 1: 
        std::cout << week(numb);
        break;
    case 2:
        std::cout << month(numb);
        break;
    case 3:
        std::cout << rainbow(numb);
        break;
    case 4:
        std::cout << groupmates(numb);
        break;
    default:
        break;
    }
}


