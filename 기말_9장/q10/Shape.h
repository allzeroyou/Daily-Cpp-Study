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
	virtual ~Shape() {} //�⺻ Ŭ������ �Ҹ��ڴ� �����Լ���
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return next; }
	void setNext(Shape* p) { this->next = p->next; }
};

