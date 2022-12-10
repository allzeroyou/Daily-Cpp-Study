#include <iostream>
using namespace std;

class Color {
private:
	int r, g, b;
public:
	Color() {
		int r = 0;
		int g = 0;
		int b = 0;
	}
	Color(int r, int g, int b) {
		this->r = r;
		this->g = g;
		this->b = b;
	}
	void show() {
		cout << r << " " << g << " " << b << endl;
	}
	// + 연산자 중복 정의 : 색 더하기
	Color operator+(Color op2) {
		Color op1;
		op1.r = this->r + op2.r;
		op1.g = this->g + op2.g;
		op1.b = this->b + op2.b;
		if (op1.r >= 255) op1.r = 255;
		if (op1.g >= 255) op1.g = 255;
		if (op1.b >= 255) op1.b = 255;
		return op1;
	}
	// == 연산자 중복 정의 : 색 비교
	bool operator==(Color op2) {
		// op1 객체를 하나더 생성하는것이 아닌, this를 이용함.
		if (this->r== op2.r && this->g == op2.g&& this->b == op2.b) {
			return true;
		}
		else return false;
	}

};

//int main() {
//	Color red(255, 0, 0), blue(0, 0, 255), c;
//	c = red + blue;
//	c.show();
//	Color fuchsia(255, 0, 255);
//	if (c == fuchsia)
//		cout << "보라색 맞음";
//	else
//		cout << "보라색 아님";
//}