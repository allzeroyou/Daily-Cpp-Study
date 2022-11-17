#include "ConversationBook.h"


ConversationBook::ConversationBook(int m_ObjType, int id, string description, string productor, int price,  string author, string title, string language, int isbn ):Book(m_ObjType, id,  description,  productor,  price,   author,  title, isbn){
	this->language = language;
};

void ConversationBook::printInfo() {
	Book::printInfo();
	cout << "¾ð¾î: " << this->language << endl;
}