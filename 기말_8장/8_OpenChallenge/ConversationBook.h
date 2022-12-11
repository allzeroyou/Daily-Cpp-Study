#pragma once
#include "Book.h"

class ConversationBook: public Book
{
public:
	string language;
	ConversationBook() {
		string language = "";
	}
	ConversationBook(int m_ObjType, int id, string desc, string productor, int price, string ISBN, string writer, string title, string language);
	void printInfo();
};

