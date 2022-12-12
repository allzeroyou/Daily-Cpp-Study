#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바굽니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과: " << convert(src) << getDestString() << endl;
	}
};
class KmToMile:public Converter {

protected:
	double convert(double src) {  // 순수 가상 함수 구현
		return src / ratio;
	}
	string getSourceString() {
		return "Km";
	}
	string getDestString() {
		return "Mile";
	}
public:
	KmToMile(double ratio) :Converter(ratio) {}
};
//int main() {
//	KmToMile toMile(1.609344); // 1mile은 1.609344 km
//	toMile.run();
//}