#include <iostream>
using namespace std;

class SortedArray {
private:
	int size; // ���� �迭�� ũ��
	int* p; // ���� �迭�� ���� ������ 
	//void sort(); // ���� �迭�� ������������ ����
public:
	SortedArray() {
		p = nullptr;
		size = 0;
	}
	SortedArray(int p[], int size) { // ������, ���� �迭�� ũ�� ���޹���
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
		sort(); // �������� ����
	}
	~SortedArray() { // �Ҹ���
		if(p!=nullptr) delete[]p;
	}
	SortedArray(SortedArray& op2){ // ���� ������
		this->size = op2.size;
		if (op2.size == 0)
			this->p = nullptr;
		else {
			this->p = new int[this->size];
			for (int i = 0; i < this->size; i++)
				this->p[i] = op2.p[i];
		}
	}
	void sort() { // �������� ���� ����
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
	SortedArray& operator=(const SortedArray& op2) {// ���� �迭�� op2 �迭 ����
		if (p != nullptr)
			delete[] p;
		size = op2.size;
		if (size == 0) { // op2�� ����ִ� ���
			p = nullptr;
			return *this;
		}
		// op2�� ������� �ʴ� ���
		p = new int[size];
		for (int i = 0; i < size; i++)
			p[i] = op2.p[i];
		return *this;
	}

	SortedArray operator+(SortedArray& op2) {//���� �迭�� op2 �迭 �߰�
		SortedArray tmp;

		// �� ��ü�� �迭�� ���� tmp�� ����
		if (this->size == 0) { // �� ��ü�� ����ִ� ���
			tmp.size = op2.size;
			if (tmp.size == 0) {// op2�� ����ִ� ���
				tmp.p = nullptr;
			}
			else { //op2�� ����������� ���
				tmp.p = new int[tmp.size];
				for (int i = 0; i < tmp.size; i++)
					tmp.p[i] = op2.p[i];
			}
		}
		else if (op2.size == 0) {// �� ��ü�� ������� �ʰ� op2�� ����ִ� ���
			tmp.size = this->size;
			tmp.p = new int[tmp.size];
			for (int i = 0; i < tmp.size; i++)
				tmp.p[i] = this->p[i];
		}
		else { // �Ѵ� ����������� ���
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

	void show() {// �迭 ���� ���
		cout << "�迭 ��� : ";
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

	c = a + b; // +, = ������ �ʿ�
	// + �����ڰ� SortedArray ��ü ���� -> ���� ������ �ʿ�

	a.show();
	b.show();
	c.show();

}