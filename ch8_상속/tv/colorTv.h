#pragma once
#include "tv.h"

class ColorTv:public Tv {
private:
	string color;
public:
	ColorTv(string color) {
		this->color = color;
		cout << "Color Tv 자식 클래스 생성" << endl;
	}
	~ColorTv() {
		cout << "Color Tv 자식 클래스 소멸자 호출됨" << endl;
	}
	string getColor() {
		return this->color;
	}
	void setColor(string color) {
		this->color = color;
	}
	void show() {
		cout << "현재 색상: " << this->getColor() << endl;
	}

};