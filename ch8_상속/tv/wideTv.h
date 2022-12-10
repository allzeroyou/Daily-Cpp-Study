#pragma once
#include "tv.h"

class wideTv :public Tv {
private:
	int inch;
public:
	wideTv(int inch = 0) {
		this->inch = inch;
		cout << "wideTv 클래스 생성자 호출됨" << endl;
	}
	~wideTv() {
		cout << "wideTv 클래스 소멸자 호출됨" << endl;
	}
	int getInch() {
		return this->inch;
	}
	void setInch(int inch) {
		this->inch = inch;
	}
	void inchPrint() {
		cout << "wideTv의 inch: " << this->inch << endl;
	}
};