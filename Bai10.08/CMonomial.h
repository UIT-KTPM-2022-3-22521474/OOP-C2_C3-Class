class CMonomial
{
private:
	float coefficient;
	int power;
public:
	void Input();
	void Output();
};

void CMonomial::Input()
{
	cout << "\nEnter the coefficient: ";
	cin >> coefficient;
	cout << "\nEnter the power: ";
	cin >> power;
}

void CMonomial::Output()
{
	cout << "\nThe monomial is: " << coefficient << "*x^" << power << "." << endl;
}