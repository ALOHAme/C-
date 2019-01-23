
#include<iostream>
using namespace std;

int binaryw(int array[], int low, int high, int target)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (array[mid] > target)
			high = mid - 1;
		else if (array[mid] < target)
			low = mid + 1;
		
		return mid;
	}
	return -1;
}
int main() {
	int evenNumber[50];
	for (int i = 0; i < 50; ++i)
		evenNumber[i] = 2 * i;
	int target;
	cin >> target;
	cout << binaryw(evenNumber, 0, 98, target);
	system("pause");
	return 0;
}
