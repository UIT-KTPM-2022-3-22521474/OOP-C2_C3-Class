int GCD(int, int);

class CFraction
{
private:
	int Numerator;
	int Denominator;
public:
	void InputF();
	void OutputF();
	void Irreducible();
	void MaxFraction(CFraction);
};

int GCD(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	return GCD(n2, n1 % n2);
}

void CFraction::InputF()
{
	cout << "\nEnter the numerator: ";
	cin >> Numerator;
	cout << "Enter the denominator: ";
	cin >> Denominator;
	while (Denominator == 0)
	{
		cout << "The denominator must be an integer other than 0. Please re-enter the denominator." << endl;
		cout << "Enter the denominator: ";
		cin >> Denominator;
	}
}

void CFraction::OutputF()
{
	cout << Numerator << "/" << Denominator << endl;
}

void CFraction::Irreducible()
{
	int gcd = GCD(Numerator, Denominator);
	Numerator /= gcd;
	Denominator /= gcd;
}

void CFraction::MaxFraction(CFraction F2)
{
	double f1, f2;
	f1 = (double)Numerator / Denominator;
	f2 = (double)F2.Numerator / F2.Denominator;
	if (f1 > f2)
		if (f1 == (int)f1)
			cout << "\nThe biggest fraction is the first fraction which equals to " << f1 << "." << endl;
		else
		{
			if (Denominator < 0)
			{
				Numerator = -Numerator;
				Denominator = -Denominator;
			}
			cout << "\nThe biggest fraction is the first fraction which equals to " << Numerator << "/" << Denominator << "." << endl;
		}
	if (f1 < f2)
		if (f2 == (int)f2)
			cout << "\nThe biggest fraction is the second fraction which equals to " << f2 << "." << endl;
		else
		{
			if (F2.Denominator < 0)
			{
				F2.Numerator = -F2.Numerator;
				F2.Denominator = -F2.Denominator;
			}
			cout << "\nThe biggest fraction is the second fraction which equals to " << F2.Numerator << "/" << F2.Denominator << "." << endl;
		}
	if (f1 == f2)
		if (f1 == (int)f1)
			cout << "\nTwo inputted fractions have equal values which equals to " << f1 << "." << endl;
		else
		{
			if (Denominator < 0)
			{
				Numerator = -Numerator;
				Denominator = -Denominator;
			}
			cout << "\nTwo inputted fractions have equal values which equals to " << Numerator << "/" << Denominator << "." << endl;
		}
}