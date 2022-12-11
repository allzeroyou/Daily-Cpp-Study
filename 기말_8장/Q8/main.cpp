#include "InkJetPrinter.h"
#include "LaserPrinter.h"
#include "Printer.h"

int Printer::countPrinter = 0;

int main() {
	//1. ����
	Printer* pInfo[100];

	//2. �ʱ�ȭ
	for (int i = 0; i < 100; i++) {
		pInfo[i] = nullptr;
	}
	//3. ��� ����
	pInfo[0] = new InkJetPrinter(1, "Officejet V40", "HP", 0, 5, 10);
	pInfo[1] = new LaserPrinter(2, "SCX-6x45", "�Ｚ����", 0, 3, 20);
	// ���
	cout << "���� �۵����� " << Printer::countPrinter << " ���� �����ʹ� �Ʒ��� ����" << endl;

	for (int i = 0; i < 100; i++) {
		if (pInfo[i] != nullptr) { // ��Ұ� ��������
			if (pInfo[i]->id == 1) {
				cout << "��ũ�� : ";
				((InkJetPrinter*)pInfo[i])->showInfo();
			}
			else if (pInfo[i]->id == 2) {
				cout << "������ : ";
				((LaserPrinter*)pInfo[i])->showInfo();
			}
		}
		else break; // ��� ������ Ż��
	}
	while (1) {
		cout << "������(1: ��ũ��, 2: ������)�� �ż� �Է�>>";
		int choice;
		int printedCount;
		cin >> choice;
		cin >> printedCount;
		if (choice == 1) {
			if (pInfo[0]->availableCount >= printedCount) {
				((InkJetPrinter*)pInfo[0])->prinInkJet(printedCount);
				cout << "����Ʈ�Ͽ����ϴ�." << endl;

				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
			else {
				cout << "������ ������ ����Ʈ �Ұ�" << endl;
				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
		}
		else if (choice == 2) {
			if (pInfo[1]->availableCount >= printedCount) {
				((LaserPrinter*)pInfo[1])->printLaser(printedCount);
				cout << "����Ʈ�Ͽ����ϴ�." << endl;

				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
			else {
				cout << "������ ������ ����Ʈ �Ұ�" << endl;
				((InkJetPrinter*)pInfo[0])->showInfo();
				((LaserPrinter*)pInfo[1])->showInfo();
			}
		}
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>> ";
		string goStop;
		cin >> goStop;
		if (goStop == "y")
			continue;
		else
			break;
	}



	// new������ delete���־��
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