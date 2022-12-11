#pragma once
#include "Product.h"
class CompactDisk: public Product
{
	string albumTitle;
	string singer;
public:
	CompactDisk();
	CompactDisk(int m_ObjType, int id, string desc, string productor, int price, string albumTitle = "", string singer = ""); // 앞 매개변수들 -> product 멤버, 뒤 2개의 매개변수 -> CompactDisc의 멤버
	void printInfo();
};

