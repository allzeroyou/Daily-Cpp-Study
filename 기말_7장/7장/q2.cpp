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
	bool operator==(int op2); // price
	bool operator==(string op2); // title
	bool operator==(Book op2); // title, price, pages 모두 비교
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
//	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
//	if (a == 30000) cout << "정가 30000원" << endl;
//	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
//	if (a == b) cout << "두 책이 같은 책입니다." << endl;
//}