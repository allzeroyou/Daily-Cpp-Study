#pragma once
#include <iostream>
#include <string>

using namespace std;

class Menu
{
public:
	int tableNo;
	int price;
	Menu() {};
	virtual void recipe();
	Menu(int tableNo, int price);

	// 2. ������ ����
	//int operator+( int  op2);

};

// 1. ������ ����
// �ֹ��� �޴�(��ü)�� �� �ݾ��� ���

// 3. ������ ����
//int Menu::operator+( int op2) {
//	Menu op1;
//	return op1.price + op2;
//	
//}

