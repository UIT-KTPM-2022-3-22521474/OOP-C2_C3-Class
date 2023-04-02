#include <iostream>
#include <iomanip>
using namespace std;
#include "C3DPoint.h"

int main()
{
	cout << "Problem 02: Code a program enters 2 points in Oxyz. Calculate its distance and export the result." << endl;
	C3DPoint P1{}, P2{};
	cout << "\nEnter first point's coordinate: " << endl;
	P1.InputP();
	cout << "\nEnter second point's coordinate: " << endl;
	P2.InputP();
	cout << "\nThe first point is: ";
	P1.OutputP();
	cout << "The second point is: ";
	P2.OutputP();
	double d = P1.Distance(P2);
	cout << "\nThe distance of 2 entered points is: " << setw(5) << setprecision(5) << d << "." << endl;
	return 0;
}