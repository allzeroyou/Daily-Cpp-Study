#include "CompactDisc.h"

CompactDisk::CompactDisk(int m_ObjType, int id, string desc, string productor, int price, string albumTitle, string singer) :Product(m_ObjType, id, desc, productor, price) {
	this->albumTitle = albumTitle;
	this->singer = singer;
}
void CompactDisk::printInfo() {
	cout << "CD Á¤º¸" << endl;
	Product::printInfo();
	cout << albumTitle << endl;
	cout << singer << endl;
}
