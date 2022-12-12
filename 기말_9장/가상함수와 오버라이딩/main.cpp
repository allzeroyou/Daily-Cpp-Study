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

	// ���� ����� ��� ������ �׸�
	Shape* p = pStart;
	while (p != nullptr) {
		p->paint();
		p = p->getNext();
	}
	// ���� ����� ��� ���� ����
	p = pStart;
	while (p != nullptr) {
		Shape* q = p->getNext();// ���� ���� �ּ�
		delete p; //���� ���� ��ü �Ҹ�
		p = q; // ���� ������ �ּҸ� p�� ����

	}
}