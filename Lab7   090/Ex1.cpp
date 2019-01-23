#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
	int i, j;  int temp;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

	}
}
int main()
{
	int arr[] = { 3, 5, 4, 10, 7, 9, 2,6,8,1 };
	int size = 10;
	bubble_sort(arr, size);
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
	cout << endl;


	system("pause");
	return 0;
}