#include <iostream>
using namespace std;

class Matrix {
private:
	int c1, c2, c3, c4;
public:
	Matrix() {
		this->c1 = 0;
		this->c2 = 0; this->c3 = 0; this->c4 = 0;
	}
	Matrix(int c1, int c2, int  c3, int c4) {
		this->c1 = c1;
		this->c2 = c2;
		this->c3 = c3;
		this->c4 = c4;
	}
	Matrix operator+(Matrix op2) {
		Matrix op1;
		op1.c1 = this->c1 + op2.c1;
		op1.c2 = this->c2 + op2.c2;
		op1.c3 = this->c3 + op2.c3;
		op1.c4 = this->c4 + op2.c4;

		return op1;
	}
	Matrix& operator+=(Matrix op2) {
		this->c1 = c1 + op2.c1;
		this->c2 = c2 + op2.c2;
		this->c3 = c3 + op2.c3;
		this->c4 = c4 + op2.c4;
		return *this;
	}
	bool operator==(Matrix op2) {
		if (c1 == op2.c1 && c2 == op2.c2 && c3 == op2.c3 && c4 == op2.c4) return true;
		else return false;
	}
	void show() {
		cout << "Matrix = { " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << "}" << endl;
	}
};

//int main() {
//	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
//	c = a + b;
//	a += b;
//	a.show(); b.show(); c.show();
//	if (a == c)
//		cout << "a and c are the same" << endl;
//}