#pragma once
#include "printer.h"

class inkJetPrinter:public printer
{
public:
	int availableInk;
	inkJetPrinter();
	inkJetPrinter(int id, string model, string manufacter, int printedCount, int availableCount, int availableInk);
	void printInkJet(int pages);
	void showinfo();

};

