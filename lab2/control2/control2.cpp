
#include <iostream>
#include <string>

int main()
{
    system("chcp 1251");

    long long snils;

    std::cout << "Введите снилс (11 цифр): "; std::cin >> snils;
    long long snils_copy = snils;
    int cnt =0;
    int last_numb = 0;

    for (int i = 0; i < 11; i++) {
        if (i == 0) {
            last_numb = snils_copy % 10;
            snils_copy = snils_copy / 10;
            cnt++;
            continue;
        }

        int numb = snils_copy % 10;
        snils_copy = snils_copy / 10;
        if (last_numb == numb) cnt++;
        else cnt = 1;

        if (cnt > 2) {
            std::cout << "Снилс не подходит. Больше 2 повторов рядом";
            return 0;
        }

        last_numb = numb;

    }
    int snils_control_sum = snils % 100;
    
    snils = snils / 100;
    int control_sum = 0;
    for (int i = 0; i < 9; i++) {
        control_sum += (snils % 10) * (i + 1);
        snils = snils / 10;



    }




    if (control_sum < 100) {
        control_sum = control_sum;
    }
    else if (control_sum == 100 || control_sum == 101) {
        control_sum == 00;
    }
    else {
        control_sum = control_sum % 101;
        if (control_sum < 100) {
            control_sum = control_sum;
        }
        else if (control_sum == 100) {
            control_sum = 00;
        }
    }

   
    if (control_sum == snils_control_sum) {
        std::cout << "True";
    }
    else {
        std::cout << "False";
    }

   
    return 0;
}

