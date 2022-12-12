#include <iostream>
using namespace std;

class AbstactGate { // �߻� Ŭ����
protected:
	bool x, y;
public:
	void set(bool x, bool y) {
		this->x = x;
		this->y = y;
	}
	virtual bool operation() = 0; // ���� ���� �Լ�
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
//	cout.setf(ios::boolalpha); // boolean ���� "true", "false" ���ڿ��� ����� ���� ����
//	cout << andGate.operation() << endl;
//	cout << orGate.operation() << endl;
//	cout << xorGate.operation() << endl;
//
//}