#include "Pet.h"

void Pet::hungry() {
	speak();
}
void Pet::speak() {
	cout << "--speak--" << endl;
}
Pet* Pet::add(Pet* p) {
	this->next = p;
	return p;
}