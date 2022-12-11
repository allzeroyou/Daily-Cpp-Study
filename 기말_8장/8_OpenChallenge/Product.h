#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{

public:
	int id;
	string desc;
	string productor;
	int price;
	int m_ObjType;
	static int M_nNumberOfProduct; // product 개수 세기

	Product() { m_ObjType = 0, id = 0, desc = "", productor = "", price = 0; };
	Product(int m_ObjType, int id, string desc , string productor , int price);
	void printInfo();
};

