#include <iostream>
using namespace std;

class Product {
public:
	double m_nId; // 8 byte 할당
	Product() {
		cout << "Called Product Constructor" << endl;
	}
	virtual ~Product() {
		cout << "Called Product Destructor" << endl;
	}
	virtual void print() { // 가상 함수
		cout << "print Product Info" << endl;
	}
};

class Book :public Product {
public:
	double isbn; // 8 byte 할당
	Book() {
		cout << "Called Book Constructor" << endl;
	}
	virtual~Book() {
		cout << "Called Book Destructor" << endl;
	}
	void print() override { // print()함수 override 하겠음. 의도적으로 재정의하려고 하는걸 표출. 재정의하려는 함수의 오타 예방(ex. printt..)
		cout << "print Book Info" << endl;
	}
};

int main(void) {
	Product* p_ptr = new Book; // up-casting: 부모클래스 타입으로.
	p_ptr->print();
	delete p_ptr; // Product만큼 지워짐. -> memory leak 발생
	// Book에 대한 소멸자 생성 x
	// 소멸자를 가상함수로 설정해주면 됨.
	// 포인터타입에 따라 멤버함수 호출 x
	// 실제 인스턴스에 따라 재정의한 함수 호출 -> 실제 생성된 Book에 따른 멤버함수 호출.
	// 부모클래스의 생성자 선언-> 가상함수 호출(virtual 사용) -> 국룰.
	// 메모리 leak이 발생하지 않게끔 하려면!
	// 자식클래스 delete 시, 메모리 leak 발생을 예방.


}