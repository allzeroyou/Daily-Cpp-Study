// ���
// ������ ������� Ŭ�����κ��� ���ο� Ŭ������ ���鶧 ������ ������� Ŭ������ ������� �״�� �����޴� ��
// �������� Ŭ���������� �ڽŸ��� �ʿ��� ����� �߰��� �󸶵��� ����
// �ڽ�Ŭ�������� �������� �κ��� �θ�Ŭ������ ����, �ڽ�Ŭ������ �θ�Ŭ������ ���->�ڵ� ���̰�, �ŷڼ� ���, ���׵� ���� �� ����.
#include "sportsCar.h"

int main(void) {
	SportsCar sc;
	cout << endl;
	Car car;

	// �ڽ� Ŭ������ �θ�Ŭ������ ��� ��� ����
	sc.setSpeed(50);
	sc.printSpeed();
	cout << endl;

	// �θ�Ŭ������ ����̱⿡ ��� ����
	car.setSpeed(100);
	car.printSpeed();
	cout << endl;

	// �ڽ�Ŭ������ ���� ���
	sc.setTurbo(true);
	sc.printTurbo();
	cout << endl;

	car.printSpeed();
	sc.printSpeed();
}