#pragma once
#include "car.h"

// �ڽ� Ŭ���� ����
class SportsCar : public Car{// Car Ŭ������ ��ӹ޴� �ڵ�
private:
	bool turbo;
public:
	SportsCar() {
		cout << "�ڽ� �⺻ ������ ȣ���" << endl;
	}
	SportsCar(bool turbo) {
		this->turbo = false;
		cout << "�ڽ� �Ű����� ������ ȣ���" << endl;
	}
	~SportsCar() {
		cout << "�ڽ� �Ҹ��� ������" << endl;
	}
	bool getTurbo() {
		return this->turbo;
	}
	void setTurbo(bool turbo) {
		this->turbo = turbo;
	}
	void printTurbo() {
		cout << "���� turbo�� ����: " << this->getTurbo() << endl;
	}
	void printSpeed() { // �θ�Ŭ������ void printSpeed() �޼��带 ����ΰ� �Ȱ����� �����ΰ� �ٸ�.. �������̵�!!
		cout << "���� SportsCar�� �ӵ�: " << this->speed << endl;
		cout << "�ڽ� speed ��������� �ּҰ�: " << &this->speed << endl;
	}
};