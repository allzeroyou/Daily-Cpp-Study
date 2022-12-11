#include <iostream>
#include <string>
using namespace std;

class BaseArray {
private:
	int capacity; // �迭 ũ��
	int* mem; // ���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity]; //capacity��ŭ �迭 ���� �Ҵ�
	}
	~BaseArray() { delete[]mem; } // new�� ¦�� delete
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyStack :public BaseArray {
	int tos; // ������ push�� ��ġ, ���ÿ� ����ִ� ������ ����
public:
	MyStack(int capacity);
	void push(int n);
	int pop();
	int length() { return tos; }
	int capacity() { return getCapacity(); };
};
MyStack::MyStack(int capacity) :BaseArray(capacity) {
	tos = 0; // ���� ���ÿ� ����ִ� ������ ����
}
void MyStack::push(int n) {
	if (tos == capacity())
		return; // stack ������� x
	put(tos, n);
	tos++;
}
int MyStack::pop() {
	if (tos == 0)
		return -1; // stack �����
	tos--;
	return get(tos);
}
//int MyStack::capacity() {
//	return getCapacity();
//}
//int MyStack::length() {
//	return tos;
//}
//int main() {
//	MyStack mStack(100);
//	int n;
//	cout << "���ÿ� ������ 5���� ���� �Է�>>";
//	for (int i = 0; i < 5; i++) {
//		cin >> n;
//		mStack.push(n); // ť�� ����
//	}
//	cout << "���� �뷮: " << mStack.capacity() << ", ������ ũ��: " << mStack.length() << endl;
//	cout << "������ ��� ���Ҹ� ���� ���>>";
//	while (mStack.length() != 0) {
//		cout << mStack.pop() << " "; //ť���� ������ ���
//	}
//	cout << endl << "������ ���� ũ��: " << mStack.length() << endl;
//}