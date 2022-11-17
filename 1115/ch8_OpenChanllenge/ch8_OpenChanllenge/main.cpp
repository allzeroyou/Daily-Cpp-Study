#include "Book.h"
#include "CompactDisk.h"
#include "ConversationBook.h"
#include "Product.h"
#include <crtdbg.h> // �޸𸮴��� Ȯ��

int Product::numberOfProduct = 0; // ��ü ���� ī��Ʈ
// static ����: ��ü ���� �� ���� ���� ����

int main(void) {
	// ����ڿ��� ��ǰ �Է¹ޱ�(getline: string ����, cin: int ����?)
	// �ִ� 100	���� ��ǰ�� ����
	// �Է� �޾Ҵٰ� ����, �Ű������� ����.
	Product* productInfo[100]; // ��ȯ���� void�� �ƴ� product�� �ϸ� �ٷ� ������ �����ϴ�.

	for (int i = 0; i < 100; i++) {
		productInfo[i] = nullptr;
	}
		
	// å, ����cd, ȸȭå ��ü ���� ����
	productInfo[0] = new Book(0, 100, "�ڵ��׽�Ʈ �غ� ����", "�Ѻ��̵��", 30000, "������", "�̰��� ����� ���� �ڵ� �׽�Ʈ�� with ���̽�", 100);
	productInfo[1] = new CompactDisk(1, 200, "������ ��� ����", "�Ѽ���ȹ", 15000, "������ forever", "������");

	productInfo[2] = new ConversationBook(2, 300, "������ ���� ���� ȸȭ", "�Ѽ���ȹ", 20000, "�˿���", "����", "����", 200);

	// ���� ��ü�� � ��ü���� ������
	//Product* p_ptr = nullptr;

	for (int i = 0; i < 100; i++) {
		//if (productInfo[i] == nullptr) {
		//	return -1;
		//}
		// info �迭�� ��Ҵ� �� ��ü�� �ּҰ��� ����Ű�� ����.
		// ��ŭ ������ �����ð���, �� ��ȯ�� ���־�� ��.
		// p_ptr = (Product*)productInfo[i];
		
		//if (p_ptr->m_ObjType == 0) { // å
		if (productInfo[i]->m_ObjType==0){
			// å ��ü�� ũ�� ��ŭ �� ��ȯ��, ���� �Ҵ����־�� ��.
			//Book* b_ptr = (Book*)productInfo[i];
			// ���
			((Book*)productInfo[i])->printInfo();
			//b_ptr->printInfo();
			cout << endl;

		}
		// else if (p_ptr->m_ObjType == 1) { // ���� cd
		else if (productInfo[i]->m_ObjType == 1) { // ���� cd
			//CompactDisk* cd_ptr = (CompactDisk*)productInfo[i];
			((CompactDisk*)productInfo[i])->printInfo();
			//cd_ptr->printInfo();
			cout << endl;

		}
		//else if (p_ptr->m_ObjType == 2) { // ȸȭå
		else if (productInfo[i]->m_ObjType == 2) { // ȸȭå
			//ConversationBook* conver_ptr = (ConversationBook*)productInfo[i];
			((ConversationBook*)productInfo[i])->printInfo();
			// conver_ptr->Book::printInfo(); // �θ��� �Լ�ȣ��
			// conver_ptr->printInfo();
			cout << endl;
		}
	}
	 // new�� ���. delete�� �޸� �����Ҵ� ���� ���־��!
	 // 100���� �������� "��ü ����"�� �̿��� ȿ�������� �ڵ� �ۼ��ϱ�
	for (int i = 0; i < 100; i++) {
		//if (productInfo[i] != nullptr) {
			//p_ptr = (Product*)productInfo[i];

		if (productInfo[i]->m_ObjType == 0)
			delete (Book*)productInfo[i];
	
		else if (productInfo[i]->m_ObjType == 1) 
			delete (CompactDisk*)productInfo[i];
			
		else if (productInfo[i]->m_ObjType == 2) 
			delete (ConversationBook*)productInfo[i];

	}
	_CrtDumpMemoryLeaks(); // �޸� ���� üũ

}