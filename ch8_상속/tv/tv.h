#pragma once
#include <iostream>
using namespace std;

// 부모클래스 tv: 모든 tv의 공통적인 부분을 부모클래스가 다 가지도록 함. 이유는 코드의 간결화와 유지보스 및 관리가 편하게끔
class Tv {
private:
	int channel;
public:
	Tv(int channel = 1) {
		this->channel = channel;
		cout << "부모클래스 Tv 생성자 호출" << endl;
	}
	~Tv() {
		cout << "부모클래스 Tv 소멸자 호출" << endl;
	}
	void channelUp() {
		this->channel++;
		cout << "현재 채널: " << this->channel << endl;
	}
	void channelDown() {
		this->channel--;
		cout << "현재 채널: " << this->channel << endl;
	}
	int getChannel() {
		return this->channel;
	}
	void setChannel(int channel) {
		this->channel = channel;
	}
};