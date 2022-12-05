#pragma once
#include "shape.h"
using namespace std;

// �ڽ� Ŭ���� ����
class Rectangle :public Shape {
private:
	int width;
	int height;
public:
	Rectangle(int width = 0, int height = 0) {
		this->width = width;
		this->height = height;
		cout << "�ڽ�Ŭ���� �Ű����� ������ ȣ���" << endl;
	}
	~Rectangle() {
		cout << "�ڽ�Ŭ���� �Ҹ��� ȣ���" << endl;
	}
	int getWidth() {
		return this->width;
	}
	int getHeight() {
		return this->height;
	}
	void setWidth(int width) {
		this->width = width;
	}
	void setHeight(int height) {
		this->height = height;
	}
	// �簢���� ���� ���ϴ� ��� �޼���
	int getArea() {
		return this->width * this->height;
	}
	void printRectangle() {
		cout << "width: " << this->getWidth() << ", " << "height: " << this->getHeight() << endl;
	}
};