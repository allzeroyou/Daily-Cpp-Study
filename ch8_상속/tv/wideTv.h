#pragma once
#include "tv.h"

class wideTv :public Tv {
private:
	int inch;
public:
	wideTv(int inch = 0) {
		this->inch = inch;
		cout << "wideTv Ŭ���� ������ ȣ���" << endl;
	}
	~wideTv() {
		cout << "wideTv Ŭ���� �Ҹ��� ȣ���" << endl;
	}
	int getInch() {
		return this->inch;
	}
	void setInch(int inch) {
		this->inch = inch;
	}
	void inchPrint() {
		cout << "wideTv�� inch: " << this->inch << endl;
	}
};