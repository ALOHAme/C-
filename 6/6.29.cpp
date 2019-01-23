#include<iostream>
using namespace std;

int result=0;

bool perfect(int num)
{
	int result = 0;

	for (int i = 1; i <= num / 2; ++i)
	{
		if (num % i == 0)
			 result += i;
		
	}
	if (num == result)
		return 1;
	else
		return 0;

}

void print(int num)
{
	cout << num << "=1";
	for (int i = 2; i <= num / 2; ++i)
	{
		if (num%i == 0)
			cout << "+" << i;
	}
	cout << endl;
}

int main()
{
	cout << "perfect between 1 to 1000\n";
	int k;
	for (k = 1; k <= 1000; ++k)
	{
		if (perfect(k))
			print(k);
	}
	system("pause");
	
}
//bool