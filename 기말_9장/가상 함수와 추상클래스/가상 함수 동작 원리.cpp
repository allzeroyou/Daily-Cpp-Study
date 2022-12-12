#include <iostream>
using namespace std;

class CProduct {
public:
	double m_nID;
	virtual void print() {
		cout << "Product Info" << endl;
	}
};
class CBook :public CProduct {
public:
	double m_nISBN;
	void print() override {
		cout << "Book Info" << endl;
	}
};
//void main() {
//	double nType = 0;
//	CProduct* proPtr;
//	cin >> nType;
//	if (nType == 0)
//		proPtr = new CProduct;
//	else // nType == 1
//		proPtr = new CBook;
//	proPtr->print();
//	// newÀÇ Â¦±Ã delete
//	delete proPtr;
//}