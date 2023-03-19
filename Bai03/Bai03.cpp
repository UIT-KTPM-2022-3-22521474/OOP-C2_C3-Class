#include <iostream>
using namespace std;

int GCD(int, int);

class CFraction
{
private:
	int numerator;
	int denominator;
public:
	void InputF();
	void Irreducible();
	void MaxFraction(CFraction);
};

int main()
{
	cout << "Problem 03: Code a program enters 2 fractions. Find the biggest fraction and export the result." << endl;
	CFraction F1{}, F2{};
	cout << "\nEnter the first fraction: ";
	F1.InputF();
	F1.Irreducible();
	cout << "\nEnter the second fraction: ";
	F2.InputF();
	F2.Irreducible();
	F1.MaxFraction(F2);
	return 1206;
}

int GCD(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	return GCD(n2, n1 % n2);
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

void CFraction::Irreducible()
{
	int gcd = GCD(numerator, denominator);
	numerator /= gcd;
	denominator /= gcd;
}
void CFraction::MaxFraction(CFraction F2)
{
	double f1, f2;
	f1 = (double)numerator / denominator;
	f2 = (double)F2.numerator / F2.denominator;
	if (f1 > f2)
		if (f1 == (int)f1)
			cout << "\nThe biggest fraction is the first fraction which equals to " << f1 << "." << endl;
		else
		{
			if (denominator < 0)
			{
				numerator = -numerator;
				denominator = -denominator;
			}
			cout << "\nThe biggest fraction is the first fraction which equals to " << numerator << "/" << denominator << "." << endl;
		}
	if (f1 < f2)
		if (f2 == (int)f2)
			cout << "\nThe biggest fraction is the second fraction which equals to " << f2 << "." << endl;
		else
		{
			if (F2.denominator < 0)
			{
				F2.numerator = -F2.numerator;
				F2.denominator = -F2.denominator;
			}
			cout << "\nThe biggest fraction is the second fraction which equals to " << F2.numerator << "/" << F2.denominator << "." << endl;
		}
	if (f1 == f2)
		if (f1 == (int)f1)
			cout << "\nTwo inputted fractions have equal values which equals to " << f1 << "." << endl;
		else
		{
			if (denominator < 0)
			{
				numerator = -numerator;
				denominator = -denominator;
			}
			cout << "\nTwo inputted fractions have equal values which equals to " << numerator << "/" << denominator << "." << endl;
		}	
}