#include <iostream>
using namespace std;

class Stack {
private:
	int size;
	int* pnum;
	int tos; // top of stack
public:
	Stack() {
		size = 10;
		pnum = new int[size];
		tos = -1;
	}
	~Stack() {
		if (pnum) delete[] pnum;
	}
	Stack& operator<<(int op2);
	Stack& operator>>(int& n);
	bool operator!();
};
Stack& Stack::operator<<(int op2) { // push
	tos++;
	pnum[tos] = op2;
	return *this;
}

Stack& Stack::operator>>(int& n) {//pop
	n = pnum[tos];
	tos--;
	return *this;
}
bool Stack::operator!() {
	if (tos == -1)
		return true;
	else return false;
}

//int main() {
//	Stack stack;
//	stack << 3 << 5 << 10; // 3, 5, 10 순서대로 푸시
//	while (true) {
//		if (!stack) break;
//		int x;
//		stack >> x;
//		cout << x << " ";
//	}
//	cout << endl;
//}