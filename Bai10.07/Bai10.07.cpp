#include <iostream>
using namespace std;

class CTime
{
private:
	int HH;
	int MM;
	int SS;
public:
	void InputT();
	void OutputT();
};

int main()
{
	cout << "Problem 10: Declare and define the input method and output method for the time class." << endl;
	CTime T{};
	T.InputT();
	T.OutputT();
	return 1206;
}

void CTime::InputT()
{
	cout << "\nEnter the hour: ";
	cin >> HH;
	cout << "Enter the minute: ";
	cin >> MM;
	cout << "Enter the second: ";
	cin >> SS;
	if (HH < 0 || HH > 24 || MM < 0 || MM > 59 || SS < 0 || SS > 59 || (HH == 24 && (MM != 0 || SS != 0)))
	{
		cout << "\nInvalid time. Please re-enter the time." << endl;
		InputT();
	}
}
void CTime::OutputT()
{
	if (HH < 10)
		if (MM < 10)
			if (SS < 10)
				cout << "\nThe inputted time is: 0" << HH << ":0" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: 0" << HH << ":0" << MM << ":" << SS << "." << endl;
		else
			if (SS < 10)
				cout << "\nThe inputted time is: 0" << HH << ":" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: 0" << HH << ":" << MM << ":" << SS << "." << endl;
	else
		if (MM < 10)
			if (SS < 10)
				cout << "\nThe inputted time is: " << HH << ":0" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: " << HH << ":0" << MM << ":" << SS << "." << endl;
		else
			if (SS < 10)
				cout << "\nThe inputted time is: " << HH << ":" << MM << ":0" << SS << "." << endl;
			else
				cout << "\nThe inputted time is: " << HH << ":" << MM << ":" << SS << "." << endl;
}