#include <iostream>
#include <string>
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
	friend bool operator<(string op2, Book op1); // å ������ ���� ������ ��
	string getTitle() {
		return title;
	}
};
bool operator<(string op2, Book op1) {
	if (op2 < op1.title)  return true;
	else return false;

}

//int main() {
//	Book a("û��", 20000, 300);
//	string b;
//	cout << "å �̸��� �Է��ϼ���>>";
//	getline(cin, b);
//	if (b < a)
//		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
//
//}