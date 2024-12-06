#include <iostream>
#include <string>
#include <vector>
#include "person.h"
#include "student.h"
#include "friend.h"
#include "family.h"
#include "colleague.h"
#include "contactBook.h"

int main() {
	system("chcp 1251");
	Person* s1 = new Student("Игорь", "89303525516");
	ContactBook book;
	book.add_contact(s1);
	std::cout << book.get_contacts().size() << std::endl;
	
	book.write_file();
	book.read_file();

	std::cout << book.get_contacts().size() << std::endl;
	return 0;
}