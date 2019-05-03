#include "Rectangle.h"

void rectangle()
{
	Rectangle inner{};
	Rectangle outer{};
	inner._height = 10;
	inner._width = 12;
	cout << "Rectangle height: " << inner._height << endl;
	cout << "Rectangle width: " << inner._width << endl;
}