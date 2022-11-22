#include <iostream>
using namespace std;

class Product {
public:
	double m_nId; // 8 byte �Ҵ�
	Product() {
		cout << "Called Product Constructor" << endl;
	}
	~Product() {
		cout << "Called Product Destructor" << endl;
	}
	virtual void print() { // ���� �Լ�
		cout << "print Product Info" << endl;
	}
};

class Book :public Product {
public:
	double isbn; // 8 byte �Ҵ�
	Book() {
		cout << "Called Book Constructor" << endl;
	}
	~Book() {
		cout << "Called Book Destructor" << endl;
	}
	void print() override { // print()�Լ� override �ϰ���. �ǵ������� �������Ϸ��� �ϴ°� ǥ��. �������Ϸ��� �Լ��� ��Ÿ ����(ex. printt..)
		cout << "print Book Info" << endl;
	}
};

int main(void) {
	// Book myBook;
	cout << "Product size: " << sizeof(Product) << endl; // double ��: 8 byte
	cout << "Book size: " << sizeof(Book) << endl; // double ��: 8 byte
	return 0;
}