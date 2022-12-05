#include "rectangle.h"

int main(void) {
	Rectangle rect(10,20);
	Shape shape(100,200);

	// Shape sh = rect; // 좌측 코드는 바로 다형성을 나타냄.
	

	shape.printPoint();
	rect.printRectangle();
	rect.printPoint();
	cout << endl;
	// 부모와 자식클래스 바이트 크기 다름
	cout << "shape의 바이트 크기: " << sizeof(shape) << endl;
	cout << "rect의 바이트 크기: " << sizeof(rect) << endl;
	cout << endl;

	cout << "사각형의 면적: " << rect.getArea()<< endl;


}