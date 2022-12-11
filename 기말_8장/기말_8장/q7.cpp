#include <iostream>
#include <string>
using namespace std;

class BaseMemory {
	char* mem;
	int size;
protected:
	BaseMemory(int size) { mem = new char[size]; this->size = size; }

	void burn(char* mem, int address, int size) { // ���忡�� �����Ҷ� ����ڰ� ��û�� �����ͷ� �ʱ�ȭ
		if (address + size > this->size)
			return; // out of memory range
		for (int i = 0; i < size; i++)
			this->mem[address + i] = mem[i];
	}
public:
	char read(int address) { return mem[address]; }
};
class ROM : public BaseMemory { // �б� ���� �޸� -> �����ڿ��� �ʱ�ȭ
public:
	ROM(int size, char* initData, int initSize);
};
ROM::ROM(int size, char* initData, int initSize) :BaseMemory(size) {
	burn(initData, 0, initSize); // 0�������� initSize ��ŭ ������ ����.
}
class RAM :public BaseMemory {
public:
	RAM(int size);
	void write(int address, char data);
};
RAM::RAM(int size) :BaseMemory(size) {}
void RAM::write(int address, char data) {
	burn(&data, address, 1); // �ϳ��� �о��
}
//int main() {
//	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
//	ROM biosROM(1024 * 10, x, 5); //10KB�� ROM �޸�, �迭 x�� �ʱ�ȭ��
//	RAM mainMemory(1024 * 1024); // 1MB�� RAM �޸�
//	// 0�������� 4�������� biosROM���� �о� mainMemory�� ����
//	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
//	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
//}