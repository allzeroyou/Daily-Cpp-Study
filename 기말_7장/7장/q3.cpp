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
	bool operator!(); // 공짜 책인지 판별

};
bool Book::operator!() {
	if (price==0) {
		return true;
	}
	else return false;
}

//int main() {
//	Book book("벼룩시장", 0, 50); // 가격 0
//	if (!book) cout << "공짜다" << endl;
//
//}