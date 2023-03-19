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
	void Sum(CFraction);
	void Diff(CFraction);
	void Pro(CFraction);
	void Quote(CFraction);
};

int GCD(int, int);

int main()
{
	cout << "Problem 04: Code a program enters 2 fractions. Find its sum, difference, product, quotient and export results." << endl;
	CFraction F1{}, F2{};
	cout << "\nEnter the first fraction: ";
	F1.InputF();
	F1.Irreducible();
	cout << "\nEnter the second fraction: ";
	F2.InputF();
	F2.Irreducible();
	F1.Sum(F2);
	F1.Diff(F2);
	F1.Pro(F2);
	F1.Quote(F2);
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
void CFraction::Sum(CFraction F2)
{
	CFraction sum{};
	sum.numerator = F2.denominator * numerator + denominator * F2.numerator;
	sum.denominator = denominator * F2.denominator;
	double s = (double)sum.numerator / sum.denominator;
	sum.Irreducible();
	if (s == (int)s)
		cout << "\nSum of 2 inputted fraction is:		" << s << "." << endl;
	else
	{
		if (sum.denominator < 0)
		{
			sum.numerator = -sum.numerator;
			sum.denominator = -sum.denominator;
		}
		cout << "\nSum of 2 inputted fraction is:		" << sum.numerator << "/" << sum.denominator << "." << endl;
	}
}
void CFraction::Diff(CFraction F2)
{
	CFraction diff{};
	diff.numerator = F2.denominator * numerator - denominator * F2.numerator;
	diff.denominator = denominator * F2.denominator;
	double d = (double)diff.numerator / diff.denominator;
	diff.Irreducible();
	if (d == (int)d)
		cout << "Difference of 2 inputted fraction is:	" << d << "." << endl;
	else
	{
		if (diff.denominator < 0)
		{
			diff.numerator = -diff.numerator;
			diff.denominator = -diff.denominator;
		}
		cout << "Difference of 2 inputted fraction is:	" << diff.numerator << "/" << diff.denominator << "." << endl;
	}
}
void CFraction::Pro(CFraction F2)
{
	CFraction pro{};
	pro.numerator = numerator * F2.numerator;
	pro.denominator = denominator * F2.denominator;
	double p = (double)pro.numerator / pro.denominator;
	pro.Irreducible();
	if (p == (int)p)
		cout << "Product of 2 inputted fraction is:	" << p << "." << endl;
	else
	{
		if (pro.denominator < 0)
		{
			pro.numerator = -pro.numerator;
			pro.denominator = -pro.denominator;
		}
		cout << "Product of 2 inputted fraction is:	" << pro.numerator << "/" << pro.denominator << "." << endl;
	}
}
void CFraction::Quote(CFraction F2)
{
	CFraction quote{};
	quote.numerator = numerator * F2.denominator;
	quote.denominator = denominator * F2.numerator;
	double q = (double)quote.numerator / quote.denominator;
	quote.Irreducible();
	if (q == (int)q)
		cout << "Quotient of 2 inputted fraction is:	" << q << "." << endl;
	else
	{
		if (quote.denominator < 0)
		{
			quote.numerator = -quote.numerator;
			quote.denominator = -quote.denominator;
		}
		cout << "Quotient of 2 inputted fraction is:	" << quote.numerator << "/" << quote.denominator << "." << endl;
	}
}