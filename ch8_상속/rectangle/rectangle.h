#pragma once
#include "shape.h"
using namespace std;

// 자식 클래스 정의
class Rectangle :public Shape {
private:
	int width;
	int height;
public:
	Rectangle(int width = 0, int height = 0) {
		this->width = width;
		this->height = height;
		cout << "자식클래스 매개변수 생성자 호출됨" << endl;
	}
	~Rectangle() {
		cout << "자식클래스 소멸자 호출됨" << endl;
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
	// 사각형의 면적 구하는 멤버 메서드
	int getArea() {
		return this->width * this->height;
	}
	void printRectangle() {
		cout << "width: " << this->getWidth() << ", " << "height: " << this->getHeight() << endl;
	}
};