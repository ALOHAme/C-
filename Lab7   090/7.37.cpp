#include<iostream>
using namespace std;

int min = 10000,min1;
int recursiveMinium(int array[], int low, int high)
{
	if (low <= high)
	{
		if (array[low] > array[high])
			min1 = array[high];
		else
			min1 = array[low];
		if (min > min1)
			min = min1;
		return recursiveMinium(array, low++, high--);
	}
	else
	return min;
	}

int main()
{
	int array[] = { 1,2,3,4,5};
	recursiveMinium(array, 0, 4);
	cout <<"最小值为："<< min << endl;
	system("pause");
	return 0;
}