/*
// 1. 연산자 착안
a의 kick 값과 punch값의 + 2 한값 리턴

Power a(3, 5), b;
b = a + 2;
// 2. 연산자 선언
Power operator+(int op2);
// 3. 연산자 구현
Power Power::operator +(int op2) {
	Power op1;
	op1.kick += op2;
	op1.punch += op2;
	return op1;
}
*/
#include <iostream>
using namespace std;

class Power {
private:
	int kick;
	int punch;
public:
	Power() { this->kick = 0; this->punch = 0; }
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator+(int op2);
	bool operator>(int op2);
	bool operator&(Power op2);
};
Power Power::operator +(int op2) {
	Power op1;
	op1.kick = kick+ op2;
	op1.punch =punch+ op2;
	return op1;
}
bool Power::operator>(int op2) {
	if (kick >= op2 && punch >= op2) {
		return true;
	}
	else return false;
}
// &연산자 중복 정의 : a의 멤버 변수 값과 b의 멤버 변수값 중 동일한 값이 있다면 true, 아니면 false반환
bool Power::operator&(Power op2) {
	cout << op2.kick << endl;
	if (kick == op2.kick)
		return true;
	else if(punch == op2.punch)
		return true;
	else
		return false;
}
/*
int main() {
	Power a(3, 5), b(3,5);
	a.show();
	b.show();
	b = a + 2;
	a.show();
	b.show();


	cout << "a와 비교할 정수 피연산자 입력: ";
	int op2 = 0;
	cin >> op2;
	if (a > op2) {
		cout << "a의 모든 멤버변수는 " << op2 << " 보다 큰 숫자이다." << endl;
	}
	else cout << "a의 멤버변수 중 " << op2 << " 보다 크지 않은 숫자가 있다." << endl;


	if (a & b) {
		cout << "a와 b에는 동일한 값이 있습니다." << endl;
	}else cout << "a와 b에는 동일한 값이 없습니다." << endl;

}
*/
