#include<iostream>
using namespace std;

int smallest, largest;
int gcd(int x, int y)
{
	if (x <= y)
	{
		smallest = x;
		largest = y;
	}
	else
	{
		largest = x;
		smallest = y;
	}
	y = smallest;
	x = largest;
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main()
{
	cout << "Enter two integers:";
	int x, y;
	cin >> x >> y;
	gcd(x, y);
    cout << "Greatest common divisor of " <<x << " and " <<y<< " is " << gcd(x, y) << endl;
	system("pause");
}