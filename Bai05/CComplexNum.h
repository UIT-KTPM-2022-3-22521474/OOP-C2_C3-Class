class CComplexNum
{
private:
	float Real;
	float Imaginary;
public:
	void InputCN();
	void OutputCN();
	void Sum(CComplexNum);
	void Diff(CComplexNum);
	void Pro(CComplexNum);
	void Quote(CComplexNum);
};

void CComplexNum::InputCN()
{
	cout << "\nEnter the real part of the number:		";
	cin >> Real;
	cout << "Enter the imaginary part of the number:		";
	cin >> Imaginary;
}

void CComplexNum::OutputCN()
{
	if (Imaginary < 0)
	{
		Imaginary = -Imaginary;
		cout << Real << " - " << Imaginary << "i." << endl;
	}
	else
		cout << Real << " + " << Imaginary << "i." << endl;
}

void CComplexNum::Sum(CComplexNum CN2)
{
	CComplexNum sum{};
	sum.Real = Real + CN2.Real;
	sum.Imaginary = Imaginary + CN2.Imaginary;
	if (sum.Imaginary < 0)
	{
		sum.Imaginary = -sum.Imaginary;
		cout << "\nSum of 2 inputted complex number is:		" << sum.Real << " - " << sum.Imaginary << "i." << endl;
	}
	else
		cout << "\nSum of 2 inputted complex number is:		" << sum.Real << " + " << sum.Imaginary << "i." << endl;
}
void CComplexNum::Diff(CComplexNum CN2)
{
	CComplexNum diff{};
	diff.Real = Real - CN2.Real;
	diff.Imaginary = Imaginary - CN2.Imaginary;
	if (diff.Imaginary < 0)
	{
		diff.Imaginary = -diff.Imaginary;
		cout << "Difference of 2 inputted complex number is:	" << diff.Real << " - " << diff.Imaginary << "i." << endl;
	}
	else
		cout << "Difference of 2 inputted complex number is:	" << diff.Real << " + " << diff.Imaginary << "i." << endl;
}
void CComplexNum::Pro(CComplexNum CN2)
{
	CComplexNum pro{};
	pro.Real = Real * CN2.Real - Imaginary * CN2.Imaginary;
	pro.Imaginary = Real * CN2.Imaginary + Imaginary * CN2.Real;
	if (pro.Imaginary < 0)
	{
		pro.Imaginary = -pro.Imaginary;
		cout << "Product of 2 inputted complex number is:	" << pro.Real << " - " << pro.Imaginary << "i." << endl;
	}
	else
		cout << "Product of 2 inputted complex number is:	" << pro.Real << " + " << pro.Imaginary << "i." << endl;
}
void CComplexNum::Quote(CComplexNum CN2)
{
	CComplexNum quote{};
	quote.Real = (Real * CN2.Real + Imaginary * CN2.Imaginary) / (CN2.Real * CN2.Real + CN2.Imaginary * CN2.Imaginary);
	quote.Imaginary = (Imaginary * CN2.Real - Real * CN2.Imaginary) / (CN2.Real * CN2.Real + CN2.Imaginary * CN2.Imaginary);
	if (quote.Imaginary < 0)
	{
		quote.Imaginary = -quote.Imaginary;
		cout << "Quotient of 2 inputted complex number is:	" << quote.Real << " - " << quote.Imaginary << "i." << endl;
	}
	else
		cout << "Quotient of 2 inputted complex number is:	" << quote.Real << " + " << quote.Imaginary << "i." << endl;
}