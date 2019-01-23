#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void gcd(int number1, int number2, int &divisor)
{
	int mod = 0, smallest,largest;
	if (number1 <= number2)
	{
		smallest = number1;
		largest = number2;
	}
	else
	{
		largest = number1;
		smallest = number2;
	}
		mod = largest % smallest;
		if (mod != 0)
		{
			do
			{
				divisor = mod;
				mod = smallest % mod;
			} while (mod != 0);

		}
		else
			divisor = smallest;

	}
	


int main()
	{
	int number1, number2, divisor;
	while (1) 
	{
		cout << "Enter two numbers:";
		cin >> number1 >> number2;
		gcd(number1, number2, divisor);
		cout << "The greatest common divisor of  " << number1 << " and " << number2 << " is :" << divisor << endl;
	}
	system("pause");
	}
