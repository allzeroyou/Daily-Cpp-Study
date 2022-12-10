// 참조 리턴 << 연산자

// 1. 연산자 착안
// 객체 a의 kick과 punch에 각각 3을 더하고, 다시 5, 6을 연속적으로 더하는 연산.
// 실행결과 kick=15, punch=16

// 2. 연산자 함수 구현
// a<< 3 실행 후 다음 << 5 연산이 객체 a에 대해 진행되려면, a<<3에서 연산자 <<가 연산 후 객체 a의 참조를 리턴해야.


class Power {
private:
	int kick;
	int punch;
public:
	Power() {
		this->kick = 0;
		this->punch = 0;
	}
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	Power& operator << (int n);
	void show();
};
Power& Power::operator<<(int n) {
	kick += n;
	punch += n;
	return *this;
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}