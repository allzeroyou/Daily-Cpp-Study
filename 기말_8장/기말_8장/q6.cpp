#include <iostream>
#include <string>
using namespace std;

class BaseArray {
private:
	int capacity; // 배열 크기
	int* mem; // 정수 배열을 만들기 위한 메모리의 포인터
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity]; //capacity만큼 배열 동적 할당
	}
	~BaseArray() { delete[]mem; } // new의 짝궁 delete
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyStack :public BaseArray {
	int tos; // 다음에 push할 위치, 스택에 들어있는 개수와 동일
public:
	MyStack(int capacity);
	void push(int n);
	int pop();
	int length() { return tos; }
	int capacity() { return getCapacity(); };
};
MyStack::MyStack(int capacity) :BaseArray(capacity) {
	tos = 0; // 현재 스택에 들어있는 원소의 개수
}
void MyStack::push(int n) {
	if (tos == capacity())
		return; // stack 저장공간 x
	put(tos, n);
	tos++;
}
int MyStack::pop() {
	if (tos == 0)
		return -1; // stack 비었음
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
//	cout << "스택에 삽입할 5개의 정수 입력>>";
//	for (int i = 0; i < 5; i++) {
//		cin >> n;
//		mStack.push(n); // 큐에 삽입
//	}
//	cout << "스택 용량: " << mStack.capacity() << ", 스택의 크기: " << mStack.length() << endl;
//	cout << "스택의 모든 원소를 팝해 출력>>";
//	while (mStack.length() != 0) {
//		cout << mStack.pop() << " "; //큐에서 제거해 출력
//	}
//	cout << endl << "스택의 현재 크기: " << mStack.length() << endl;
//}