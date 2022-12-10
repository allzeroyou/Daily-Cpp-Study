#include <iostream>
using namespace std;

class Matrix {
private:
	int arr[4]; // 배열 이용
public:
	Matrix() {
		// 배열 초기화
		for (int i = 0; i < 4; i++) arr[i] = 0;
	}
	Matrix(int c1, int c2, int  c3, int c4) {
		arr[0] = c1;
		arr[1] = c2;
		arr[2] = c3;
		arr[3] = c4;
	}
	// a >> x; 
	Matrix& operator>>(int op2[]) {
		for (int i = 0; i < 4; i++) {
			op2[i]= arr[i];
		}
		return *this;
	}
	// b<< y;
	Matrix& operator<<(int op2[]) {
		for (int i = 0; i < 4; i++) {
			arr[i] = op2[i];
		}
		return *this;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) cout << arr[i] << " ";
		cout << " }" << endl;
	}
};

//int main() {
//	Matrix a(4, 3, 2, 1), b;
//	int x[4], y[4] = { 1,2,3,4 };
//	a >> x;
//	b << y;
//	for (int i = 0; i < 4; i++) {
//		cout << x[i] << " ";
//	}
//	cout << endl;
//	b.show();
//}