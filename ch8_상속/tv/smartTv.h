#pragma once
#include "tv.h"

class smartTv :public Tv {
private:
	bool smart;
public:
	smartTv(bool smart) {
		this->smart = smart;
		cout << "smartTv 클래스 생성자 호출" << endl;
	}
	~smartTv() {
		cout << "smartTv 클래스 소멸자 호출" << endl;
	}
	bool getSmart() {
		return this->smart;
	}
	void setSmart(bool smart) {
		this->smart = smart;
	}
	void smartOn(bool smart) {
		this->smart = true;
		cout << "smart 기능이 활성화됨" << endl;
	}
	void smartOff(bool smart) {
		this->smart = smart;
		cout << "smart 기능이 꺼짐" << endl;
	}
};