class CFraction
{
private:
	int Numerator;
	int Denominator;
public:
	void InputF();
	void OutputF();
	void Checker();
};

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

void CFraction::OutputF()
{
	cout << "\nThe inputted fraction is: " << Numerator << "/" << Denominator << "." << endl;
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