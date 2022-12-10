// 1. 연산자 착안
// power 객체 a, b에 대해 += 연산 적용
// a와 b를 합쳐 새로운 파워로 갱신.
// Power a(3, 5), b(4, 6);
// a += b;

#include <iostream>
using namespace std;

class Power {
private:
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	// 2. 연산자 함수 선언
	// += 연산자 리턴 타입=?
	// 원본 객체 a가 아닌 복사본에 b를 더하게 되는 문제 발생.
	// 문제를 해결하기 위해 (a+=b)연산이 "객체 a의 참조"를 리턴해야 함.
	// 리턴타입: Power&
	Power& operator += (Power op2);
};
// 3. 연산자 함수 구현
Power& Power::operator+=(Power op2) {
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this; // Power 객체 a 리턴
}
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	a.show();
//	b.show();
//	c = a += b;
//	a.show();
//	c.show();
//}