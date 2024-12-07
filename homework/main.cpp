#include <iostream>
#include <string>
#include <vector>
#include "person.h"
#include "student.h"
#include "friend.h"
#include "family.h"
#include "colleague.h"
#include "contactBook.h"
#include "interface.h"

int main() {
	system("chcp 1251");
	ContactBook book;
	Interface inter(book);
	inter.start_page();
	return 0;
}