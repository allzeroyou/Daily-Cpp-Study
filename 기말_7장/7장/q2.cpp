#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book() {
		this->title = "";
		this->price = 0;
		this->pages = 0;
	}
	Book(string title, int price, int pages) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << " " << price << "�� " << pages << " ������" << endl;
	}
	bool operator==(int op2); // price
	bool operator==(string op2); // title
	bool operator==(Book op2); // title, price, pages ��� ��
};
bool Book::operator==(int op2) {
	if (price == op2) {
		return true;
	}
	else return false;
}
bool Book::operator==(string op2) {
	if (title == op2) {
		return true;
	}
	else return false;
}
bool Book::operator==(Book op2) {
	if (price == op2.price && pages==op2.pages && title==op2.title) {
		return true;
	}
	else return false;
}

//int main() {
//	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
//	if (a == 30000) cout << "���� 30000��" << endl;
//	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
//	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
//}