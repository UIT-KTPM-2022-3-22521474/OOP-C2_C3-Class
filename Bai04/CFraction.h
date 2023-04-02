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
	void Sum(CFraction);
	void Diff(CFraction);
	void Pro(CFraction);
	void Quote(CFraction);
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

void CFraction::Sum(CFraction F2)
{
	CFraction sum{};
	sum.Numerator = F2.Denominator * Numerator + Denominator * F2.Numerator;
	sum.Denominator = Denominator * F2.Denominator;
	double s = (double)sum.Numerator / sum.Denominator;
	sum.Irreducible();
	if (s == (int)s)
		cout << "\nSum of 2 inputted fraction is:		" << s << "." << endl;
	else
	{
		if (sum.Denominator < 0)
		{
			sum.Numerator = -sum.Numerator;
			sum.Denominator = -sum.Denominator;
		}
		cout << "\nSum of 2 inputted fraction is:		" << sum.Numerator << "/" << sum.Denominator << "." << endl;
	}
}

void CFraction::Diff(CFraction F2)
{
	CFraction diff{};
	diff.Numerator = F2.Denominator * Numerator - Denominator * F2.Numerator;
	diff.Denominator = Denominator * F2.Denominator;
	double d = (double)diff.Numerator / diff.Denominator;
	diff.Irreducible();
	if (d == (int)d)
		cout << "Difference of 2 inputted fraction is:	" << d << "." << endl;
	else
	{
		if (diff.Denominator < 0)
		{
			diff.Numerator = -diff.Numerator;
			diff.Denominator = -diff.Denominator;
		}
		cout << "Difference of 2 inputted fraction is:	" << diff.Numerator << "/" << diff.Denominator << "." << endl;
	}
}

void CFraction::Pro(CFraction F2)
{
	CFraction pro{};
	pro.Numerator = Numerator * F2.Numerator;
	pro.Denominator = Denominator * F2.Denominator;
	double p = (double)pro.Numerator / pro.Denominator;
	pro.Irreducible();
	if (p == (int)p)
		cout << "Product of 2 inputted fraction is:	" << p << "." << endl;
	else
	{
		if (pro.Denominator < 0)
		{
			pro.Numerator = -pro.Numerator;
			pro.Denominator = -pro.Denominator;
		}
		cout << "Product of 2 inputted fraction is:	" << pro.Numerator << "/" << pro.Denominator << "." << endl;
	}
}

void CFraction::Quote(CFraction F2)
{
	CFraction quote{};
	quote.Numerator = Numerator * F2.Denominator;
	quote.Denominator = Denominator * F2.Numerator;
	double q = (double)quote.Numerator / quote.Denominator;
	quote.Irreducible();
	if (q == (int)q)
		cout << "Quotient of 2 inputted fraction is:	" << q << "." << endl;
	else
	{
		if (quote.Denominator < 0)
		{
			quote.Numerator = -quote.Numerator;
			quote.Denominator = -quote.Denominator;
		}
		cout << "Quotient of 2 inputted fraction is:	" << quote.Numerator << "/" << quote.Denominator << "." << endl;
	}
}