#include "LaserPrinter.h"
LaserPrinter::LaserPrinter(int id, string model, string manufacturer, int printedCount, int availableCount, int availableToner) :Printer(id, model, manufacturer, printedCount, availableCount) {
	this->availableToner = availableToner;
}
void LaserPrinter::printLaser(int pages) {
	availableCount -= pages;
	availableToner -= pages / 2;
}
void LaserPrinter::showInfo() {
	Printer::showInfo();
	cout << "남은토너 " << availableToner << endl;

}