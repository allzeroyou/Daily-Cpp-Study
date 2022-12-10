// ���� ���� << ������

// 1. ������ ����
// ��ü a�� kick�� punch�� ���� 3�� ���ϰ�, �ٽ� 5, 6�� ���������� ���ϴ� ����.
// ������ kick=15, punch=16

// 2. ������ �Լ� ����
// a<< 3 ���� �� ���� << 5 ������ ��ü a�� ���� ����Ƿ���, a<<3���� ������ <<�� ���� �� ��ü a�� ������ �����ؾ�.


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