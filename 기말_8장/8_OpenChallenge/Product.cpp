#include "Product.h"
Product::Product(int m_ObjType, int id , string desc, string productor, int price) {
	this->m_ObjType = m_ObjType; // type ����

	this->id = id;
	this->desc = desc;
	this->productor = productor;
	this->price = price;
	M_nNumberOfProduct++; // ��ü ������ ī��Ʈ
}
void Product::printInfo() {
	cout << m_ObjType << endl;
	cout << id << endl;
	cout << desc << endl;
	cout << productor << endl;
	cout << price << endl;
}