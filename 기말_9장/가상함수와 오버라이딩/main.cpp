#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"


int main() {
	Shape* pStart = nullptr;
	Shape* pLast;

	pStart = new Circle();
	pLast = pStart;

	pLast = pLast->add(new Rect());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Rect());

	// 현재 연결된 모든 도형을 그림
	Shape* p = pStart;
	while (p != nullptr) {
		p->paint();
		p = p->getNext();
	}
	// 현재 연결된 모든 도형 삭제
	p = pStart;
	while (p != nullptr) {
		Shape* q = p->getNext();// 다음 도형 주소
		delete p; //현재 도형 객체 소멸
		p = q; // 다음 도형의 주소를 p에 저장

	}
}