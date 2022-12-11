#include "Product.h"
#include "Book.h"
#include "ConversationBook.h"
#include "CompactDisc.h"
#include <crtdbg.h> // 메모리 누수 확인

// 생성된 객체의 개수 세기
int Product::M_nNumberOfProduct = 0;

int main() {
	Product* productList[100]; // 상품목록(=주소값 저장 목록)

	for (int i = 0; i < 100; i++) {
		productList[i] = nullptr; // 초기화
	}

	// Book, CompactDisk, ConversationBook 객체 "동적" 생성
	productList[0] = new CompactDisk(1,100, "루피가부르는노래", "루피", 17000, "잔망루피송", "잔망루피");
	productList[1] = new Book(2,200, "추천도서", "몰라", 10000, "0000-1234", "상실의 시대", "하루키");
	productList[2] = new ConversationBook(3,300, "추천도서", "몰라", 20000, "0000-1568", "그림 읽어주는 남자", "이상", "한국어");

	//for (int i = 0; i < 100; i++) {
	//	CompackDisk* pDisk = (CompactDisk*)productList[0];
	//	
	//}

	// Product* p_ptr = nullptr;
	for (int i = 0; i < Product::M_nNumberOfProduct; i++) {
		//if (productList[i] == nullptr) // nullptr를 가르키고 있다면 값이 없는 것
		//	break;

		// p_ptr = (Product*)productList[i];

		//if (p_ptr->m_ObjType == 1) { // 얼만큼 읽을거야? 
		if(productList[i]->m_ObjType ==1){
			// CompactDisk* pDisk = (CompactDisk*)productList[i];
			((CompactDisk*)productList[i])->printInfo(); // 부모클래스가 아닌 재정의한 printInfo 호출
			cout << endl;
		}
		//else if (p_ptr->m_ObjType == 2) {
		if(productList[i]->m_ObjType ==2){
			//Book* pbook = (Book*)productList[i];
			((Book*)productList[i])->printInfo();
			cout << endl;
		}
		// else if (p_ptr->m_ObjType == 3) {
		if(productList[i]->m_ObjType ==3){
			//ConversationBook* pCbook = (ConversationBook*)productList[i];
			((ConversationBook*)productList[i])->printInfo();
			// pCbook->Book::printInfo(); // 자식클래스가 아닌 부모클래스의 함수 호출
			// pCbook->printInfo();
			cout << endl;
		}
	}
	// new -> delete할때, 만든 클래스의 크기만큼의 공간 지정해주어야 한다.
	for (int i = 0; i < Product::M_nNumberOfProduct; i++) {
		// if (productList[i] != nullptr) {
			// p_ptr = (Product*)productList[i];
			
			//if (p_ptr->m_ObjType == 1) {
			if(productList[i]->m_ObjType ==1)
				delete (CompactDisk*)productList[i];
			//else if (p_ptr->m_ObjType == 2) {
			else if (productList[i]->m_ObjType == 2)
				delete (Book*)productList[i];
			//else if (p_ptr->m_ObjType == 3) {
			else if (productList[i]->m_ObjType == 3)
				delete (ConversationBook*)productList[i];
	}
	_CrtDumpMemoryLeaks();
	return 0;
}