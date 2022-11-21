#pragma once
#include "printer.h"

class laserPrinter:public printer
{
public:
	int availableToner;
	laserPrinter();
	laserPrinter(int id, string model, string manufacter, int printedCount, int availableCount, int availableToner);
	void printLaser(int pages);
	void showinfo();
};

