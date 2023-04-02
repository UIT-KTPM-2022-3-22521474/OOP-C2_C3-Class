#include <iostream>
using namespace std;

class CPoint
{
private:
	int x;
	int y;
public:
	void InputCP();
};

void CPoint::InputCP()
{
	cout << "\nEnter center's X:		";
	cin >> x;
	cout << "Enter center's Y:		";
	cin >> y;
}