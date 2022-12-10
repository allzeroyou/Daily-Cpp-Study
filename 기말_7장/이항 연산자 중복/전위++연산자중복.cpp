/*
// 1. ������ ����
// Power ��ü a,b�� ���� ���� ++ ������
// ��ü a�� ��� ������� ���� 1�� ����, ����� ��ü a�� ������ ����.
Power a(3, 5), b;
b = ++a;
++a = b;
// 2. ������ �Լ� ����
// a.++();
Power& operator++(); // �Ű����� ����.

// 3. ������ �Լ� ����
// operator++()-> �ڽ��� kick, punch�� ���� 1�� ���� -> �ڽ�(*this)�� ���� ��������.
Power& Power:: operator++() {
	kick++;
	punch++;
	return *this; // ����� ��ü �ڽ��� ���� ����
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
	Power& operator++(); // �Ű����� ����.
};
Power& Power:: operator++() {
	kick++;
	punch++;
	return *this; // ����� ��ü �ڽ��� ���� ����
}
//int main() {
//	Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = ++a;
//	a.show();
//	b.show();
//}