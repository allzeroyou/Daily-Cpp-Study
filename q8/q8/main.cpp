#include "printer.h"
#include "inkJetPrinter.h"
#include "laserPrinter.h"
#include <crtdbg.h> // 메모리누수 확인

int printer::CountPrinter = 0;

int main(void) {
	printer* printerInfo[100];

	for (int i = 0; i < 100; i++) {
		printerInfo[i] = nullptr;
	}
	printerInfo[0] = new inkJetPrinter(
		1, "Officejet V40", "HP", 5,  5, 10
	);
	printerInfo[1] = new laserPrinter(
		2, "SCX-6x45", "삼성전자", 3, 3, 20
	);
	cout << "현재 작동중인 " << printer::CountPrinter << " 대의 프린터는 아래와 같다" << endl;
	for (int i = 0; i < 100; i++) {
		if (printerInfo[i] != nullptr) {
			if (printerInfo[i]->id == 1) {
				cout << "잉크젯 : ";
				((inkJetPrinter*)printerInfo[i])->showinfo();
			}
			else if (printerInfo[i]->id == 2) {
				cout << "레이저 : ";
				((laserPrinter*)printerInfo[i])->showinfo();
				cout << endl;
			}
		}
		else { // 포인터가 가르키고 있는 값이 없다면 탈출한다
			break;
		}
	}

	while (1) {
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력 >> ";
		int choice;
		cin >> choice;
		int paper;
		cin >> paper;

		if (choice == 1) { // 잉크젯
			if (printerInfo[0]->availableCount >= paper) {
				((inkJetPrinter*)printerInfo[0])->printInkJet(paper);

				cout << "프린트하였습니다." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
			else {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
		}
		else if (choice == 2) { // 레이저
			if (printerInfo[1]->availableCount >= paper) {
				((laserPrinter*)printerInfo[1])->printLaser(paper);

				cout << "프린트하였습니다." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
			else {
				cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
		}
		else {
			break;
		}

		cout << "계속 프린트 하시겠습니까(y/n)>>";
		string yes_or_no;
		cin >> yes_or_no;

		if (yes_or_no == "y") {
			cout << endl << endl;
			continue;
		}
		else if (yes_or_no == "n") { 
			break;
		}
		else {
			break;
		}

	}
	// 프로그램 종료 전 delete로 동적할당해제
	for (int i = 0; i < 100; i++) {
		if (printerInfo[i] != nullptr) {

			if (printerInfo[i]->id == 1) {
				delete (inkJetPrinter*)printerInfo[i];

			}
			else if (printerInfo[i]->id == 2) {
				delete (laserPrinter*)printerInfo[i];

			}
		}

	}

	_CrtDumpMemoryLeaks(); // 메모리 누수 체크

}