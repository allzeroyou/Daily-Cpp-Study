#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape
{
	Shape* next;
protected:
	virtual void draw() = 0;

public:
	Shape() { next = NULL; }
	virtual ~Shape() {} //기본 클래스의 소멸자는 가상함수로
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return next; }
	void setNext(Shape* p) { this->next = p->next; }
};

