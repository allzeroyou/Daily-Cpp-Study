#include "ConversationBook.h"

ConversationBook::ConversationBook() {
	language = "";
};
ConversationBook::ConversationBook(int m_ObjType, int id, string description, string productor, int price,  string author, string title, string language, int isbn ):Book(m_ObjType, id,  description,  productor,  price,   author,  title, isbn){
	this->language = language;
};

void ConversationBook::showConversationBook() {
	showBook();
	cout << "���: " << this->language << endl;
}