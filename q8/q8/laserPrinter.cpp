#include "laserPrinter.h"

laserPrinter::laserPrinter() {
	this->availableToner = 0;
}
laserPrinter::laserPrinter(int id, string model, string manufacter, int printedCount, int availableCount, int availableToner):printer(id, model,  manufacter,  printedCount,  availableCount) {
	this->availableToner = availableToner;
}
void laserPrinter::printLaser(int pages) {
	availableCount -= pages;
	availableToner -= (pages / 2);
}

void laserPrinter::showinfo() {
	printer::showinfo();
	cout << "남은 토너 " << availableToner << endl;

}
