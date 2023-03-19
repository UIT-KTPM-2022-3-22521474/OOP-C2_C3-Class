#include <iostream>
using namespace std;

class CMixedNumber
{
private:
	int integer;
	int numerator;
	int denominator;
public:
	void InputMN();
	void OutputMN();
};

int main()
{
	cout << "Problem 10: Declare and define the input method and output method for the mixed number class." << endl;
	CMixedNumber MN{};
	MN.InputMN();
	MN.OutputMN();
	return 1206;
}

void CMixedNumber::InputMN()
{
	cout << "\nEnter the integer part:		";
	cin >> integer;
	cout << "Enter the numerator:		";
	cin >> numerator;
	cout << "Enter the denominator:		";
	cin >> denominator;
	while (denominator == 0)
	{
		cout << "The denominator must be an integer other than 0. Please re-enter the denominator." << endl;
		cout << "Re-enter the denominator:		";
		cin >> denominator;
	}
}
void CMixedNumber::OutputMN()
{
	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = -denominator;
	}
	cout << "\nThe inputted mixed number is:	" << integer << "(" << numerator << "/" << denominator << ")." << endl;
}