#include <iostream>
#include <fstream>
#include <string>

int main()
{
    system("chcp 1251");

    std::ofstream out("control", std::ios::out | std::ios::binary);

    if (!out) {
        std::cout << "Файл открыть невозможно";
        return 1;
    }

    std::cout << "Введите стихотворение построчно:\n";
    std::string s = " ";


    while (s != "") {
        getline(std::cin, s);
        if (s == "") continue;
        out << s << std::endl;
    }

    out.close();

    std::cout << "Вывод из файла:\n";
    std::ifstream in("control", std::ios::in | std::ios::binary);

    if (!in) {
        std::cout << "Файл открыть невозможно";
        return 1;
    }

    std::string line;
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();
    return 0;
}
