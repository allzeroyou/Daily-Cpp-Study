#pragma once
#include <iostream>
using namespace std;

class Person {
private:
	int age;
	string name;
public:
	Person() {
		this->age = 0;
		this->name = "";
		cout << "Person Ŭ���� �⺻ ������ ȣ��" << endl;
	}
	Person(int age, string name) {
		this->age = age;
		this->name = name;
		cout << "Person Ŭ���� �Ű����� ������ ȣ��" << endl;
	}
	~Person() {
		cout << "Person Ŭ���� �Ҹ��� ȣ��" << endl;
	}
	int getAge() {
		return this->age;
	}
	string getName() {
		return this->name;
	}
	void printPerson() {
		cout << "����: " << this->age << ", �̸�: " << this->getName() << endl;
	}
};