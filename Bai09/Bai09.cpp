#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class CPoint
{
public:
	int x;
	int y;
	void InputCP();
};
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

int main()
{
	cout << "Problem 09:	Code a program enters the circle center's coordinate and the circle radius." << endl;
	cout << "		Find the circumference and the area of the circle." << endl;
	CCircle C;
	C.InputC();
	C.Circumference();
	C.Area();
	return 1206;
}

void CPoint::InputCP()
{
	cout << "\nEnter center's X:		";
	cin >> x;
	cout << "Enter center's Y:		";
	cin >> y;
}
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
	cout << "\nThe circumference of the circle is:	" << setprecision(6) << c << ".";
}
void CCircle::Area()
{
	double s = M_PI* pow(R, 2);
	cout << "\nThe area of the circle is:		" << setprecision(6) << s << "." << endl;
}