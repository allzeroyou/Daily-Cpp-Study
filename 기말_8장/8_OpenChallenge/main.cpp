#include "Product.h"
#include "Book.h"
#include "ConversationBook.h"
#include "CompactDisc.h"
#include <crtdbg.h> // �޸� ���� Ȯ��

// ������ ��ü�� ���� ����
int Product::M_nNumberOfProduct = 0;

int main() {
	Product* productList[100]; // ��ǰ���(=�ּҰ� ���� ���)

	for (int i = 0; i < 100; i++) {
		productList[i] = nullptr; // �ʱ�ȭ
	}

	// Book, CompactDisk, ConversationBook ��ü "����" ����
	productList[0] = new CompactDisk(1,100, "���ǰ��θ��³뷡", "����", 17000, "�ܸ����Ǽ�", "�ܸ�����");
	productList[1] = new Book(2,200, "��õ����", "����", 10000, "0000-1234", "����� �ô�", "�Ϸ�Ű");
	productList[2] = new ConversationBook(3,300, "��õ����", "����", 20000, "0000-1568", "�׸� �о��ִ� ����", "�̻�", "�ѱ���");

	//for (int i = 0; i < 100; i++) {
	//	CompackDisk* pDisk = (CompactDisk*)productList[0];
	//	
	//}

	// Product* p_ptr = nullptr;
	for (int i = 0; i < Product::M_nNumberOfProduct; i++) {
		//if (productList[i] == nullptr) // nullptr�� ����Ű�� �ִٸ� ���� ���� ��
		//	break;

		// p_ptr = (Product*)productList[i];

		//if (p_ptr->m_ObjType == 1) { // ��ŭ �����ž�? 
		if(productList[i]->m_ObjType ==1){
			// CompactDisk* pDisk = (CompactDisk*)productList[i];
			((CompactDisk*)productList[i])->printInfo(); // �θ�Ŭ������ �ƴ� �������� printInfo ȣ��
			cout << endl;
		}
		//else if (p_ptr->m_ObjType == 2) {
		if(productList[i]->m_ObjType ==2){
			//Book* pbook = (Book*)productList[i];
			((Book*)productList[i])->printInfo();
			cout << endl;
		}
		// else if (p_ptr->m_ObjType == 3) {
		if(productList[i]->m_ObjType ==3){
			//ConversationBook* pCbook = (ConversationBook*)productList[i];
			((ConversationBook*)productList[i])->printInfo();
			// pCbook->Book::printInfo(); // �ڽ�Ŭ������ �ƴ� �θ�Ŭ������ �Լ� ȣ��
			// pCbook->printInfo();
			cout << endl;
		}
	}
	// new -> delete�Ҷ�, ���� Ŭ������ ũ�⸸ŭ�� ���� �������־�� �Ѵ�.
	for (int i = 0; i < Product::M_nNumberOfProduct; i++) {
		// if (productList[i] != nullptr) {
			// p_ptr = (Product*)productList[i];
			
			//if (p_ptr->m_ObjType == 1) {
			if(productList[i]->m_ObjType ==1)
				delete (CompactDisk*)productList[i];
			//else if (p_ptr->m_ObjType == 2) {
			else if (productList[i]->m_ObjType == 2)
				delete (Book*)productList[i];
			//else if (p_ptr->m_ObjType == 3) {
			else if (productList[i]->m_ObjType == 3)
				delete (ConversationBook*)productList[i];
	}
	_CrtDumpMemoryLeaks();
	return 0;
}