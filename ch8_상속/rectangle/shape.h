#pragma once
#include <iostream>
// using namespace std; // 부모클래스가 있는 헤더파일에서는 using namespace에서는 생략을 하는게 좋다.

// 부모클래스 정의
class Shape {
private:
	int x;
	int y;
public:
	// default 인수값을 설정한 생성자
	Shape(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
		std::cout << "부모클래스 매개 변수 생성자 호출됨" << std::endl;
	}
	~Shape() {
		std::cout << "부모클래스 소멸자 호출됨" << std::endl;
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

