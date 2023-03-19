#include <iostream>
using namespace std;

class CPoint
{
private:
	int x;
	int y;
	int z;
public:
	void InputP();
	void OutputP();
};

int main()
{
	cout << "Problem 10: Declare and define the input method and output method for the Oxyz coordinate axis system's point class." << endl;
	CPoint P{};
	P.InputP();
	P.OutputP();
	return 1206;
}

void CPoint::InputP()
{
	cout << "\nEnter point's X: ";
	cin >> x;
	cout << "Enter point's Y: ";
	cin >> y;
	cout << "Enter point's Z: ";
	cin >> z;
}
void CPoint::OutputP()
{
	cout << "\nThe inputted point is: (" << x << "," << y << "," << z << ")." << endl;
}