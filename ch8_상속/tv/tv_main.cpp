// �θ�Ŭ����: tv
// �ڽ�Ŭ����: colortv, smarttv, widetv
// 3���� �ڽ� Ŭ������ tvŬ������ ����ϴ� ���踦 ���� ����

#include "colorTv.h"
#include "smartTv.h"
#include "wideTv.h"

int main(void) {
	Tv tv(10);
	tv.channelUp();
	tv.channelDown();
	cout << endl;


	ColorTv colorTv("�Ķ���");
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