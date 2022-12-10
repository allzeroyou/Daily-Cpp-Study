/*
// 1. 연산자 착안
// !a는 a의 kick과 punch가 모두 0이면 true, 아니면 false 반환
Power a(0, 0), b(5,5);
if (!a) {
	~~
}
if (!b) {
	~~
}
// 2. 연산자 함수 선언
bool operator!(int op1, int op2);

// 3. 연산자 함수 구현
bool Power:: operator!() {
	if (kick == 0 && punch == 0) {
		return true;
	}
	else return false;
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
	bool operator!();
};
bool Power:: operator!() {
	if (kick == 0 && punch == 0) {
		return true;
	}
	else return false;
}
//int main() {
//	Power a(0, 0), b(5, 5);
//	if (!a) {
//		cout << "a의 파워가 0이다." << endl;
//	}else cout << "a의 파워가 0이 아니다." << endl;
//	if (!b) {
//		cout << "b의 파워가 0이다." << endl;
//	}
//	else cout << "b의 파워가 0이 아니다." << endl;
//	
//}