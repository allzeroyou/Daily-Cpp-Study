
#include <iostream>
using namespace std;

// 1. ������ ����
// �ΰ��� Power Ŭ���� ��
//Power a(3, 5), b(3, 5);
//if (a == b) cout << "�� �Ŀ��� ����";
//else cout << "�� �Ŀ��� ���� ����";
// operater ==() ������ �Լ��� ����Ÿ���� bool ��.


class Power {
private:
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { this->kick = kick; this->punch = punch; }
	void show();
	// 2. ������ �Լ� ����
	bool operator==(Power op2);
};
// 3. ������ �Լ� ����
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
//	if (a == b) cout << "�� �Ŀ��� ����." << endl;
//	else cout << "�� �Ŀ��� ���� �ʴ�." << endl;
//}