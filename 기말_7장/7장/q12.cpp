#include <iostream>
using namespace std;

class SortedArray {
private:
	int size; // 현재 배열의 크기
	int* p; // 정수 배열에 대한 포인터 
	//void sort(); // 정수 배열을 오름차순으로 정렬
public:
	SortedArray() {
		p = nullptr;
		size = 0;
	}
	SortedArray(int p[], int size) { // 생성자, 정수 배열과 크기 전달받음
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
		sort(); // 오름차순 정렬
	}
	~SortedArray() { // 소멸자
		if(p!=nullptr) delete[]p;
	}
	SortedArray(SortedArray& op2){ // 복사 생성자
		this->size = op2.size;
		if (op2.size == 0)
			this->p = nullptr;
		else {
			this->p = new int[this->size];
			for (int i = 0; i < this->size; i++)
				this->p[i] = op2.p[i];
		}
	}
	void sort() { // 오름차순 버블 정렬
		if (p == nullptr || size == 0)
			return;
		for (int i = 0; i < size - 1; i++) {
			for (int j = i; j < size - 1; j++) {
				if (p[j] > p[j + 1]) {
					int temp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = temp;
				}
			}
		}

	}
	SortedArray& operator=(const SortedArray& op2) {// 현재 배열에 op2 배열 복사
		if (p != nullptr)
			delete[] p;
		size = op2.size;
		if (size == 0) { // op2가 비어있는 경우
			p = nullptr;
			return *this;
		}
		// op2가 비어있지 않는 경우
		p = new int[size];
		for (int i = 0; i < size; i++)
			p[i] = op2.p[i];
		return *this;
	}

	SortedArray operator+(SortedArray& op2) {//현재 배열에 op2 배열 추가
		SortedArray tmp;

		// 이 객체의 배열을 먼저 tmp에 넣음
		if (this->size == 0) { // 이 객체가 비어있는 경우
			tmp.size = op2.size;
			if (tmp.size == 0) {// op2도 비어있는 경우
				tmp.p = nullptr;
			}
			else { //op2가 비어있지않은 경우
				tmp.p = new int[tmp.size];
				for (int i = 0; i < tmp.size; i++)
					tmp.p[i] = op2.p[i];
			}
		}
		else if (op2.size == 0) {// 이 객체가 비어있지 않고 op2가 비어있는 경우
			tmp.size = this->size;
			tmp.p = new int[tmp.size];
			for (int i = 0; i < tmp.size; i++)
				tmp.p[i] = this->p[i];
		}
		else { // 둘다 비어있지않은 경우
			tmp.size = this->size + op2.size;
			tmp.p = new int[tmp.size];
			int i=0;
			for (int i = 0; i < this->size; i++)
				tmp.p[i] = this->p[i];
			for (int j = 0; j < op2.size; j++)
				tmp.p[i + j] = op2.p[j];
		}
		tmp.sort();
		return tmp;
	}

	void show() {// 배열 원소 출력
		cout << "배열 출력 : ";
		for (int i = 0; i < size; i++) {
			cout << p[i] << " ";
		}
		cout << endl;
	
	} 

};

int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b; // +, = 연산자 필요
	// + 연산자가 SortedArray 객체 리턴 -> 복사 생성자 필요

	a.show();
	b.show();
	c.show();

}