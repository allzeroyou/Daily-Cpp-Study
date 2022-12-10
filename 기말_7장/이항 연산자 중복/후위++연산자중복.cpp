/*
// 1. 연산자 착안
Power a(3, 5), b;
b = a++;

// 2. 연산자 함수 선언
// 전위연산자와 구분하기위해 후위연산자는 매개변수 가짐.
a .++(임의의 정수);
Power operator++(int x);

// 3. 연산자 함수 구현
Power Power::operator++(int x) {
	Power tmp = *this; // 증가 이전 객체 상태 저장
	kick++;
	punch++;
	return tmp; // 증가 이전의 객체 리턴.
}
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(){
		this->kick = 0; this->punch = 0;
	};
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	Power operator++(int x);
	void show();
};
Power Power::operator++(int x) {
	Power tmp = *this; // 증가 이전 객체 상태 저장
	kick++;
	punch++;
	return tmp; // 증가 이전의 객체 리턴.
}
//int main() {
//	
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = a++;
//	a.show(); // a의 파워는 1 증가
//	b.show(); // b는 a가 증가되기 이전의 상태
//}
