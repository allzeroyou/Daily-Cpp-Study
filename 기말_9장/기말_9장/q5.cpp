#include <iostream>
using namespace std;

class AbstactGate { // 추상 클래스
protected:
	bool x, y;
public:
	void set(bool x, bool y) {
		this->x = x;
		this->y = y;
	}
	virtual bool operation() = 0; // 순수 가상 함수
};
class ANDGate :public AbstactGate {
public:
	bool operation() {
		return x && y;
	}
};
class ORGate :public AbstactGate {
public:
	bool operation() {
		return x || y;
	}
};
class XORGate :public AbstactGate {
public:
	bool operation() {
		return x ^ y;
	}
};

//int main() {
//	ANDGate andGate;
//	ORGate orGate;
//	XORGate xorGate;
//
//	andGate.set(true, false);
//	orGate.set(true, false);
//	xorGate.set(true, false);
//	
//	cout.setf(ios::boolalpha); // boolean 값을 "true", "false" 문자열로 출력할 것을 지시
//	cout << andGate.operation() << endl;
//	cout << orGate.operation() << endl;
//	cout << xorGate.operation() << endl;
//
//}