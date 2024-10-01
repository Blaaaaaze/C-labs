
#include <iostream>
#include <string>
#include <cctype>

bool snilsCheck(std::string sn_numb) {
    std::string goodSnils = "";
    
    
    for (int i = 0; i < sn_numb.length(); i++) {
        if (isdigit(sn_numb.at(i))) {
            goodSnils += sn_numb[i];
        }
        else if (sn_numb.at(i) == '-' || isspace(sn_numb.at(i))) {
            continue;
        }
        else {
            return false;
        }
    }
    

    if (goodSnils.length() != 11) return false;

    long long snils = std::stoll(goodSnils);

    long long snils_copy = snils;
    int cnt = 0;
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
            return false;
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
        return true;
    }
    else {
        return false;
    }

}

int main()
{
    system("chcp 1251");

    std::string snils;

    std::cout << "Введите снилс (11 цифр): "; getline(std::cin, snils);
    bool ans = snilsCheck(snils);
    std::cout << ans;


    return 0;
}

