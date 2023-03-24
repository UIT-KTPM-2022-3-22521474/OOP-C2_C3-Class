#include <iostream>
using namespace std;

class CFraction
{
private:
	int Numerator;
	int Denominator;
public:
	void InputF();
	void Checker();
};

int main()
{
	cout << "Problem 01: Code a program enters a fraction. Check if it is a positive one, a negative one or its value is zero." << endl;
	CFraction f{};
	f.InputF();
	f.Checker();
	return 0;
}

void CFraction::InputF()
{
	cout << "\nEnter the numerator: ";
	cin >> Numerator;
	cout << "Enter the denominator: ";
	cin >> Denominator;
	while (Denominator == 0)
	{
		cout << "The denominator must be an integer other than 0. Please re-enter the Denominator." << endl;
		cout << "Enter the denominator: ";
		cin >> Denominator;
	}
}

void CFraction::Checker()
{
	float result = (float)Numerator / Denominator;
	if (result > 0)
		cout << endl << Numerator << "/" << Denominator << " is a positive fraction." << endl;
	if (result < 0)
		cout << endl << Numerator << "/" << Denominator << " is a negative fraction." << endl;
	if (result == 0)
		cout << endl << Numerator << "/" << Denominator << " = 0." << endl;
}