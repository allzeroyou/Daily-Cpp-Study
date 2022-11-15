#include "Product.h"

Product::Product() {
	cout << "Product 클래스 기본 생성자 생성";
};

Product::Product(int m_ObjType, int id, string description, string productor, int price) {
	this->m_ObjType = m_ObjType;
	this->id = id;
	this->description = description;
	this->productor = productor;
	this->price = price;
}

void Product::showProduct() {
	cout << "상품설명 : " << this->description << endl;
	cout << "생산자 : " << this->productor << endl;
	cout << "가격 : " << this->price << endl;
}
