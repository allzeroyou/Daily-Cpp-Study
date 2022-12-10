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
		cout << "Person 클래스 기본 생성자 호출" << endl;
	}
	Person(int age, string name) {
		this->age = age;
		this->name = name;
		cout << "Person 클래스 매개변수 생성자 호출" << endl;
	}
	~Person() {
		cout << "Person 클래스 소멸자 호출" << endl;
	}
	int getAge() {
		return this->age;
	}
	string getName() {
		return this->name;
	}
	void printPerson() {
		cout << "나이: " << this->age << ", 이름: " << this->getName() << endl;
	}
};