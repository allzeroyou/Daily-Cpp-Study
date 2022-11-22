#include <iostream>
using namespace std;

class Product {
public:
	double m_nId; // 8 byte 할당
	Product() {
		cout << "Called Product Constructor" << endl;
	}
	~Product() {
		cout << "Called Product Destructor" << endl;
	}
	virtual void print() { // 가상 함수
		cout << "print Product Info" << endl;
	}
};

class Book :public Product {
public:
	double isbn; // 8 byte 할당
	Book() {
		cout << "Called Book Constructor" << endl;
	}
	~Book() {
		cout << "Called Book Destructor" << endl;
	}
	void print() override { // print()함수 override 하겠음. 의도적으로 재정의하려고 하는걸 표출. 재정의하려는 함수의 오타 예방(ex. printt..)
		cout << "print Book Info" << endl;
	}
};

int main(void) {
	// Book myBook;
	cout << "Product size: " << sizeof(Product) << endl; // double 형: 8 byte
	cout << "Book size: " << sizeof(Book) << endl; // double 형: 8 byte
	return 0;
}