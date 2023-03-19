#include <iostream>
using namespace std;

class CFraction
{
private:
	int numerator;
	int denominator;
public:
	void InputF();
	void OutputF();
};

int main()
{
	cout << "Problem 10: Declare and define the input method and output method for the fraction class." << endl;
	CFraction F{};
	F.InputF();
	F.OutputF();
	return 1206;
}

void CFraction::InputF()
{
	cout << "\nEnter the numerator:		";
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
void CFraction::OutputF()
{
	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = -denominator;
	}
	cout << "\nThe inputted fraction is:	" << numerator << "/" << denominator << "." << endl;
}