#pragma once
#include "car.h"

// 자식 클래스 정의
class SportsCar : public Car{// Car 클래스를 상속받는 코드
private:
	bool turbo;
public:
	SportsCar() {
		cout << "자식 기본 생성자 호출됨" << endl;
	}
	SportsCar(bool turbo) {
		this->turbo = false;
		cout << "자식 매개변수 생성자 호출됨" << endl;
	}
	~SportsCar() {
		cout << "자식 소멸자 생성됨" << endl;
	}
	bool getTurbo() {
		return this->turbo;
	}
	void setTurbo(bool turbo) {
		this->turbo = turbo;
	}
	void printTurbo() {
		cout << "현재 turbo의 상태: " << this->getTurbo() << endl;
	}
	void printSpeed() { // 부모클래스의 void printSpeed() 메서드를 선언부가 똑같으나 구현부가 다른.. 오버라이딩!!
		cout << "현재 SportsCar의 속도: " << this->speed << endl;
		cout << "자식 speed 멤버변수의 주소값: " << &this->speed << endl;
	}
};