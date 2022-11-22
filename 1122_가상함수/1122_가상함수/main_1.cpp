#include <iostream>
using namespace std;

class Product {
public:
	double m_nId; // 8 byte �Ҵ�
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
	double isbn; // 8 byte �Ҵ�
	Book() {
		cout << "Called Book Constructor" << endl;
	}
	virtual~Book() {
		cout << "Called Book Destructor" << endl;
	}
	void print() override { // print()�Լ� override �ϰ���. �ǵ������� �������Ϸ��� �ϴ°� ǥ��. �������Ϸ��� �Լ��� ��Ÿ ����(ex. printt..)
		cout << "print Book Info" << endl;
	}
};

int main(void) {
	Product* p_ptr = new Book; // up-casting: �θ�Ŭ���� Ÿ������.
	p_ptr->print();
	delete p_ptr; // Product��ŭ ������. -> memory leak �߻�
	// Book�� ���� �Ҹ��� ���� x
	// �Ҹ��ڸ� �����Լ��� �������ָ� ��.
	// ������Ÿ�Կ� ���� ����Լ� ȣ�� x
	// ���� �ν��Ͻ��� ���� �������� �Լ� ȣ�� -> ���� ������ Book�� ���� ����Լ� ȣ��.
	// �θ�Ŭ������ ������ ����-> �����Լ� ȣ��(virtual ���) -> ����.
	// �޸� leak�� �߻����� �ʰԲ� �Ϸ���!
	// �ڽ�Ŭ���� delete ��, �޸� leak �߻��� ����.


}