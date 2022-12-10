/*
// 1. ������ ����
a�� kick ���� punch���� + 2 �Ѱ� ����

Power a(3, 5), b;
b = a + 2;
// 2. ������ ����
Power operator+(int op2);
// 3. ������ ����
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
// &������ �ߺ� ���� : a�� ��� ���� ���� b�� ��� ������ �� ������ ���� �ִٸ� true, �ƴϸ� false��ȯ
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


	cout << "a�� ���� ���� �ǿ����� �Է�: ";
	int op2 = 0;
	cin >> op2;
	if (a > op2) {
		cout << "a�� ��� ��������� " << op2 << " ���� ū �����̴�." << endl;
	}
	else cout << "a�� ������� �� " << op2 << " ���� ũ�� ���� ���ڰ� �ִ�." << endl;


	if (a & b) {
		cout << "a�� b���� ������ ���� �ֽ��ϴ�." << endl;
	}else cout << "a�� b���� ������ ���� �����ϴ�." << endl;

}
*/
