#pragma once
#include <iostream>
using namespace std;

class Car {
protected: // ���������� protected�� �ڱ��ڽ��̳� �ڽ��� ��ӹ޴� Ŭ���������� ���� ����
	int speed; // �ӵ�(��� ������ �ӵ��� ����-�������� �κ�)
public:
	Car() {
		cout << "�θ� �⺻ ������ ȣ���" << endl;
	}
	Car(int speed) {
		this->speed = speed;
		cout << "�θ� �Ű����� ������ ȣ���" << endl;
	}
	~Car() {
		cout << "�θ� �Ҹ��� ������" << endl;
	}
	int getSpeed() {
		return this->speed;
	}
	void setSpeed(int speed) {
		this->speed = speed;
	}
	void printSpeed() {
		cout << "���� speed�� ����: " << this->getSpeed() << endl;
		cout << "�θ�Ŭ���� speed ��������� �ּҰ�: " << &this->speed << endl;
	}

};