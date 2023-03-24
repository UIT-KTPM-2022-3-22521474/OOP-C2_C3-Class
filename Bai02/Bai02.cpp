#include <iostream>
#include <iomanip>
using namespace std;

class CPoint
{
private:
	float x;
	float y;
	float z;
public:
	void InputP();
	void Distance(CPoint);
};

int main()
{
	cout << "Problem 02: Code a program enters 2 points in Oxyz. Calculate its distance and export the result." << endl;
	CPoint P1{}, P2{};
	cout << "\nEnter first point's coordinate: " << endl;
	P1.InputP();
	cout << "\nEnter second point's coordinate: " << endl;
	P2.InputP();
	P1.Distance(P2);
	return 0;
}

void CPoint::InputP()
{
	cout << "Enter point's X: ";
	cin >> x;
	cout << "Enter point's Y: ";
	cin >> y;
	cout << "Enter point's Z: ";
	cin >> z;
}

void CPoint::Distance(CPoint P2)
{
	double d = sqrt((x - P2.x) * (x - x) + (y - P2.y) * (y - P2.y) + (z - P2.z) * (z - P2.z));
	cout << "\nThe distance of 2 entered points is: " << setw(5) << setprecision(6) << d << "." << endl;
}