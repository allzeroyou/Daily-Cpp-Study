#pragma once
#include "Product.h"
class CompactDisk: public Product
{
public:
	string title;
	string singer;

	CompactDisk();

	CompactDisk(int m_ObjType, int id, string description, string productor, int price, string title, string singer);
	void printInfo();
};

