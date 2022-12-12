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
		cout << this->model << ", " << this->manufacturer << ", " << "���� ���� " << this->availableCount << "�� , ���� ��ũ " << this->availableInk << endl;
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
		cout << this->model << ", " << this->manufacturer << ", " << "���� ���� " << this->availableCount << "�� , ���� ��� " << this->availableToner << endl;
	}
};

//int main() {
//	InkJetPrinter* ip;
//	ip = new InkJetPrinter(1, "Officejet V40", "HP", 0, 5, 10);
//	LaserPrinter* lp;
//	lp = new LaserPrinter(2, "SCX-6x45", "�Ｚ����", 0, 3, 20);
//	
//	cout << "���� �۵����� " << countPrinter << " ���� �����ʹ� �Ʒ��� ����" << endl;
//	cout << "��ũ�� : ";
//	ip->show();
//	cout << "������ : ";
//	lp->show();
//
//
//	while (1) {
//		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
//		int choice, paper;
//		cin >> choice;
//		cin >> paper;
//
//		if (choice == 1) {
//			if (paper <= ip->availableCount) {
//				ip->print(paper);
//				cout << "����Ʈ�Ͽ����ϴ�." << endl;
//				ip->show();
//				lp->show();
//			}
//			else {
//				cout << "������ ������ ����Ʈ �Ұ�" << endl;
//				ip->show();
//				lp->show();
//			}
//		}
//		else if (choice == 2) {
//			if (paper <= lp->availableCount) {
//				lp->print(paper);
//				cout << "����Ʈ�Ͽ����ϴ�." << endl;
//				ip->show();
//				lp->show();
//			}
//			else {
//				cout << "������ ������ ����Ʈ �Ұ�" << endl;
//				ip->show();
//				lp->show();
//			}
//		}
//		cout << "��� ����Ʈ �Ͻðڽ��ϱ�?(y/n)";
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