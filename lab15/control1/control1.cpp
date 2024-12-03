#include <iostream>
#include <map>
#include <string>

struct StudentGrade {
	std::string name;
	char grade;
};

int main() {
	system("chcp 1251");
	std::map<std::string, char> grades;

	grades["Ivan"] = '3';
	grades["Sasha"] = '4';
	grades["Anya"] = '5';
	grades["Misha"] = '4';
	grades["Kolya"] = '5';

	std::cout << "\nСписок оценок студентов:\n";
	for (const auto& item : grades) {
		std::cout << item.first << ": " << item.second << std::endl;
	}


	return 0;
}