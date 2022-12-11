#include "InkJetPrinter.h"


InkJetPrinter::InkJetPrinter(int id, string model, string manufacturer,int printedCount, int availableCount, int availableInk):Printer(id, model, manufacturer, printedCount, availableCount) {
	this->availableInk = availableInk;
}
void InkJetPrinter::prinInkJet(int pages) {
	availableCount -= pages;
	availableInk -= pages;
}
void InkJetPrinter::showInfo() {
	Printer::showInfo(); // 기본클래스 멤버함수 상속
	cout << "남은 잉크 " << availableInk << endl;

}