#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class CPoint
{
public:
	double x;
	double y;
	void InputP();
	double Distance(CPoint);
};
class CTriangle
{
private:
	CPoint A;
	CPoint B;
	CPoint C;
public:
	void InputT();
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
	ABC.Circumference();
	ABC.Area();
	ABC.Centroid();
	return 1206;
}

void CPoint::InputP()
{
	cout << "\nEnter point's X:	";
	cin >> x;
	cout << "Enter point's Y:	";
	cin >> y;
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

void CTriangle::Circumference()
{
	double a = B.Distance(C);
	double b = C.Distance(A);
	double c = A.Distance(B);
	double p = a + b + c;
	cout << "\nCircumfercence of triangle ABC is:	" << setprecision(6) << p << "." << endl;
}
void CTriangle::Area()
{
	double a = B.Distance(C);
	double b = C.Distance(A);
	double c = A.Distance(B);
	double halfp = (a + b + c) / 2;
	double s = sqrt(halfp * (halfp - a) * (halfp - b) * (halfp - c));
	cout << "Area of triangle ABC is:		" << setprecision(6) << s << "." << endl;
}
void CTriangle::Centroid()
{
	CPoint G{};
	G.x = (A.x + B.x + C.x) / 3;
	G.y = (A.y + B.y + C.y) / 3;
	cout << "Centroid of triangle ABC is:		(" << G.x << "," << G.y << ")." << endl;
}