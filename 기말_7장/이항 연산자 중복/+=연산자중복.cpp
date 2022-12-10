// 1. ������ ����
// power ��ü a, b�� ���� += ���� ����
// a�� b�� ���� ���ο� �Ŀ��� ����.
// Power a(3, 5), b(4, 6);
// a += b;

#include <iostream>
using namespace std;

class Power {
private:
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	// 2. ������ �Լ� ����
	// += ������ ���� Ÿ��=?
	// ���� ��ü a�� �ƴ� ���纻�� b�� ���ϰ� �Ǵ� ���� �߻�.
	// ������ �ذ��ϱ� ���� (a+=b)������ "��ü a�� ����"�� �����ؾ� ��.
	// ����Ÿ��: Power&
	Power& operator += (Power op2);
};
// 3. ������ �Լ� ����
Power& Power::operator+=(Power op2) {
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this; // Power ��ü a ����
}
//int main() {
//	Power a(3, 5), b(4, 6), c;
//	a.show();
//	b.show();
//	c = a += b;
//	a.show();
//	c.show();
//}