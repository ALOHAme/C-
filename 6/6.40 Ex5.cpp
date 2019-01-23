#include<iostream>
using namespace std;

int power(int base, int exponent)
{

	if (exponent == 1)
		return base;
	else
		return base =base * power(base, exponent - 1);
}

int main()
{
	cout << "Enter a base and an exponent:";
	int base, exponent;
	cin >> base >> exponent;
	power(base, exponent);
	cout << base << " raised to the " << exponent << " is:" << power(base, exponent) << endl;
	system("pause");
}