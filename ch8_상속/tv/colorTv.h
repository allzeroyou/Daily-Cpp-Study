#pragma once
#include "tv.h"

class ColorTv:public Tv {
private:
	string color;
public:
	ColorTv(string color) {
		this->color = color;
		cout << "Color Tv �ڽ� Ŭ���� ����" << endl;
	}
	~ColorTv() {
		cout << "Color Tv �ڽ� Ŭ���� �Ҹ��� ȣ���" << endl;
	}
	string getColor() {
		return this->color;
	}
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << "���� ����: " << this->getColor() << endl;
	}

};