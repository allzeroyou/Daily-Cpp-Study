#include "Product.h"


Product::Product(int m_ObjType, int id, string description, string productor, int price) {
	this->m_ObjType = m_ObjType;
	this->id = id;
	this->description = description;
	this->productor = productor;
	this->price = price;
	numberOfProduct++; // ��ü ���� ī��Ʈ
}

void Product::printInfo() {
	cout << "��ǰ���� : " << this->description << endl;
	cout << "������ : " << this->productor << endl;
	cout << "���� : " << this->price << endl;
}
