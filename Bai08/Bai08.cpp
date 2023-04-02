#include "CTriangle.h"

int main()
{
	cout << "Problem 08:	Code a program enters A, B, C point's coordinate of a triangle in Oxy." << endl;
	cout << "		Find ABC's circumference, area and centroid." << endl;
	CTriangle ABC{};
	ABC.InputT();
	ABC.Length();
	ABC.TChecker();
	ABC.OutputT();
	ABC.Circumference();
	ABC.Area();
	ABC.Centroid();
	return 0;
}
