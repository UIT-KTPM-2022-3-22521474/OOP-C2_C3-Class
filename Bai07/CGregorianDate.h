class CGregorianDate
{
private:
	int DD;
	int MM;
	int YYYY;
public:
	void InputD();
	void OutputD();
	bool CheckLeapYear();
	void PreviousDate(CGregorianDate);
};

bool CGregorianDate::CheckLeapYear()
{
	if (YYYY % 400 == 0 || (YYYY % 4 == 0 && YYYY % 100 != 0))
		return true;
	return false;
}

void CGregorianDate::InputD()
{
	int DateInMonth = 0;
	cout << "\nEnter the date: ";
	cin >> DD;
	cout << "Enter the month: ";
	cin >> MM;
	cout << "Enter the year: ";
	cin >> YYYY;
	switch (MM)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		DateInMonth = 31;
		break;
	case 4: case 6: case 9: case 11:
		DateInMonth = 30;
		break;
	case 2:
		if (CheckLeapYear() == true)
			DateInMonth = 29;
		else
			DateInMonth = 28;
		break;
	}
	if (DateInMonth == 0 || YYYY < 1 || (DateInMonth != 0 && (DD > DateInMonth || DD < 1)))
	{
		cout << "\nInvalid date. Please re-enter the date." << endl;
		InputD();
	}
}

void CGregorianDate::OutputD()
{
	cout << "\nThe inputted date is: " << DD << "/" << MM << "/" << YYYY << "." << endl;
}

void CGregorianDate::PreviousDate(CGregorianDate PrevDate)
{
	if (DD == 1)
	{
		switch (MM)
		{
		case 1:
		{
			PrevDate.DD = 31;
			PrevDate.MM = 12;
			PrevDate.YYYY = YYYY - 1;
			break;
		}
		case 2: case 4: case 6: case 8: case 9: case 11:
		{
			PrevDate.DD = 31;
			PrevDate.MM = MM - 1;
			PrevDate.YYYY = YYYY;
			break;
		}
		case 5: case 7: case 10: case 12:
		{
			PrevDate.DD = 30;
			PrevDate.MM = MM - 1;
			PrevDate.YYYY = YYYY;
			break;
		}
		case 3:
		{
			if (PrevDate.CheckLeapYear() == true)
				PrevDate.DD = 29;
			else
				PrevDate.DD = 28;
			PrevDate.MM = MM - 1;
			PrevDate.YYYY = YYYY;
			break;
		}
		}
	}
	else
	{
		PrevDate.DD = DD - 1;
		PrevDate.MM = MM;
		PrevDate.YYYY = YYYY;
	}
	cout << "\nThe previous date is: " << PrevDate.DD << "/" << PrevDate.MM << "/" << PrevDate.YYYY << "." << endl;
}