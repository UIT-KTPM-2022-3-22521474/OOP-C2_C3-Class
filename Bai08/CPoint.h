#include <iostream>
#include <cmath>
using namespace std;

class CPoint
{
private:
	double x;
	double y;
public:
	double getX();
	double getY();
	void setX(double);
	void setY(double);
	void InputP();
	double Distance(CPoint);
};

void CPoint::InputP()
{
	cout << "\nEnter point's X:	";
	cin >> x;
	cout << "Enter point's Y:	";
	cin >> y;
}

double CPoint::getX()
{
	return x;
}
double CPoint::getY()
{
	return y;
}
void CPoint::setX(double v)
{
	x = v;
}
void CPoint::setY(double v)
{
	y = v;
}

double CPoint::Distance(CPoint P2)
{
	return sqrt((x - P2.x) * (x - P2.x) + (y - P2.y) * (y - P2.y));
}