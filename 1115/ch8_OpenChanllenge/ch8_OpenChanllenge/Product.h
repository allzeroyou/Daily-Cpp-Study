#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
	int id;
	string description;
	string productor;
	int price;
	// �� ��ü�� ����� ������
	int m_ObjType;

	Product();

	Product(int m_ObjType, int id, string description, string productor, int price);

	void showProduct();
};

