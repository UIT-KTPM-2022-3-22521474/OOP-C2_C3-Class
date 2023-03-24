#include <iostream>
using namespace std;

class CGregorianDate
{
private:
	int DD;
	int MM;
	int YYYY;
public:
	void InputD(int&);
	void FollowingDate(CGregorianDate, int);
};

int main()
{
	cout << "Problem 05: Code a program enters a date. Find the next date and export result." << endl;
	CGregorianDate InpDate{}, NextDate{};
	int LastDateOfMonth;
	InpDate.InputD(LastDateOfMonth);
	InpDate.FollowingDate(NextDate, LastDateOfMonth);
	return 0;
}

void CGregorianDate::InputD(int& LastDateOfMonth)
{
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
		InputD(LastDateOfMonth);
	}
}

void CGregorianDate::FollowingDate(CGregorianDate NextDate, int LastDateOfMonth)
{
	if (DD < LastDateOfMonth)
	{
		NextDate.DD = DD + 1;
		NextDate.MM = MM;
		NextDate.YYYY = YYYY;
	}
	else
	{
		if (MM != 12)
		{
			NextDate.DD = 1;
			NextDate.MM = MM + 1;
			NextDate.YYYY = YYYY;
		}
		else
		{
			NextDate.DD = 1;
			NextDate.MM = 1;
			NextDate.YYYY = YYYY + 1;
		}
	}
	cout << "\nThe next date is: " << NextDate.DD << "/" << NextDate.MM << "/" << NextDate.YYYY << "." << endl;
}