#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "GraphicEditor.h"

static int countShape;

int main() {
	GraphicEditor* editor = new GraphicEditor;
	editor->run();
	delete editor;

}
