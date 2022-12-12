#include <iostream>
#include <string>
using namespace std;

static int countPrinter;

class Printer {
public:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
	int pId;

	Printer(int pId, string model, string manufacturer, int printedCount, int availableCount) {
		this->pId = pId;
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedCount = printedCount;
		this->availableCount = availableCount;
	};
	virtual void print(int pages) {};
	virtual void show() {};
};

class InkJetPrinter :public Printer {
public:
	int availableInk;
	InkJetPrinter(int pId, string model, string manufacturer, int printedCount, int availableCount, int availableInk) :Printer(pId, model, manufacturer, printedCount, availableCount ) {
		this->availableInk = availableInk;
		countPrinter++;
	}
	void print(int pages) {
		this->availableCount -= pages;
		this->availableInk -= pages;
	}
	void show() {
		cout << this->model << ", " << this->manufacturer << ", " << "남은 종이 " << this->availableCount << "장 , 남은 잉크 " << this->availableInk << endl;
	}
};

class LaserPrinter :public Printer {
public:
	int availableToner;

	LaserPrinter(int pId, string model, string manufacturer, int printedCount, int availableCount, int availableToner) :Printer(pId, model, manufacturer, printedCount, availableCount) {
		this->availableToner = availableToner;
		countPrinter++;
	}
	void print(int pages) {
		this->availableCount -= pages;
		this->availableToner -= pages/2;
	}
	void show() {
		cout << this->model << ", " << this->manufacturer << ", " << "남은 종이 " << this->availableCount << "장 , 남은 토너 " << this->availableToner << endl;
	}
};

//int main() {
//	InkJetPrinter* ip;
//	ip = new InkJetPrinter(1, "Officejet V40", "HP", 0, 5, 10);
//	LaserPrinter* lp;
//	lp = new LaserPrinter(2, "SCX-6x45", "삼성전자", 0, 3, 20);
//	
//	cout << "현재 작동중인 " << countPrinter << " 대의 프린터는 아래와 같다" << endl;
//	cout << "잉크젯 : ";
//	ip->show();
//	cout << "레이저 : ";
//	lp->show();
//
//
//	while (1) {
//		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
//		int choice, paper;
//		cin >> choice;
//		cin >> paper;
//
//		if (choice == 1) {
//			if (paper <= ip->availableCount) {
//				ip->print(paper);
//				cout << "프린트하였습니다." << endl;
//				ip->show();
//				lp->show();
//			}
//			else {
//				cout << "용지가 부족해 프린트 불가" << endl;
//				ip->show();
//				lp->show();
//			}
//		}
//		else if (choice == 2) {
//			if (paper <= lp->availableCount) {
//				lp->print(paper);
//				cout << "프린트하였습니다." << endl;
//				ip->show();
//				lp->show();
//			}
//			else {
//				cout << "용지가 부족해 프린트 불가" << endl;
//				ip->show();
//				lp->show();
//			}
//		}
//		cout << "계속 프린트 하시겠습니까?(y/n)";
//		string yOrn;
//		cin >> yOrn;
//		if (yOrn == "y")
//			continue;
//		else
//			break;
//
//	}
//	
//
//
//	delete ip;
//	delete lp;
//}