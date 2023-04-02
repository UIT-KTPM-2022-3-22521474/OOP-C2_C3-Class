#define _USE_MATH_DEFINES
#include <iomanip>
#include <cmath>
#include "CPoint.h"

class CCircle
{
private:
	CPoint O;
	double R;
public:
	void InputC();
	void Circumference();
	void Area();
};

void CCircle::InputC()
{
	cout << "\nEnter circle center's coordinate:";
	O.InputCP();
	cout << "Enter the circle radius:	";
	cin >> R;
}

void CCircle::Circumference()
{
	double c = 2 * M_PI * R;
	cout << "\nThe circumference of the circle is:	" << setw(6) << setprecision(6) << c << ".";
}

void CCircle::Area()
{
	double s = M_PI * pow(R, 2);
	cout << "\nThe area of the circle is:		" << setw(6) << setprecision(6) << s << "." << endl;
}