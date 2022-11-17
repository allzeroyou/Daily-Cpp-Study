#pragma once
#include "Book.h"
class ConversationBook: public Book
{
public:
	string language;
	ConversationBook(int m_ObjType, int id, string description, string productor, int price, string author, string title, string language, int isbn);
	void printInfo();
};

