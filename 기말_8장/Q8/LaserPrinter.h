#pragma once
#include "Printer.h"

class LaserPrinter :public Printer
{
public:
	int availableToner;
	
	LaserPrinter() {
		availableToner = 0;
	};
	LaserPrinter(int id, string model, string manufacturer, int printedCount, int availableCount, int availableToner);
	void printLaser(int pages);
	void showInfo();
};

