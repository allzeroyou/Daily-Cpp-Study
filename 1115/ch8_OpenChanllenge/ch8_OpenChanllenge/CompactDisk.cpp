#include "CompactDisk.h"

CompactDisk::CompactDisk(int m_ObjType, int id, string description, string productor, int price, string title, string singer):Product( m_ObjType, id,  description,  productor,  price){
	this-> title = title;
	this->singer = singer;
};
void CompactDisk::printInfo() {
	Product::printInfo();
	cout << "�ٹ����� : " << this->title << endl;
	cout << "���� : " << this->singer << endl;

}
