#pragma once
#include "Product.h"
class CompactDisk: public Product
{
	string albumTitle;
	string singer;
public:
	CompactDisk();
	CompactDisk(int m_ObjType, int id, string desc, string productor, int price, string albumTitle = "", string singer = ""); // �� �Ű������� -> product ���, �� 2���� �Ű����� -> CompactDisc�� ���
	void printInfo();
};

