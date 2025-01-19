#include <iostream>
#include <vector>

#include "human.h"
#include "student.h"
#include "teacher.h"

int main() {
	system("chcp 1251");
	std::vector<int> scores;

	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	human* h1 = new student("Петров", "Иван", "Алексеевич", scores);
	
	std::cout << h1->get_info() << std::endl;

	unsigned int teacher_work_time = 40;
	h1= new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
	
	std::cout << h1->get_info() << std::endl;

	return 0;
}