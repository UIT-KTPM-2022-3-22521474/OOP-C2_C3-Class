#include <iomanip>
#include "CPoint.h"

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
	void OutputT();
	void Length();
	void TChecker();
	void Circumference();
	void Area();
	void Centroid();
};

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

void CTriangle::OutputT()
{
	cout << "\nA point is:				(" << A.getX() << ", " << A.getY() << ")." << endl;
	cout << "B point is:				(" << B.getX() << ", " << B.getY() << ")." << endl;
	cout << "C point is:				(" << C.getX() << ", " << C.getY() << ")." << endl;
}

void CTriangle::Circumference()
{
	double p = a_length + b_length + c_length;
	cout << "\nCircumfercence of triangle ABC is:	" << setw(5) << setprecision(5) << p << "." << endl;
}
void CTriangle::Area()
{
	double halfp = (a_length + b_length + c_length) / 2;
	double s = sqrt(halfp * (halfp - a_length) * (halfp - b_length) * (halfp - c_length));
	cout << "Area of triangle ABC is: 		 " << setw(5) << setprecision(5) << s << "." << endl;
}
void CTriangle::Centroid()
{
	CPoint G{};
	double gx = (A.getX() + B.getX() + C.getX()) / 3;
	double gy = (A.getY() + B.getY() + C.getY()) / 3;
	G.setX(gx);
	G.setY(gy);
	cout << "Centroid of triangle ABC is: 		 (" << G.getX() << "," << G.getY() << ")." << endl;
}