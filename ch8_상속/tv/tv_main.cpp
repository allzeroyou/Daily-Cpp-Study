// 부모클래스: tv
// 자식클래스: colortv, smarttv, widetv
// 3개의 자식 클래스가 tv클래스를 상속하는 관계를 직접 구현

#include "colorTv.h"
#include "smartTv.h"
#include "wideTv.h"

int main(void) {
	Tv tv(10);
	tv.channelUp();
	tv.channelDown();
	cout << endl;


	ColorTv colorTv("파란색");
	colorTv.show();
	colorTv.channelUp();
	cout << endl;

	smartTv smartTv(false);
	smartTv.smartOn(true);
	smartTv.smartOff(false);
	cout << endl;

	wideTv wideTv(32);
	wideTv.inchPrint();
	cout << endl;

}