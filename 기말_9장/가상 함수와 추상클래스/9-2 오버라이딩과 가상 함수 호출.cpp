#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called!" << endl; }
};
class Derived :public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};
void main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Deroved::f()

	Base* pBase;
	pBase = pDer;
	pBase->f(); // �������ε�. Base �� f()�� ���� ��� ȣ���� ����ð��߿� Derived�� f()�Լ��� �������ε���.
}