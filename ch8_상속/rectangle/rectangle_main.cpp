#include "rectangle.h"

int main(void) {
	Rectangle rect(10,20);
	Shape shape(100,200);

	// Shape sh = rect; // ���� �ڵ�� �ٷ� �������� ��Ÿ��.
	

	shape.printPoint();
	rect.printRectangle();
	rect.printPoint();
	cout << endl;
	// �θ�� �ڽ�Ŭ���� ����Ʈ ũ�� �ٸ�
	cout << "shape�� ����Ʈ ũ��: " << sizeof(shape) << endl;
	cout << "rect�� ����Ʈ ũ��: " << sizeof(rect) << endl;
	cout << endl;

	cout << "�簢���� ����: " << rect.getArea()<< endl;


}