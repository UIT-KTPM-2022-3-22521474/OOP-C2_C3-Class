#include <iostream>
using namespace std;
#include "CFraction.h"

int main()
{
	cout << "Problem 04: Code a program enters 2 fractions. Find its sum, difference, product, quotient and export results." << endl;
	CFraction F1{}, F2{};
	cout << "\nEnter the first fraction: ";
	F1.InputF();	
	cout << "\nEnter the second fraction: ";
	F2.InputF();
	cout << "\nThe first inputted fraction is: ";
	F1.OutputF();
	F1.Irreducible();
	cout << "The second inputted fraction is: ";
	F2.OutputF();
	F2.Irreducible();
	F1.Sum(F2);
	F1.Diff(F2);
	F1.Pro(F2);
	F1.Quote(F2);
	return 0;
}