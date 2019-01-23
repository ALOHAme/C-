#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	const int size = 1000;
	int arr[size] = {};
	for (int j = 0; j < size; ++j)
		arr[j] = 1;
	for (int k = 2; k < size; ++k)
	{
		for (int n = 2; n <= sqrt(k); ++n)
		{
			if (k%n == 0)
				arr[k] = 0;
		}
	}
	for (int i = 2; i < size; ++i)
	{
		if (arr[i])
			cout << i << ' ';
	}
	system("pause");
	return 0;
}