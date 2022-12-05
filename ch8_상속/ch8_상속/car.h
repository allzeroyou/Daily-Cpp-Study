#pragma once
#include <iostream>
using namespace std;

class Car {
protected: // 접근제어자 protected는 자기자신이나 자신을 상속받는 클래스에서만 접근 가능
	int speed; // 속도(모든 차에는 속도가 있음-공통적인 부분)
public:
	Car() {
		cout << "부모 기본 생성자 호출됨" << endl;
	}
	Car(int speed) {
		this->speed = speed;
		cout << "부모 매개변수 생성자 호출됨" << endl;
	}
	~Car() {
		cout << "부모 소멸자 생성됨" << endl;
	}
	int getSpeed() {
		return this->speed;
	}
	void setSpeed(int speed) {
		this->speed = speed;
	}
	void printSpeed() {
		cout << "현재 speed의 상태: " << this->getSpeed() << endl;
		cout << "부모클래스 speed 멤버변수의 주소값: " << &this->speed << endl;
	}

};