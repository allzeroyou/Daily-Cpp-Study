#pragma once
#include <iostream>
using namespace std;

// �θ�Ŭ���� tv: ��� tv�� �������� �κ��� �θ�Ŭ������ �� �������� ��. ������ �ڵ��� ����ȭ�� �������� �� ������ ���ϰԲ�
class Tv {
private:
	int channel;
public:
	Tv(int channel = 1) {
		this->channel = channel;
		cout << "�θ�Ŭ���� Tv ������ ȣ��" << endl;
	}
	~Tv() {
		cout << "�θ�Ŭ���� Tv �Ҹ��� ȣ��" << endl;
	}
	void channelUp() {
		this->channel++;
		cout << "���� ä��: " << this->channel << endl;
	}
	void channelDown() {
		this->channel--;
		cout << "���� ä��: " << this->channel << endl;
	}
	int getChannel() {
		return this->channel;
	}
	void setChannel(int channel) {
		this->channel = channel;
	}
};