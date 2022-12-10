
#include <iostream>
using namespace std;

// 1. 연산자 착안
// 두개의 Power 클래스 비교
//Power a(3, 5), b(3, 5);
//if (a == b) cout << "두 파워가 같음";
//else cout << "두 파워가 같지 않음";
// operater ==() 연산자 함수의 리턴타입은 bool 임.


class Power {
private:
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	// 2. 연산자 함수 선언
	bool operator==(Power op2);
};
// 3. 연산자 함수 구현
bool Power:: operator == (Power op2) {
	if (kick == op2.kick && punch == op2.punch) return true;
	else return false;
}
//void Power::show() {
//	cout << "kick= " << kick << ", " << "punch= " << punch << endl;
//}

//int main() {
//	Power a(3, 5), b(3, 5);
//	a.show();
//	b.show();
//	if (a == b) cout << "두 파워가 같다." << endl;
//	else cout << "두 파워가 같지 않다." << endl;
//}