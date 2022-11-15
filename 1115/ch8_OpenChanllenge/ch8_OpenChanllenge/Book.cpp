#include "Book.h"
Book::Book() {
	isbn = 0;
	author = "";
	title = "";
};

Book::Book(int m_ObjType, int id, string description, string productor, int price,  string author, string title, int isbn ):Product( m_ObjType, id,  description,  productor,  price){
	this->isbn = isbn;
	this->author = author;
	this->title = title;
}
void Book::showBook() {
	showProduct();
	cout << "ISBN : " << this->isbn << endl;
	cout << "책제목 : " << this->title << endl;
	cout << "저자 : " << this->author << endl;
}