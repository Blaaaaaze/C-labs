#include <iostream>
#include <cstring>

int main(int argc, char* argv[], char* envp[])
{
	system("chcp 1251");

	if (argc < 4) {
		std::cout << "Неверный ввод 1!\n";
		return 0;
	}


	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	


	
	if (((strtod(argv[2], 0) - a) != 0) || ((strtod(argv[3], 0) - b) != 0)) {
		std::cout << "0";
		return 0;
	}

	int ans;
	if (strncmp(argv[1], "-a", 2) == 0) {
		ans = a + b;
	}
	else if (strncmp(argv[1], "-m", 2) == 0) {
		ans = a * b;
		}
	else {
		std::cout << "Неверный ввод 3!\n";
		return 0;
	}
	
	std::cout << "Результат: " << ans << std::endl;
	return 0;
}