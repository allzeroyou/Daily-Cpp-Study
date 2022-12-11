#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(string name = "") { this->name = name; }
	NamedCircle(int radius, string name):Circle(radius) {
		this->name = name;
		// this->setRadius(radius);
	}
	void show() {
		// cout << "�������� " << this->getRadius() << "�� " << name << endl;
		cout << "�������� " << getRadius() << "�� " << name << endl;
	}
};
//int main() {
//	NamedCircle waffle(3, "waffle");
//	waffle.show();
//}