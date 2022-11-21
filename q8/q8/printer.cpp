#include "printer.h"

printer::printer() {
	model = "";
	manufacter = "";
	printedCount = 0;
availableCount = 0;

}
printer::printer(int id, string model, string manufacter, int printedCount, int availableCount) {
	this->id = id;
	this->model = model;
	this->manufacter = manufacter;
	this->printedCount = printedCount;
	this->availableCount = availableCount;
	CountPrinter++;

}
void printer::print(int pages) {
	availableCount -= pages;
}
void printer::showinfo() {
	cout << model << ", ";
	cout << manufacter << ", ";
	cout << "남은 종이 " << availableCount << "장, ";
}
