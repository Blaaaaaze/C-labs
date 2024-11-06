#include <iostream>
#include <string>
#include <windows.h>

class Item {
private:
    std::string title;
    double price;
public:
    virtual void getdata() {
        std::cout << "\nВведите заголовок: ";
        std::cin >> title;
        std::cout << "Введите цену:";
        std::cin >> price;
    }
    virtual void putdata() {
        std::cout << "\nЗаголовок: " << title;
        std::cout << "\nЦена: " << price;
    }
};

class Paperbook : public Item {
private:
    int pages;
public:
    void getdata() {
        Item::getdata();
        std::cout << "Введите число страниц: ";
        std::cin >> pages;
    }
    void putdata() {
        Item::putdata();
        std::cout << "\nСтраниц: " << pages;
    }
};

class AudioBook : public Item {
private: 
    double time;
public:
    void getdata() {
        Item::getdata();
        std::cout << "Введите время звучания: ";
        std::cin >> time;
    }

    void putdata() {
        Item::putdata();
        std::cout << "\nВремя звучания: " << time;
    }
};

int main()
{
    SetConsoleOutputCP(1251);
    Item* pubarr [100];

    int n = 0;
    char choice;
    do {
        std::cout << "\nВводить данные для книги или звукового файла (a/b)?";
        std::cin >> choice;
        if (choice == 'b')
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new AudioBook;
        pubarr[n++]->getdata();
        std::cout << "Продолжать (y/n)?";
        std::cin >> choice;
    } while (choice == 'y');

    for (int j = 0; j < n; j++) {
        pubarr[j]->putdata();
        std::cout << std::endl;
    }

    return 0;
}

