#pragma once
#include "Menu.h"

class Pizza: public Menu
{
public:
	Pizza(int tableNo, int price) {};
	virtual void recipe() {
		Menu::recipe();
		cout << "pizza" << endl;
	};
};

