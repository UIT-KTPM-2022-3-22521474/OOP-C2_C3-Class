#include <iostream>
using namespace std;
#include "CFraction.h"

int main()
{
	cout << "Problem 03: Code a program enters 2 fractions. Find the biggest fraction and export the result." << endl;
	CFraction F1{}, F2{};
	cout << "\nEnter the first fraction: ";
	F1.InputF();
	F1.Irreducible();
	cout << "\nEnter the second fraction: ";
	F2.InputF();
	cout << "\nThe first inputted fraction is: ";
	F1.OutputF();
	cout << "The second inputted fraction is: ";
	F2.OutputF();
	F2.Irreducible();
	F1.MaxFraction(F2);
	return 0;
}