#include <iostream>
using namespace std;

class CComplexNum
{
private:
	float real;
	float imaginary;
public:
	void InputCN();
	void OutputCN();
};

int main()
{
	cout << "Problem 10: Declare and define the input method and output method for the complex number class." << endl;
	CComplexNum CN{};
	CN.InputCN();
	CN.OutputCN();
	return 1206;
}

void CComplexNum::InputCN()
{
	cout << "\nEnter the real part of the number:		";
	cin >> real;
	cout << "Enter the imaginary part of the number:		";
	cin >> imaginary;
}
void CComplexNum::OutputCN()
{
	if (imaginary < 0)
	{
		imaginary = -imaginary;
		cout << "\nThe inputted complex number is:			" << real << " - " << imaginary << "i." << endl;
	}
	else
		cout << "\nThe inputted complex number is:			" << real << " + " << imaginary << "i." << endl;
}