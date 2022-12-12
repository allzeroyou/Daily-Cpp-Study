#include <iostream>
using namespace std;

class LoopAdder { // �߻� Ŭ����
	string name; // ���� �̸�
	int x, y, sum; // x���� y������ ���� sum
	void read(); // x, y ���� �о���̴� �Լ�
	void write(); // sum�� ����ϴ� �Լ�
protected:
	LoopAdder(string name = "") { // ������ �̸� ����. �ʱ갪: ""
		this->name = name;
	}
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0; // ���� ���� �Լ�. ������ ���� ���� ���ϴ� �Լ�
public:
	void run(); // ���� �����ϴ� �Լ�
};
//void LoopAdder::read() { // x, y �Է�
//	cout << name << ": " << endl;
//	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >>";
//	cin >> x >> y;
//}
//void LoopAdder::write() { // ��� sum ���
//	cout << x << "���� " << y << "������ ���� " << sum << " �Դϴ�." << endl;
//}
//
//void LoopAdder::run() {
//	read();
//	sum = calculate();
//	write();
//}
class WhileLoopAdder:public LoopAdder {
protected:
	int calculate() {
		int sum = 0;
		int i = getX();
		while (i<=getY()) {
			sum += i;
			i++;
		}
		return sum;
	}
public:
	WhileLoopAdder(string name) :LoopAdder(name){};
};
//int main() {
//	WhileLoopAdder whileLoop("While Loop");
//	//DoWhileLoopAdder doWhileLoop("do While Loop");
//	whileLoop.run();
//	//doWhileLoop.run();
//}