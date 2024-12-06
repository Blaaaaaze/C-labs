#include <iostream>
#include <string>
#include "person.h"
#include "student.h"
#include "friend.h"
#include "family.h"
#include "colleague.h"
#include "contactBook.h"

int main() {
	system("chcp 1251");
	Person* s1 = new Student("Игорь", "Смирнов", "89303525516");
	ContactBook book;
	book.add_contact(s1);


	return 0;
}