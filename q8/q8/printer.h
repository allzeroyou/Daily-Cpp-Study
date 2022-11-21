#pragma once
#include <iostream>
#include <string>
using namespace std;

class printer
{
public:
	string model;
	string manufacter;
	int printedCount;
	int availableCount;
	
	int id;
	static int CountPrinter;

	printer();
	printer(int id, string model, string manufacter, int printedCount, int availableCount);
	void print(int pages);
	void showinfo();
};

