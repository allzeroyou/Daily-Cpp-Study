#include "Printer.h"

Printer::Printer(int id, string model, string manufacturer, int printedCount, int availableCount) {
	this->id = id;
	this->model = model;
	this->manufacturer = manufacturer;
	this->printedCount = printedCount;
	this->availableCount = availableCount;
	countPrinter++;
}
void Printer::print(int pages) {
	availableCount-=pages;
}
void Printer::showInfo() {
	cout << model << " ," << manufacturer << " ," << "남은 종이 " << availableCount<< "장 ,";
}
