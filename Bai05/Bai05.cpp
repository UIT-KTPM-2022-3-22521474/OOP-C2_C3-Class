#include <iostream>
using namespace std;
#include "CComplexNum.h"

int main()
{
	cout << "Problem 05: Code a program enters 2 complex numbers. Find its sum, difference, product and export results." << endl;
	CComplexNum CN1{}, CN2{};
	cout << "\nEnter the first complex number:";
	CN1.InputCN();
	cout << "\nEnter the second complex number:";
	CN2.InputCN();
	cout << "\nThe first inputted complex number is:		";
	CN1.OutputCN();
	cout << "The second inputted complex number is:		";
	CN2.OutputCN();
	CN1.Sum(CN2);
	CN1.Diff(CN2);
	CN1.Pro(CN2);
	CN1.Quote(CN2);
	return 0;
}