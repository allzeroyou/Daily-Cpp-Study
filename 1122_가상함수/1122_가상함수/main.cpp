#include <iostream>
using namespace std;

class Product {
public:
	double m_nId;
	Product() {
		cout << "Called Product Constructor" << endl;
	}
	virtual ~Product() {
		cout << "Called Product Destructor" << endl;
	}
	virtual void print() { // ���� �Լ�
		cout << "print Product Info" << endl;
	}
};
class Book :public Product {
public:
	double isbn;
	Book() {
		cout << "Called Book Constructor" << endl;
	}
	virtual ~Book() {
		cout << "Called Book Destructor" << endl;
	}
	 void print() { // ���� �Լ�
		cout << "print Book Info" << endl;
	}
};
class Disk :public Product {
public:
	double id;
	Disk() {
		cout << "Called Disk Constructor" << endl;
	}
	virtual ~Disk() override {
		cout << "Called Disk Destructor" << endl;
	}
	void print() override { // ���� �Լ�
		cout << "print Disk Info" << endl;
	}
};
void main() {
	Product* p_ptr = new Book; // Book ��ü ����, �⺻Ŭ����(�θ� Ŭ����) ������ ���� : �� ĳ����
	Product* p_ptr2 = new Disk;
	p_ptr2->print();
	delete p_ptr2;

}