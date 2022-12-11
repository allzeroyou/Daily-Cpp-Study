#include <iostream>
#include <string>
using namespace std;

class BaseMemory {
	char* mem;
	int size;
protected:
	BaseMemory(int size) { mem = new char[size]; this->size = size; }

	void burn(char* mem, int address, int size) { // 공장에서 생산할때 사용자가 요청한 데이터로 초기화
		if (address + size > this->size)
			return; // out of memory range
		for (int i = 0; i < size; i++)
			this->mem[address + i] = mem[i];
	}
public:
	char read(int address) { return mem[address]; }
};
class ROM : public BaseMemory { // 읽기 전용 메모리 -> 생성자에서 초기화
public:
	ROM(int size, char* initData, int initSize);
};
ROM::ROM(int size, char* initData, int initSize) :BaseMemory(size) {
	burn(initData, 0, initSize); // 0번지부터 initSize 만큼 데이터 굽기.
}
class RAM :public BaseMemory {
public:
	RAM(int size);
	void write(int address, char data);
};
RAM::RAM(int size) :BaseMemory(size) {}
void RAM::write(int address, char data) {
	burn(&data, address, 1); // 하나씩 읽어옴
}
//int main() {
//	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
//	ROM biosROM(1024 * 10, x, 5); //10KB의 ROM 메모리, 배열 x로 초기화됨
//	RAM mainMemory(1024 * 1024); // 1MB의 RAM 메모리
//	// 0번지에서 4번지까지 biosROM에서 읽어 mainMemory에 복사
//	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
//	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
//}