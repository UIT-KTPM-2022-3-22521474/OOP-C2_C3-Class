class C3DPoint
{
private:
	float x;
	float y;
	float z;
public:
	void InputP();
	void OutputP();
	double Distance(C3DPoint);
};

void C3DPoint::InputP()
{
	cout << "Enter point's X: ";
	cin >> x;
	cout << "Enter point's Y: ";
	cin >> y;
	cout << "Enter point's Z: ";
	cin >> z;
}

void C3DPoint::OutputP()
{
	cout << "(" << x << ", " << y << ", " << z << ")." << endl;
}

double C3DPoint::Distance(C3DPoint P2)
{
	return sqrt((x - P2.x) * (x - x) + (y - P2.y) * (y - P2.y) + (z - P2.z) * (z - P2.z));
}