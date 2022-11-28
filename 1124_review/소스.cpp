#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Jiheon.h"

int main() {
	Pet* pStart = NULL;
	Pet* pLast;

	pStart = new Dog();
	pLast = pStart;

	pLast = pLast->add(new Cat());
	pLast = pLast->add(new Dog());
	pLast = pLast->add(new Jiheon());

	Pet* p = pStart;
	while (p != nullptr) {
		p->hungry();
		p = p->getNext();
	}
	p = pStart;
	while (p != nullptr) {
		Pet* q = p->getNext();
		delete p;
		p = q;
	}
}