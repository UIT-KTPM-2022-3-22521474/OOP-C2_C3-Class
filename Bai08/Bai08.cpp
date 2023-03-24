#include <iostream>
#include <iomanip>
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
class CTriangle
{
private:
	CPoint A;
	CPoint B;
	CPoint C;
	double a_length;
	double b_length;
	double c_length;	
public:
	void InputT();
	void Length();
	void TChecker();
	void Circumference();
	void Area();
	void Centroid();
};

int main()
{
	cout << "Problem 08:	Code a program enters A, B, C point's coordinate of a triangle in Oxy." << endl;
	cout << "		Find ABC's circumference, area and centroid." << endl;
	CTriangle ABC{};
	ABC.InputT();
	ABC.Length();
	ABC.TChecker();
	ABC.Circumference();
	ABC.Area();
	ABC.Centroid();
	return 0;
}

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

void CTriangle::InputT()
{
	cout << "\nEnter A point's coordinate:	";
	A.InputP();
	cout << "Enter B point's coordinate:	";
	B.InputP();
	cout << "Enter C point's coordinate:	";
	C.InputP();
}

void CTriangle::Length()
{
	a_length = B.Distance(C);
	b_length = C.Distance(A);
	c_length = A.Distance(B);
}
void CTriangle::TChecker()
{
	while (a_length + b_length < c_length || a_length + c_length < b_length || b_length + c_length < a_length || a_length <= 0 || b_length <= 0 || c_length <= 0)
	{
		cout << "\nThe inputted points can't create a triangle. Please re-enter the points' coordinate!" << endl;
		InputT();
		Length();
	}		
}

void CTriangle::Circumference()
{
	double p = a_length + b_length + c_length;
	cout << "\nCircumfercence of triangle ABC is:	" << setw(6) <<setprecision(4) << p << "." << endl;
}
void CTriangle::Area()
{
	double halfp = (a_length + b_length + c_length) / 2;
	double s = sqrt(halfp * (halfp - a_length) * (halfp - b_length) * (halfp - c_length));
	cout << "Area of triangle ABC is:		" << setw(6) << setprecision(4) << s << "." << endl;
}
void CTriangle::Centroid()
{
	CPoint G{};
	double gx = (A.getX() + B.getX() + C.getX()) / 3;
	double gy = (A.getY() + B.getY() + C.getY()) / 3;
	G.setX(gx);
	G.setY(gy);
	cout << "Centroid of triangle ABC is:		(" << G.getX() << "," << G.getY() << ")." << endl;
}