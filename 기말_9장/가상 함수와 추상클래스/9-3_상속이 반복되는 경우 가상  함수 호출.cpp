#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f()called" << endl; }
};

class Derived :public Base {
public: void f() { cout << "Derived::f() called" << endl; }
};
class GrandDerived :public Derived {
public:
	void f() { cout << "GrandDerived::f() called" << endl; }
};
//int main() {
//	GrandDerived g;
//	Derived d;
//	Base* bp;
//	Derived* dp;
//	GrandDerived* gp;
//
//
//	bp = dp  = &d;
//	gp = &g;
//	bp->f();
//	dp->f();
//	gp->f();
//}