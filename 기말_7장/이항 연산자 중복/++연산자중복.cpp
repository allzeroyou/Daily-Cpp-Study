#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	// 1. 연산자 착안
	// + 연산 -> 두 Power 객체의 kick, punch를 더하겠음.

	// 2. 연산자 함수 선언
	Power operator+(Power op2); // + 연산자 함수 선언
};
// 3. 연산자 함수 구현
Power Power::operator+(Power op2) {
	Power op1;
	op1.kick = this->kick + op2.kick;
	op1.punch = this->punch + op2.punch;
	return op1;
}
void Power::show() {
	cout << "kick= " << kick << "," << "punch= " << punch << endl;
}
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	c = a + b; // Power의 객체인 + 연산
//	a.show();
//	b.show();
//	c.show();
//}
//


