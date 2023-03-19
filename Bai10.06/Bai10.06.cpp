#include <iostream>
using namespace std;

class CGregorianDate
{
private:
	int DD;
	int MM;
	int YYYY;
public:
	void InputD();
	void OutputD();
};

int main()
{
	cout << "Problem 10: Declare and define the input method and output method for the date class." << endl;
	CGregorianDate D{};
	D.InputD();
	D.OutputD();
	return 1206;
}

void CGregorianDate::InputD()
{
	int LastDateOfMonth;
	cout << "\nEnter the date: ";
	cin >> DD;
	cout << "Enter the month: ";
	cin >> MM;
	cout << "Enter the year: ";
	cin >> YYYY;
	switch (MM)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		LastDateOfMonth = 31;
		break;
	case 4: case 6: case 9: case 11:
		LastDateOfMonth = 30;
		break;
	case 2:
		if (YYYY % 400 == 0 || (YYYY % 4 == 0 && YYYY % 100 != 0))
			LastDateOfMonth = 29;
		else
			LastDateOfMonth = 28;
		break;
	default: LastDateOfMonth = 0;
	}
	if (LastDateOfMonth == 0 || YYYY < 1 || (LastDateOfMonth != 0 && (DD > LastDateOfMonth || DD < 1)))
	{
		cout << "\nInvalid date. Please re-enter the date." << endl;
		InputD();
	}
}
void CGregorianDate::OutputD()
{
	cout << "\nThe inputted date is: " << DD << "/" << MM << "/" << YYYY << "." << endl;
}