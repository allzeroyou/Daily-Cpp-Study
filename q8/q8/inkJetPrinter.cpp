#include "inkJetPrinter.h"

inkJetPrinter::inkJetPrinter() {
	this->availableInk = 0;
}
inkJetPrinter::inkJetPrinter(int id, string model, string manufacter, int printedCount, int availableCount, int availableInk):printer(id, model,  manufacter,  printedCount,  availableCount) {
	this->availableInk = availableInk;
}
void inkJetPrinter::printInkJet(int pages) {
	availableCount -= pages;
	availableInk -= pages;
}
void inkJetPrinter::showinfo() {
	printer::showinfo();
	cout << "³²Àº À×Å© " << availableInk << endl;
}
