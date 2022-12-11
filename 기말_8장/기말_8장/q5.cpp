//#include <iostream>
//#include <string>
//using namespace std;
//
//class BaseArray {
//private:
//	int capacity; // �迭 ũ��
//	int* mem; // ���� �迭�� ����� ���� �޸��� ������
//protected:
//	BaseArray(int capacity = 100) {
//		this->capacity = capacity;
//		mem = new int[capacity]; //capacity��ŭ �迭 ���� �Ҵ�
//	}
//	~BaseArray() { delete[]mem; } // new�� ¦�� delete
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
//	head = 0; // ������ ��ġ�� head
//	tail = -1; // tail+1 ��ġ���� ������
//	size = 0; // �ʱ� ������ 0
//}
//void MyStack::push(int n) {
//	if (size == capacity())
//		return; // queue ������� x
//	put(head, n);
//	head++;
//	head = head % capacity();
//	size++;
//}
//int MyStack::pop() {
//	if (size == 0)
//		return -1; // queue �����
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
////	cout << "ť�� ������ 5���� ���� �Է�>>";
////	for (int i = 0; i < 5; i++) {
////		cin >> n;
////		mQ.enqueue(n); // ť�� ����
////	}
////	cout << "ť�� �뷮: " << mQ.capacity() << ", ť�� ũ��: " << mQ.length() << endl;
////	cout << "ť�� ���Ҹ� ������� ������ ���>> ";
////	while (mQ.length() != 0) {
////		cout << mQ.dequeue() << " "; //ť���� ������ ���
////	}
////	cout << endl << "ť�� ���� ũ��: " << mQ.length() << endl;
////}