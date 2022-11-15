#include "CompactDisk.h"
CompactDisk::CompactDisk() {
	title = "";
	singer = "";
};

CompactDisk::CompactDisk(int m_ObjType, int id, string description, string productor, int price, string title, string singer):Product( m_ObjType, id,  description,  productor,  price){
	this-> title = title;
	this->singer = singer;
};
void CompactDisk::showCompactDisk() {
	showProduct();
	cout << "앨범제목 : " << this->title << endl;
	cout << "가수 : " << this->singer << endl;

}
