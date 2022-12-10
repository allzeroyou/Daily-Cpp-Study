/*
// 1. 연산자 착안
// Power 객체 a,b에 대해 전위 ++ 연산자
// 객체 a의 모든 멤버들의 값을 1씩 증가, 변경된 객체 a의 참조를 리턴.
Power a(3, 5), b;
b = ++a;
++a = b;
// 2. 연산자 함수 선언
// a.++();
Power& operator++(); // 매개변수 없음.

// 3. 연산자 함수 구현
// operator++()-> 자신의 kick, punch를 각각 1씩 증가 -> 자신(*this)에 대한 참조리턴.
Power& Power:: operator++() {
	kick++;
	punch++;
	return *this; // 변경된 객체 자신의 참조 리턴
}
*/

#include <iostream>
using namespace std;

class Power {
private:
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator++(); // 매개변수 없음.
};
Power& Power:: operator++() {
	kick++;
	punch++;
	return *this; // 변경된 객체 자신의 참조 리턴
}
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = ++a;
//	a.show();
//	b.show();
//}