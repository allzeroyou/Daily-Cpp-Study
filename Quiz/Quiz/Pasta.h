#pragma once
#include "Menu.h"

class Pasta : public Menu
{
public:
	Pasta() {};
	Pasta(int tableNo, int price) {};
	virtual void recipe() {
		Menu::recipe();
		cout << "Pasta" << endl;
	};
};

