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

GraphicEditor::~GraphicEditor() { // �Ҹ���
	// ���� ������ ��� ��ü ����
	Shape* p = pStart;
	while (p != nullptr) { // ���� �ִٸ�
		Shape* q = p->getNext(); // ���� ���� �ּ� ���
		delete p; // ���簴ü ����
		p = q;//���� ��ü ����Ŵ
	}
}
//
//void GraphicEditor::print() {
//	 ���� ������ ��� ��ü �׸�
//	Shape* p = pStart;
//	while (p != nullptr) {
//		p->paint(); // ���� �׸���
//		p = p->getNext(); // ���� ���� ����Ŵ
//		countShape++;
//	}
//}
//void  GraphicEditor::add(Shape* p) {
//	if (pStart == nullptr) { // ó������ ���� ��ü ����
//		pStart = p;
//		pLast = p;
//		return;
//	}
//	else {
//		pLast->add(p); // ���� p�� �������� �ܴ�.
//		pLast = p; // pLast�� ������ �������� ����
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
		cout << "�ε����� �߸� �Է�" << endl;
}

void GraphicEditor::run() {
	bool exit = true;
	cout << "�׷��� �������Դϴ�." << endl;
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