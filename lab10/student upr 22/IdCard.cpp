#include "IdCard.h"
#include <string>

IdCard::IdCard(int n) {
	IdCard::number = n;
	IdCard::category = "Не установлена";
}
IdCard::IdCard() {
	IdCard::number = 0;
	IdCard::category = "Не установлена";
}
IdCard::IdCard(int n, std::string cat) {
	IdCard::number = n;
	IdCard::category = cat;
}
void IdCard::setNumber(int newNumber) {
	IdCard::number = newNumber;
}
int IdCard::getNumber() {
	return IdCard::number;
}
void IdCard::setCategory(std::string cat) {
	IdCard::category = cat;
}
std::string IdCard::getCategory() {
	return IdCard::category;
}