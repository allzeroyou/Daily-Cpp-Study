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
	pBase->f(); // 동적바인딩. Base 의 f()에 대한 모든 호출은 실행시간중에 Derived의 f()함수로 동적바인딩됨.
}