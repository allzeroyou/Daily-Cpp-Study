#pragma once
#include "person.h"

class Student :public Person {
private:
	int sId;
public:
	Student() {
		this->sId = 1000;
		cout << "Student Ŭ���� �⺻ ������ ȣ��" << endl;
	}
	Student(int sId) {
		this->sId = sId;
		cout << "Student Ŭ���� �Ű����� ������ ȣ��" << endl;
	}
	~Student() {
		cout <<"Student Ŭ���� �Ҹ��� ȣ��" << endl;
	}
	int getsID() {
		return this->sId;
	}
	void printStudent() {
		cout << "�й�: " << this->getsID() << endl;
	}
};