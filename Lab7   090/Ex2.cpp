#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
	int i, j;  int temp;
	for (i = 0; i < size - 1; i++) {
		int flag = 1;
		for (j = 0; j < size - 1 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		if (flag)
			break;
	}
}
int main()
{
	int arr[10] = { 3, 5, 4, 10, 7, 9, 2,8,0,1 };
	bubble_sort(arr, 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';
	cout << endl;
	system("pause");
	return 0;
}