
#include "Menu.h"
#include"Pasta.h"
#include "Pizza.h"


int main() {
	Menu* mlist[5];
	
	for (int i = 0; i < 5; i++)
		mlist[i] = nullptr;

	mlist[0] = new Pasta(1, 13000);
	mlist[1] = new Pizza(1, 20000);
	mlist[2] = new Pasta(2, 13000);
	mlist[3] = new Pasta(2, 13000);

	cout << "===조리과정===" << endl;
	//for (int i = 0; i < 4; i++) {
	//	mlist[i]->recipe();
	//}
	
	((Pasta*)mlist[0])->recipe();
	((Pizza*)mlist[1])->recipe();
	((Pasta*)mlist[2])->recipe();
	((Pasta*)mlist[3])->recipe();

	cout << (Pasta*)mlist[0];

	//int total = 0;
	//cout <<((Pasta*)mlist[0])->price;
}