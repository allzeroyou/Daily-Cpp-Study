#pragma once
#include "Product.h"

class Book : public Product
{
public:
	string ISBN;
	string writer;
	string title;
	Book() {
		string ISBN = 0; string writer = ""; string title = "";
	};
	Book(int m_ObjType, int id, string desc, string productor, int price, string ISBN , string writer, string title );
	void printInfo();
};