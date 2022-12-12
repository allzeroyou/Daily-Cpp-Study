#pragma once
#include "Shape.h"
using namespace std;
class GraphicEditor
{
	Shape* pStart;
	Shape* pLast;

	static int countShape;
	
protected:
	void create(int choice);
	void remove(int choice);

public:
	GraphicEditor();
	~GraphicEditor();
	void run( ); // 프로그램 실행
};

