#include<iostream>
using namespace std;

int main()
{
	int product = 1;
	int n, i = 1;//i 代表1 - 15的所有奇数
	for (n = 2; i <= 15; n++)
	{
		product = product * i;
		i = (2 * n - 1);
	}

	cout << "The product from 1 to 15 is:" << product << endl;
	system("pause");
	return 0;
}