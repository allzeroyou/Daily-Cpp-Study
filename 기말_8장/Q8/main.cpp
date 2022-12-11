#include "InkJetPrinter.h"
#include "LaserPrinter.h"
#include "Printer.h"

int Printer::countPrinter = 0;

int main() {
	//1. 선언
	Printer* pInfo[100];

	//2. 초기화
	for (int i = 0; i < 100; i++) {
		pInfo[i] = nullptr;
	}
	//3. 요소 삽입
	pInfo[0] = new InkJetPrinter(1, "Officejet V40", "HP", 0, 5, 10);
	pInfo[1] = new LaserPrinter(2, "SCX-6x45", "삼성전자", 0, 3, 20);
	// 출력
	cout << "현재 작동중인 " << Printer::countPrinter << " 대의 프린터는 아래와 같다" << endl;

	for (int i = 0; i < 100; i++) {
		if (pInfo[i] != nullptr) { // 요소가 있을때만
			if (pInfo[i]->id == 1) {
				cout << "잉크젯 : ";
				((InkJetPrinter*)pInfo[i])->showInfo();
			}
			else if (pInfo[i]->id == 2) {
				cout << "레이저 : ";
				((LaserPrinter*)pInfo[i])->showInfo();
			}
		}
		else break; // 요소 없으면 탈출
	}
	while (1) {
		cout << "프린터(1: 잉크젯, 2: 레이저)와 매수 입력>>";
		int choice;
		int printedCount;
		cin >> choice;
		cin >> printedCount;
		if (choice == 1) {
			if (pInfo[0]->availableCount >= printedCount) {
				((InkJetPrinter*)pInfo[0])->prinInkJet(printedCount);
				cout << "프린트하였습니다." << endl;

				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
			else {
				cout << "용지가 부족해 프린트 불가" << endl;
				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
		}
		else if (choice == 2) {
			if (pInfo[1]->availableCount >= printedCount) {
				((LaserPrinter*)pInfo[1])->printLaser(printedCount);
				cout << "프린트하였습니다." << endl;

				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
			else {
				cout << "용지가 부족해 프린트 불가" << endl;
				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
		}
		cout << "계속 프린트 하시겠습니까(y/n)>> ";
		string goStop;
		cin >> goStop;
		if (goStop == "y")
			continue;
		else
			break;
	}



	// new했으면 delete해주어야
	for (int i = 0; i < Printer::countPrinter; i++) {
		if (pInfo[i] != nullptr) {
			if (pInfo[i]->id == 1) {
				delete(InkJetPrinter*)pInfo[i];
			}
			else if (pInfo[i]->id == 2) {
				delete(LaserPrinter*)pInfo[i];
			}
		}
	}

}