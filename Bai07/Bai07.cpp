#include <iostream>
using namespace std;
#include "CGregorianDate.h"

int main()
{
	cout << "Problem 07: Code a program enters a date. Find the previous date and export result." << endl;
	CGregorianDate InpDate{}, PrevDate{};
	InpDate.InputD();
	InpDate.OutputD();
	InpDate.PreviousDate(PrevDate);
	return 0;
}