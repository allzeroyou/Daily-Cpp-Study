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
	bool operator!(); // ��¥ å���� �Ǻ�

};
bool Book::operator!() {
	if (price==0) {
		return true;
	}
	else return false;
}

//int main() {
//	Book book("�������", 0, 50); // ���� 0
//	if (!book) cout << "��¥��" << endl;
//
//}