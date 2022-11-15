#include "Book.h"
#include "CompactDisk.h"
#include "ConversationBook.h"
#include "Product.h"

int main(void) {
	// 사용자에게 상품 입력받기(getline: string 정보, cin: int 정보?)
	// 최대 100	개의 상품을 관리
	// 입력 받았다고 가정, 매개변수로 전달.
	// void 형임에 주의(자료형 x)
	void* productInfo[100];

	for (int i = 0; i < 100; i++)
		productInfo[i] = nullptr;
	// 책, 음악cd, 회화책 객체 동적 생성
	productInfo[0] = new Book(0, 100, "코딩테스트 준비 서적", "한빛미디어", 30000, "나동빈", "이것이 취업을 위한 코딩 테스트다 with 파이썬", 100);
	productInfo[1] = new CompactDisk(1,200, "조수미 기념 음반","한성기획",15000, "조수미 forever","조수미");

	productInfo[2] = new ConversationBook(2,300, "팝으로 배우는 영어 회화", "한성기획", 20000, "팝영어", "제인", "영어", 200);

	// 뽑을 객체가 어떤 객체인지 가져옴
	Product* p_ptr = nullptr;

	for (int i = 0; i < 100; i++) {
		if (productInfo[i] == nullptr) {
			return -1;
		}
		// info 배열의 요소는 각 객체의 주소값을 가리키고 있음.
		// 얼만큼 공간을 가져올건지, 형 변환을 해주어야 함.
		p_ptr = (Product*)productInfo[i];
		if (p_ptr->m_ObjType == 0) { // 책
			// 책 객체의 크기 만큼 형 변환해, 공간 할당해주어야 함.
			Book* b_ptr = (Book*)productInfo[i];
			// 출력
			b_ptr->showBook();
			cout << endl;

		}
		else if (p_ptr->m_ObjType == 1) { // 음악 cd
			CompactDisk* cd_ptr = (CompactDisk*)productInfo[i];
			cd_ptr->showCompactDisk();
			cout << endl;

		}
		else if (p_ptr->m_ObjType == 2) { // 회화책
			ConversationBook* conver_ptr = (ConversationBook*)productInfo[i];
			conver_ptr->showConversationBook();
			cout << endl;
		}
	}
	

}