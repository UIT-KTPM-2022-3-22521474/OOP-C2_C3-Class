#include "CCircle.h"

int main()
{
	cout << "Problem 09:	Code a program enters the circle center's coordinate and the circle radius." << endl;
	cout << "		Find the circumference and the area of the circle." << endl;
	CCircle C{};
	C.InputC();
	C.Circumference();
	C.Area();
	return 0;
}