/*
// 1. ������ ����
// !a�� a�� kick�� punch�� ��� 0�̸� true, �ƴϸ� false ��ȯ
Power a(0, 0), b(5,5);
if (!a) {
	~~
}
if (!b) {
	~~
}
// 2. ������ �Լ� ����
bool operator!(int op1, int op2);

// 3. ������ �Լ� ����
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
//		cout << "a�� �Ŀ��� 0�̴�." << endl;
//	}else cout << "a�� �Ŀ��� 0�� �ƴϴ�." << endl;
//	if (!b) {
//		cout << "b�� �Ŀ��� 0�̴�." << endl;
//	}
//	else cout << "b�� �Ŀ��� 0�� �ƴϴ�." << endl;
//	
//}