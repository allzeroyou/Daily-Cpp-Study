#pragma once
#include <iostream>
using namespace std;

class Pet
{
public:
	Pet* next;
protected:
	virtual void speak();
public:
	Pet() { next = nullptr; }
	virtual ~Pet() {}
	void hungry();
	Pet* add(Pet* p);
	Pet* getNext() { return next; }
};

