#include<iostream>
#include<iomanip>
using namespace std;

int i;
double fibonacci(int num)
{
	double sum0 = 0, sum1 = 1, sum;
	if (num == 0)
		return sum0;
	else
	{
		if (num == 1)
			return sum1;
		else
		{
			for (int n = 1; n < i; ++n)
			{
				sum = sum0 + sum1;
				sum0 = sum1;
				sum1 = sum;
			}
			return sum;
		}
	}
}

int main()
{

	for (i = 0; i <= 35; ++i)
	{
		fibonacci(i);
		cout << "fibonacci(" << i << ")=" <<fixed <<setprecision(1)<< fibonacci(i) << endl;
	}
	system("pause");
}