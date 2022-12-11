#pragma once
#include "Printer.h"
class InkJetPrinter:public Printer
{
public:
	int availableInk;
	InkJetPrinter() {
		availableInk = 0;
	};
	InkJetPrinter(int id, string model, string manufacturer, int printedCount, int availableCount, int availaleInk);
	void prinInkJet(int pages);
	void showInfo();
};

