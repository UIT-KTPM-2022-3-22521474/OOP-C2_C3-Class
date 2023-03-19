#include <iostream>
using namespace std;

class CComplexNum
{
private:
	float real;
	float imaginary;
public:
	void InputCN();
	void Sum(CComplexNum);
	void Diff(CComplexNum);
	void Pro(CComplexNum);
	void Quote(CComplexNum);
};

int main()
{
	cout << "Problem 05: Code a program enters 2 complex numbers. Find its sum, difference, product and export results." << endl;
	CComplexNum CN1{}, CN2{};
	cout << "\nEnter the first complex number:";
	CN1.InputCN();
	cout << "\nEnter the second complex number:";
	CN2.InputCN();
	CN1.Sum(CN2);
	CN1.Diff(CN2);
	CN1.Pro(CN2);
	CN1.Quote(CN2);
	return 1206;
}

void CComplexNum::InputCN()
{
	cout << "\nEnter the real part of the number:		";
	cin >> real;
	cout << "Enter the imaginary part of the number:		";
	cin >> imaginary;
}

void CComplexNum::Sum(CComplexNum CN2)
{
	CComplexNum sum{};
	sum.real = real + CN2.real;
	sum.imaginary = imaginary + CN2.imaginary;
	if (sum.imaginary < 0)
	{
		sum.imaginary = -sum.imaginary;
		cout << "\nSum of 2 inputted complex number is:		" << sum.real << " - " << sum.imaginary << "i." << endl;
	}
	else
		cout << "\nSum of 2 inputted complex number is:		" << sum.real << " + " << sum.imaginary << "i." << endl;
}
void CComplexNum::Diff(CComplexNum CN2)
{
	CComplexNum diff{};
	diff.real = real - CN2.real;
	diff.imaginary = imaginary - CN2.imaginary;
	if (diff.imaginary < 0)
	{
		diff.imaginary = -diff.imaginary;
		cout << "Difference of 2 inputted complex number is:	" << diff.real << " - " << diff.imaginary << "i." << endl;
	}
	else
		cout << "Difference of 2 inputted complex number is:	" << diff.real << " + " << diff.imaginary << "i." << endl;
}
void CComplexNum::Pro(CComplexNum CN2)
{
	CComplexNum pro{};
	pro.real = real * CN2.real - imaginary * CN2.imaginary;
	pro.imaginary = real * CN2.imaginary + imaginary * CN2.real;
	if (pro.imaginary < 0)
	{
		pro.imaginary = -pro.imaginary;
		cout << "Product of 2 inputted complex number is:	" << pro.real << " - " << pro.imaginary << "i." << endl;
	}
	else
		cout << "Product of 2 inputted complex number is:	" << pro.real << " + " << pro.imaginary << "i." << endl;
}
void CComplexNum::Quote(CComplexNum CN2)
{
	CComplexNum quote{};
	quote.real = (real * CN2.real + imaginary * CN2.imaginary) / (CN2.real * CN2.real + CN2.imaginary * CN2.imaginary);
	quote.imaginary = (imaginary * CN2.real - real * CN2.imaginary) / (CN2.real * CN2.real + CN2.imaginary * CN2.imaginary);
	if (quote.imaginary < 0)
	{
		quote.imaginary = -quote.imaginary;
		cout << "Quotient of 2 inputted complex number is:	" << quote.real << " - " << quote.imaginary << "i." << endl;
	}
	else
		cout << "Quotient of 2 inputted complex number is:	" << quote.real << " + " << quote.imaginary << "i." << endl;
}