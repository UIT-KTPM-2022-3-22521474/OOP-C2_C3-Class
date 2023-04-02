#include <iostream>
using namespace std;
#include "CMonomial.h"

int main()
{
	cout << "Problem 10: Declare and define input and output method for monomial class." << endl;
	CMonomial M{};
	M.Input();
	M.Output();
	return 0;
}