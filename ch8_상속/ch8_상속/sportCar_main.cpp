// 상속
// 기존에 만들어진 클래스로부터 새로운 클래스를 만들때 기존에 만들어진 클래스의 멤버들을 그대로 물려받는 것
// 물려받은 클래스에서는 자신만의 필요한 기능을 추가도 얼마든지 가능
// 자식클래스에서 공통적인 부분을 부모클래스에 정의, 자식클래스에 부모클래스를 상속->코드 줄이고, 신뢰성 향상, 버그도 줄일 수 있음.
#include "sportsCar.h"

int main(void) {
	SportsCar sc;
	cout << endl;
	Car car;

	// 자식 클래스는 부모클래스의 멤버 사용 가능
	sc.setSpeed(50);
	sc.printSpeed();
	cout << endl;

	// 부모클래스의 멤버이기에 사용 가능
	car.setSpeed(100);
	car.printSpeed();
	cout << endl;

	// 자식클래스의 고유 멤버
	sc.setTurbo(true);
	sc.printTurbo();
	cout << endl;

	car.printSpeed();
	sc.printSpeed();
}