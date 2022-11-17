#pragma once
#include "Product.h"

class Book: public Product
{
public:
	int isbn;
	string author;
	string title;

	Book();

	Book(int m_ObjType, int id, string description, string productor, int price, string author, string title, int isbn);
	void printInfo();
};

