#pragma once
#include <iostream>
using namespace std;

class UI
{
public:
	static int main_menu() {
		int n;
		cout << "����:1, ����:2, ��κ���:3, ����:4>>";
		cin >> n;
		return n;
	}
	static int one_menu() { //����
		int n;
		cout << "��:1, ��:2, �簢��:3 >>";
		cin >> n;
		return n;
	}
	static int two_menu() { // ����
		int n;
		cout << "�����ϰ��� �ϴ� ������ �ε���>>";
		cin >> n;
		return n;
	}
};

