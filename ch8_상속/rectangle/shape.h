#pragma once
#include <iostream>
// using namespace std; // �θ�Ŭ������ �ִ� ������Ͽ����� using namespace������ ������ �ϴ°� ����.

// �θ�Ŭ���� ����
class Shape {
private:
	int x;
	int y;
public:
	// default �μ����� ������ ������
	Shape(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
		std::cout << "�θ�Ŭ���� �Ű� ���� ������ ȣ���" << std::endl;
	}
	~Shape() {
		std::cout << "�θ�Ŭ���� �Ҹ��� ȣ���" << std::endl;
	}
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
	void printPoint() {
		std::cout << "(" << this->getX() << ", " << this->getY() << ")" << std::endl;
	}
};

