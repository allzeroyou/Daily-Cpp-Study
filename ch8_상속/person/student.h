#pragma once
#include "person.h"

class Student :public Person {
private:
	int sId;
public:
	Student() {
		this->sId = 1000;
		cout << "Student 클래스 기본 생성자 호출" << endl;
	}
	Student(int sId) {
		this->sId = sId;
		cout << "Student 클래스 매개변수 생성자 호출" << endl;
	}
	~Student() {
		cout <<"Student 클래스 소멸자 호출" << endl;
	}
	int getsID() {
		return this->sId;
	}
	void printStudent() {
		cout << "학번: " << this->getsID() << endl;
	}
};