//#include <iostream>
//#include <string>
//using namespace std;
//
//class BaseArray {
//private:
//	int capacity; // 배열 크기
//	int* mem; // 정수 배열을 만들기 위한 메모리의 포인터
//protected:
//	BaseArray(int capacity = 100) {
//		this->capacity = capacity;
//		mem = new int[capacity]; //capacity만큼 배열 동적 할당
//	}
//	~BaseArray() { delete[]mem; } // new의 짝궁 delete
//	void put(int index, int val) { mem[index] = val; }
//	int get(int index) { return mem[index]; }
//	int getCapacity() { return capacity; }
//};
//class MyStack:public BaseArray {
//	int head, tail;
//	int size;
//public:
//	MyStack(int capacity);
//	void push(int n);
//	int pop();
//	int length();
//	int capacity();
//};
//MyStack::MyStack(int capacity) :BaseArray(capacity) {
//	head = 0; // 삽입할 위치는 head
//	tail = -1; // tail+1 위치에서 꺼내기
//	size = 0; // 초기 개수는 0
//}
//void MyStack::push(int n) {
//	if (size == capacity())
//		return; // queue 저장공간 x
//	put(head, n);
//	head++;
//	head = head % capacity();
//	size++;
//}
//int MyStack::pop() {
//	if (size == 0)
//		return -1; // queue 비었음
//	size--;
//	tail++;
//	tail = tail % capacity();
//	return get(tail);
//}
//int MyStack::capacity() {
//	return getCapacity();
//}
//int MyStack::length() {
//	return size;
//}
////int main() {
////	MyQueue mQ(100);
////	int n;
////	cout << "큐에 삽입할 5개의 정수 입력>>";
////	for (int i = 0; i < 5; i++) {
////		cin >> n;
////		mQ.enqueue(n); // 큐에 삽입
////	}
////	cout << "큐의 용량: " << mQ.capacity() << ", 큐의 크기: " << mQ.length() << endl;
////	cout << "큐의 원소를 순서대로 제거해 출력>> ";
////	while (mQ.length() != 0) {
////		cout << mQ.dequeue() << " "; //큐에서 제거해 출력
////	}
////	cout << endl << "큐의 현재 크기: " << mQ.length() << endl;
////}