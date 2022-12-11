#include "Book.h"

Book::Book(int m_ObjType, int id, string desc, string productor, int price, string ISBN, string writer, string title):Product(m_ObjType,  id,  desc,  productor,  price){
	this->ISBN = ISBN;
	this->writer = writer;
	this->title = title;
}
void Book::printInfo() {
	cout << "Book Á¤º¸" << endl;
	cout << ISBN << endl;
	cout << writer << endl;
	cout << title << endl;
	cout << m_ObjType << endl;
	cout << id << endl;
	cout << desc << endl;
	cout << productor << endl;
	cout << price << endl;
}