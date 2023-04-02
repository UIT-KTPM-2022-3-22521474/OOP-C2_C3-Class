#include <iostream>
using namespace std;
#include "CFraction.h"

int main()
{
	cout << "Problem 01: Code a program enters a fraction. Check if it is a positive one, a negative one or its value is zero." << endl;
	CFraction f{};
	f.InputF();
	f.OutputF();
	f.Checker();
	return 0;
}