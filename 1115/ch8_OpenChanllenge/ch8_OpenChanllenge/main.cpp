#include "Book.h"
#include "CompactDisk.h"
#include "ConversationBook.h"
#include "Product.h"

int main(void) {
	// ����ڿ��� ��ǰ �Է¹ޱ�(getline: string ����, cin: int ����?)
	// �ִ� 100	���� ��ǰ�� ����
	// �Է� �޾Ҵٰ� ����, �Ű������� ����.
	// void ���ӿ� ����(�ڷ��� x)
	void* productInfo[100];

	for (int i = 0; i < 100; i++)
		productInfo[i] = nullptr;
	// å, ����cd, ȸȭå ��ü ���� ����
	productInfo[0] = new Book(0, 100, "�ڵ��׽�Ʈ �غ� ����", "�Ѻ��̵��", 30000, "������", "�̰��� ����� ���� �ڵ� �׽�Ʈ�� with ���̽�", 100);
	productInfo[1] = new CompactDisk(1,200, "������ ��� ����","�Ѽ���ȹ",15000, "������ forever","������");

	productInfo[2] = new ConversationBook(2,300, "������ ���� ���� ȸȭ", "�Ѽ���ȹ", 20000, "�˿���", "����", "����", 200);

	// ���� ��ü�� � ��ü���� ������
	Product* p_ptr = nullptr;

	for (int i = 0; i < 100; i++) {
		if (productInfo[i] == nullptr) {
			return -1;
		}
		// info �迭�� ��Ҵ� �� ��ü�� �ּҰ��� ����Ű�� ����.
		// ��ŭ ������ �����ð���, �� ��ȯ�� ���־�� ��.
		p_ptr = (Product*)productInfo[i];
		if (p_ptr->m_ObjType == 0) { // å
			// å ��ü�� ũ�� ��ŭ �� ��ȯ��, ���� �Ҵ����־�� ��.
			Book* b_ptr = (Book*)productInfo[i];
			// ���
			b_ptr->showBook();
			cout << endl;

		}
		else if (p_ptr->m_ObjType == 1) { // ���� cd
			CompactDisk* cd_ptr = (CompactDisk*)productInfo[i];
			cd_ptr->showCompactDisk();
			cout << endl;

		}
		else if (p_ptr->m_ObjType == 2) { // ȸȭå
			ConversationBook* conver_ptr = (ConversationBook*)productInfo[i];
			conver_ptr->showConversationBook();
			cout << endl;
		}
	}
	

}