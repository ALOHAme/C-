#include<iostream>
#include<iomanip>
using namespace std;

int result;

bool  prime(int num)
{
		int counter = 0;
		for (int i = 1; i <= num; ++i)
		{
			if (num%i == 0)
				counter++;
		}
		if (counter == 2)
			return 1;
		else
			return 0;
	
}

int main()
{
	int s, count;
	for ( s = 2, count = 0; s <= 10000; ++s )
	{
		if (prime(s))
		{
			cout << setw(8) << s;
			++count;
		}
		if (count % 10 == 0)
			cout << endl;
	}

	cout << "Total of 1 to 10000 is:" << count;

	system("pause");

	
}