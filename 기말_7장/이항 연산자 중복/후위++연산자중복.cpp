/*
// 1. ������ ����
Power a(3, 5), b;
b = a++;

// 2. ������ �Լ� ����
// ���������ڿ� �����ϱ����� ���������ڴ� �Ű����� ����.
a .++(������ ����);
Power operator++(int x);

// 3. ������ �Լ� ����
Power Power::operator++(int x) {
	Power tmp = *this; // ���� ���� ��ü ���� ����
	kick++;
	punch++;
	return tmp; // ���� ������ ��ü ����.
}
*/

#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(){
		this->kick = 0; this->punch = 0;
	};
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	Power operator++(int x);
	void show();
};
Power Power::operator++(int x) {
	Power tmp = *this; // ���� ���� ��ü ���� ����
	kick++;
	punch++;
	return tmp; // ���� ������ ��ü ����.
}
//int main() {
//	
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = a++;
//	a.show(); // a�� �Ŀ��� 1 ����
//	b.show(); // b�� a�� �����Ǳ� ������ ����
//}
