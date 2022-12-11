#include "ConversationBook.h"

ConversationBook::ConversationBook(int m_ObjType, int id, string desc, string productor, int price, string ISBN, string writer, string title, string language):Book(m_ObjType, id, desc, productor, price, ISBN, writer, title)
{
	this->language = language;
}
void ConversationBook::printInfo() {
	Book::printInfo();
	cout << language << endl;
}