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
		cout << title << " " << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() {
		return title;
	}
	int operator+=(int op2);
	int operator-=(int op2);
};
int Book::operator+=(int op2) {
	price = price+ op2;
	return price;
}
int Book::operator-=(int op2) {
	price = price - op2;
	return price;
}
//int main() {
//	Book a("청춘", 20000, 300), b("미래", 30000, 500);
//	a += 500; // 책 가격 500원 증가
//	b -= 500; // 책 가격 500원 감소
//	a.show();
//	b.show();
//}