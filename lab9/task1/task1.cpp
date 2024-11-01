#include <iostream>
#include <string>

//упражнение 2 в этом же файле
class DevideByZeroError {
public:
    DevideByZeroError(): message("Деление на нуль") { }
    void printMessage() const { std::cout << message << std::endl; }

private:
    std::string message;
};

float quotient(int num1, int num2) {
    if (num2 == 0) {
        throw DevideByZeroError();
    }
    return (float)num1 / num2;
}

int main()
{
    system("chcp 1251");

    std::cout << "Введите два целых числа для расчета частного\n";
    int number1;

    std::cin >> number1;
    //std::cin >> number2;

    /*try {
        float result = quotient(number1, number2);
        std::cout << "Частное равно " << result << std::endl;
    }
    catch (DevideByZeroError& error) {
        std::cout << "Ошибка!";
        error.printMessage();
        return 1;
    }*/

    for (int i = -10; i < 10; i++) {
        try {
            float result = quotient(number1, i);
            std::cout << "Частное равно " << result << std::endl;
        }
        catch (DevideByZeroError& error) {
            std::cout << "Ошибка! ";
            error.printMessage();
        }
    }
    return 0;
}

