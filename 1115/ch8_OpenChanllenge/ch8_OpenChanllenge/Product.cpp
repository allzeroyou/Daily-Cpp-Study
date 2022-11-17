#include "Product.h"


Product::Product(int m_ObjType, int id, string description, string productor, int price) {
	this->m_ObjType = m_ObjType;
	this->id = id;
	this->description = description;
	this->productor = productor;
	this->price = price;
	numberOfProduct++; // 객체 갯수 카운트
}

void Product::printInfo() {
	cout << "상품설명 : " << this->description << endl;
	cout << "생산자 : " << this->productor << endl;
	cout << "가격 : " << this->price << endl;
}
