#include <iostream>
using namespace std;

class CFraction
{
private:
	int numerator;
	int denominator;
public:
	void InputF();
	void Checker();
};

int main()
{
	cout << "Problem 01: Code a program enters a fraction. Check if it is a positive one, a negative one or its value is zero." << endl;
	CFraction f;
	f.InputF();
	f.Checker();
	return 1206;
}

void CFraction::InputF()
{
	cout << "\nEnter the numerator: ";
	cin >> numerator;
	cout << "Enter the denominator: ";
	cin >> denominator;
	while (denominator == 0)
	{
		cout << "The denominator must be an integer other than 0. Please re-enter the denominator." << endl;
		cout << "Enter the denominator: ";
		cin >> denominator;
	}
}

void CFraction::Checker()
{
	float result = (float)numerator / denominator;
	if (result > 0)
		cout << endl << numerator << "/" << denominator << " is a positive fraction." << endl;
	if (result < 0)
		cout << endl << numerator << "/" << denominator << " is a negative fraction." << endl;
	if (result == 0)
		cout << endl << numerator << "/" << denominator << " = 0." << endl;
}