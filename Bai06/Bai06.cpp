#include <iostream>
using namespace std;
#include "CGregorianDate.h"

int main()
{
	cout << "Problem 05: Code a program enters a date. Find the next date and export result." << endl;
	CGregorianDate InpDate{}, NextDate{};
	int LastDateOfMonth;
	InpDate.InputD(LastDateOfMonth);
	InpDate.OutputD();
	InpDate.FollowingDate(NextDate, LastDateOfMonth);
	return 0;
}