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
	friend bool operator<(string op2, Book op1); // 책 제목을 사전 순으로 비교
	string getTitle() {
		return title;
	}
};
bool operator<(string op2, Book op1) {
	if (op2 < op1.title)  return true;
	else return false;

}

//int main() {
//	Book a("청춘", 20000, 300);
//	string b;
//	cout << "책 이름을 입력하세요>>";
//	getline(cin, b);
//	if (b < a)
//		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
//
//}