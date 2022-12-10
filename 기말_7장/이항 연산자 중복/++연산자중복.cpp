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
	// 1. ������ ����
	// + ���� -> �� Power ��ü�� kick, punch�� ���ϰ���.

	// 2. ������ �Լ� ����
	Power operator+(Power op2); // + ������ �Լ� ����
};
// 3. ������ �Լ� ����
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
//	c = a + b; // Power�� ��ü�� + ����
//	a.show();
//	b.show();
//	c.show();
//}
//


