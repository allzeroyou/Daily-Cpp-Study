#pragma once
#include "tv.h"

class smartTv :public Tv {
private:
	bool smart;
public:
	smartTv(bool smart) {
		this->smart = smart;
		cout << "smartTv Ŭ���� ������ ȣ��" << endl;
	}
	~smartTv() {
		cout << "smartTv Ŭ���� �Ҹ��� ȣ��" << endl;
	}
	bool getSmart() {
		return this->smart;
	}
	void setSmart(bool smart) {
		this->smart = smart;
	}
	void smartOn(bool smart) {
		this->smart = true;
		cout << "smart ����� Ȱ��ȭ��" << endl;
	}
	void smartOff(bool smart) {
		this->smart = smart;
		cout << "smart ����� ����" << endl;
	}
};