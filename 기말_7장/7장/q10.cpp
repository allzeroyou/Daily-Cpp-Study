#include <iostream>
using namespace std;

class Statistics {
private:
	int* pnum;
	int capacity;
	int size;
public:
	Statistics() {
		capacity = 10; // 초기 수용 가능한 크기
		for (int i = 0; i < capacity; i++)
			pnum = new int[capacity];
		size = 0;
	}
	~Statistics() {
		if (pnum) delete[]pnum;
	}
	bool operator!() {
		if (size == 0)
			return true;
		else return false;
	}
	Statistics& operator<<(int op2) {
		if (size == capacity) { // 더 이상 저장할 공간이 없다면.
			int* q = new int[capacity * 2];
			for (int i = 0; i < size; i++) q[i] = pnum[i];
			capacity *= 2;
			delete[] pnum;
			pnum = q;
		}
		pnum[size] = op2;
		size++;
		return *this;
	}

	Statistics& operator~() {
		for (int i = 0; i < size; i++)
			cout << pnum[i] << " ";
		cout << endl;
		return *this;
	}
	Statistics& operator >>(int& avg) {
		int sum = 0;
		for (int i = 0; i < size; i++)
			sum += pnum[i];
		avg = sum / size;
		return *this;
	}
	
};
//int main() {
//	Statistics stat;
//	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;
//	
//	int x[5];
//	cout << "5 개의 정수를 입력하라 >> ";
//	for (int i = 0; i < 5; i++) cin >> x[i]; // x[i]에 정수 입력.
//	
//	for (int i = 0; i < 5; i++) stat << x[i];
//	stat << 100 << 200;
//	~stat;
//
//	int avg;
//	stat >> avg;
//	cout << "avg=" << avg << endl;
//}