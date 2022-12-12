#include "GraphicEditor.h"
#include "Line.h"
#include "Rect.h"
#include "Shape.h"
#include "Circle.h"
#include "UI.h"

int GraphicEditor::countShape = 0;

GraphicEditor::GraphicEditor() {
	pStart = nullptr;
	pLast = nullptr;
}

GraphicEditor::~GraphicEditor() { // 소멸자
	// 현재 생성된 모든 객체 삭제
	Shape* p = pStart;
	while (p != nullptr) { // 값이 있다면
		Shape* q = p->getNext(); // 다음 도형 주소 기억
		delete p; // 현재객체 삭제
		p = q;//다음 객체 가르킴
	}
}
//
//void GraphicEditor::print() {
//	 현재 생성된 모든 객체 그림
//	Shape* p = pStart;
//	while (p != nullptr) {
//		p->paint(); // 도형 그리기
//		p = p->getNext(); // 다음 도형 가르킴
//		countShape++;
//	}
//}
//void  GraphicEditor::add(Shape* p) {
//	if (pStart == nullptr) { // 처음으로 도형 객체 생성
//		pStart = p;
//		pLast = p;
//		return;
//	}
//	else {
//		pLast->add(p); // 도형 p를 마지막에 단다.
//		pLast = p; // pLast가 마지막 도형으로 조정
//	}
//}

void GraphicEditor::create(int choice){
	switch (choice) {
	case 1:
		if (countShape == 0) {
			pStart = new Line();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Line());
		countShape++;
		break;

	case 2:
		if (countShape == 0) {
			pStart = new Circle();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Circle());
		countShape++;
		break;
		
	case 3:
		if (countShape == 0) {
			pStart = new Rect();
			pLast = pStart;
		}
		else
			pLast = pLast->add(new Rect());
		countShape++;
		break;
	}
}
void GraphicEditor::remove(int choice){
	Shape* p = pStart;
	Shape* del = pStart;
	if (choice < countShape) {
		for (int i = 0; i < choice; i++) {
			p = del;
			del = del->getNext();
		}
		if (choice == 0)
			pStart = p->getNext();
		else
			p->setNext(del);
		countShape--;
		if (countShape == 1)pLast = pStart;
		delete del;
	}
	else
		cout << "인덱스를 잘못 입력" << endl;
}

void GraphicEditor::run() {
	bool exit = true;
	cout << "그래픽 에디터입니다." << endl;
	while (exit) {
		switch (UI::main_menu()) {
		case 1:
			create(UI::one_menu());
			break;
		case 2:
			remove(UI::two_menu());
			break;
		case 3: {
			Shape* p = pStart;
			for (int i = 0; i < countShape; i++) {
				cout << i << ":";
				p->paint();
				p = p->getNext();
			}
			break;
			}
		case 4:
			exit = false;
			break;
		}
	}
}