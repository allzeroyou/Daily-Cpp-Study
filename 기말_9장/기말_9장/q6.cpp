#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // ���ÿ� n Ǫ��. ������ full�̸� false ����
	virtual bool pop(int& n) = 0; // ���ÿ��� ���� ������ n�� ����, ������ empty�̸� false����
	virtual int size() = 0; // ���� ���ÿ� ����� ���� ���� ����
};
class IntStack :public AbstractStack {
	int capacity; // ���� ũ��
	int tos; // top of stack, ���� ���ÿ� ����� ���� ����
	int* p;

public:
	IntStack(int size);
	~IntStack();
	bool push(int n);
	bool pop(int& n);
	int size() {
		return tos;
	}
};
IntStack::IntStack(int size) { // stack �ʱ�ȭ
	p = new int[size];
	this->capacity = size;
	tos = 0;
}
IntStack::~IntStack() {
	delete[]p;
}
bool IntStack::push(int n) {
	if (tos >= capacity) // stack full
		return false;
	p[tos] = n;
	tos++;
	return true;
}
bool IntStack::pop(int& n) {
	if (tos == 0)//empty
		return false;
	tos--;
	n = p[tos];
	return true;
}

//int main() {
//	IntStack a(5);
//	for (int i = 0; i < 10; i++) { // ó�� 5���� ���������� push, ���� 5���� ���� full�� push ����
//		if (a.push(i)) cout << "push ����" << endl;
//		else cout << "stack full" << endl;
//	}
//	int n;
//	for (int i = 0; i < 10; i++) { // ó�� 5���� ���������� pop, ���� 5���� ���� empty�� pop����
//		if (a.pop(n))cout << "pop ����" << n<<endl;
//		else cout << "stack empty" << endl;
//
//	}
//}