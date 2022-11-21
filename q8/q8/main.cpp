#include "printer.h"
#include "inkJetPrinter.h"
#include "laserPrinter.h"
#include <crtdbg.h> // �޸𸮴��� Ȯ��

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
		2, "SCX-6x45", "�Ｚ����", 3, 3, 20
	);
	cout << "���� �۵����� " << printer::CountPrinter << " ���� �����ʹ� �Ʒ��� ����" << endl;
	for (int i = 0; i < 100; i++) {
		if (printerInfo[i] != nullptr) {
			if (printerInfo[i]->id == 1) {
				cout << "��ũ�� : ";
				((inkJetPrinter*)printerInfo[i])->showinfo();
			}
			else if (printerInfo[i]->id == 2) {
				cout << "������ : ";
				((laserPrinter*)printerInfo[i])->showinfo();
				cout << endl;
			}
		}
		else { // �����Ͱ� ����Ű�� �ִ� ���� ���ٸ� Ż���Ѵ�
			break;
		}
	}

	while (1) {
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է� >> ";
		int choice;
		cin >> choice;
		int paper;
		cin >> paper;

		if (choice == 1) { // ��ũ��
			if (printerInfo[0]->availableCount >= paper) {
				((inkJetPrinter*)printerInfo[0])->printInkJet(paper);

				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
			else {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
		}
		else if (choice == 2) { // ������
			if (printerInfo[1]->availableCount >= paper) {
				((laserPrinter*)printerInfo[1])->printLaser(paper);

				cout << "����Ʈ�Ͽ����ϴ�." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
			else {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
				((inkJetPrinter*)printerInfo[0])->showinfo();
				((laserPrinter*)printerInfo[1])->showinfo();
			}
		}
		else {
			break;
		}

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
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
	// ���α׷� ���� �� delete�� �����Ҵ�����
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

	_CrtDumpMemoryLeaks(); // �޸� ���� üũ

}