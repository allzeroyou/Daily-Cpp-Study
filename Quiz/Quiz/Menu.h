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

	// 2. 연산자 선언
	//int operator+( int  op2);

};

// 1. 연산자 착안
// 주문된 메뉴(객체)의 총 금액을 출력

// 3. 연산자 구현
//int Menu::operator+( int op2) {
//	Menu op1;
//	return op1.price + op2;
//	
//}

