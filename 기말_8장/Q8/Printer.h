#pragma once
#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
	
	// 프린터 관리
	int id;
	// static 변수
	static int countPrinter;

	Printer() { model = "", manufacturer = "", printedCount = 0, availableCount = 0; }
	Printer(int id, string model, string manufacturer, int printedCount, int availableCount);
	void print(int pages);
	void showInfo();

};

